#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

class MyStats
{
private:
	int arrStat[10][10];
public:
	MyStats();
	~MyStats();
	
	void init();
	void print();
	double average();
	int findLargest();
	int findSmallest();

};

MyStats::MyStats()
{
}

MyStats::~MyStats()
{
}