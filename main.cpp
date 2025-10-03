#include <iostream>
#include "environment_management.h"
#include "data/environment/environment_data.h"
#include "thread_management.h"
#include "IO_operations_management.h"
#include <filesystem>
#include <fstream>
#include "global_data.h"
#include "gui_main.h"
#include "command.h"

using namespace std;

int main() {



	IO_operations_management::save();
	thread_management::initialization();
	environment_management::initialization();


	initgraph(environment_data::window_long, environment_data::window_width, EX_SHOWCONSOLE);

	global_data::is_games = true;

	gui::gui_main();

}