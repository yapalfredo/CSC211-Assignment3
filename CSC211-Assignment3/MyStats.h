#pragma once
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

const int rowSize = 10;
const int colSize = 10;

class MyStats
{
private:
	int arrStat[rowSize][colSize];
	int temp;
public:
	MyStats();
	~MyStats();
	
	void setArrStat(int, int, int); 
	int getArrStat(int, int);

	void setTemp(int);
	int getTemp();

	void init();

	void print();

	double average();

	int findLargest();

	int findSmallest();

};