#pragma once
#include <vector>
#include "WinFunctions.h"
#include "Entity.h"

class Entities {

private:
	WinFunc winFunc;

public:
	int amount;
	std::vector<Entity> list{ amount };

	void GetEntityAmount();

	Entities(WinFunc wFunc)
	{
		winFunc = wFunc;
		GetEntityAmount(); 
	}

	void GetInfo();
	void Print();
};