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
	//CONSTRUCTOR
	MyStats();
	//DESTRUCTOR
	~MyStats();

	// MUTATORS
	void setArrStat(int, int, int); 
	void setTemp(int);
	// ACCESSORS
	int getArrStat(int, int);
	int getTemp();

	// WILL INITIALIZE THE VALUES OF THE ELEMENTS IN THE ARRAY
	void init();

	// WILL PRINT THE INDIVIDUAL ELEMENTS IN THE ARRAY
	void print();

	// WILL CALCULATE FOR THE AVERAGE VALUE OF ALL ELEMENTS IN THE ARRAY
	double average();

	// WILL LOOK FOR THE LARGEST VALUE IN THE ARRAY
	int findLargest();

	// WILL LOOK FOR THE SMALLEST VALUE IN THE ARRAY
	int findSmallest();
};