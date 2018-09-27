#pragma once
#include "MyStats.h"

class TestMyStats
{
private:
	MyStats newStats;
public:
	TestMyStats();
	~TestMyStats();
	
	void loadStats();
};

TestMyStats::TestMyStats()
{
	//Constructor
	newStats.init();
}

TestMyStats::~TestMyStats()
{
	//destructor
}

void TestMyStats::loadStats()
{
	//This function will be loaded in main()
	cout << "The initialized values in the array are: " << endl << endl;
	newStats.print();

	cout << endl << "The average of the values store in the array is: "
		<< newStats.average() << endl << endl;

	cout << "The largest number in the array is: "
		<< newStats.findLargest() << endl << endl;

	cout << "The smallest number in the array is: "
		<< newStats.findSmallest() << endl << endl;

	newStats.print();
}