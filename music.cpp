#include "music.h"
#include <graphics.h>
#include "Windows.h"
#include "music_data.h"

music::music(const std::string_view path) : music_path(path) {
	generate_alias();
}

void music::open() const {
	if (is_open != false)
		return;
	is_open = true;
	mciSendString(("open " + music_path + " alias " + alias).c_str(), nullptr, 0, nullptr);
}

void music::play() const {
	if (is_open == false)
		open();
	is_play = true;
	mciSendString(("play " + alias).c_str(), nullptr, 0, nullptr);

}

void music::stop() const {
	if (is_open == false)
		return;
	is_play = false;
	mciSendString(("stop " + alias).c_str(), nullptr, 0, nullptr);
}

void music::resume() const {
	if (is_open == false)
		return;
	is_play = true;
	mciSendString(("resume " + alias).c_str(), nullptr, 0, nullptr);
}

void music::close() const {
	if (is_open == false)
		return;
	is_open = false;
	is_play = false;
	mciSendString(("close " + alias).c_str(), nullptr, 0, nullptr);
}

void music::loop() const {
	if (is_open == false || is_play == false) {
        play();
	}

	char get[128] = { 0 };

	MCIERROR error = mciSendString(("status " + alias + " mode").c_str(), get, sizeof(get), nullptr);

	if (error == 0) 
		if (std::strcmp(get, "stopped") == 0) {
			close();
			play(); // ÖØÐÂ²¥·Å
		}
}

void music::generate_alias() {
	music_data::generate_alias_mutex.lock();
	alias = std::to_string(music_data::music_quantity++);
	music_data::generate_alias_mutex.unlock();
}

void music::replay() const {
	play();
	close();
	play();
}
