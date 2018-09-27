#pragma once
#include "MyStats.h"

class TestMyStats
{
private:
	// INITIALIZED AN INSTANCE OF OBJECT MyStats
	MyStats _myStat;
public:
	// CONSTRUCTOR
	TestMyStats();

	// DESTRUCTOR
	~TestMyStats();
	
	// WILL 'ACT' AS THE MAIN()
	void loadMyStat();
};