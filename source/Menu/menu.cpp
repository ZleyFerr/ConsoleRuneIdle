#include "menu.h"

void gameMenu::renderMenu()
{
	std::cout << "Welcome to ConsoleRuneIdle! Enter the numbers to play!\n";
	for (unsigned int i = 0; i < menuPointsCounter; i++)
	{
		std::cout << "\n" << i << ": " << menuLines[i];
	}
}

void gameMenu::switchMenu()
{
	renderMenu();
}

void gameMenu::updateCounter(unsigned int newPointAmount)
{
	menuPointsCounter = newPointAmount;
}

unsigned int gameMenu::getCounter() const
{
	return menuPointsCounter;
}

void gameMenu::addLine(std::string line)
{
	menuLines.push_back(line);
	updateCounter( ++menuPointsCounter );
}
