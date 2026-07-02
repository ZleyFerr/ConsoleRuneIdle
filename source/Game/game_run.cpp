#include "game_run.h"
#include "menu_fill.h"

gameMenu menu;

void run()
{
	fillMenu(menu);
	menu.renderMenu();
}

int main()
{
	run();
}
