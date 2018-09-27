#include "TestMyStats.h"

TestMyStats::TestMyStats()
{
	//constructor
	_myStat.init();
}

TestMyStats::~TestMyStats()
{
	//destructor
}

void TestMyStats::loadMyStat()
{
	// this class will be loaded in the main function
	cout << "The initialized values of elements in the array are: " << endl << endl;
	_myStat.print();

	cout << endl;
	cout << "The average of the values stored in the array is: " << _myStat.average() << endl;

	cout << endl;
	cout << "The largest value stored in the array is: " << _myStat.findLargest() << endl;

	cout << endl;
	cout << "The smallest value stored in the array is: " << _myStat.findSmallest() << endl << endl;
}