#pragma once
#include <iostream>
#include <vector>
#include <string>

class gameMenu
{
private:
	unsigned int menuPointsCounter;
	std::vector<std::string> menuLines;
public:
	void renderMenu();
	void switchMenu();
	void updateCounter( unsigned int newPointAmount );
	unsigned int getCounter() const;

	void addLine(std::string line);
	gameMenu() { menuPointsCounter = 0; }
};
