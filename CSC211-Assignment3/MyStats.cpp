#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

class MyStats
{
private:
	int **arrStat;
public:
	MyStats() 
	{
		//constructor
		init(arrStat);
	}
	~MyStats()
	{
		//destructor
	}
	
	void init(int **arrStat)
	{
		srand(time(NULL));

		for (int row = 0; row < 9; row++)
		{
			for (int col = 0; col < 9; col++)
			{
				arrStat[row][col]= rand() % (255-128);
			}
		}
	}

	void print() {

		cout << "The initialized values in the array are: " << endl << endl;
		for (int row = 0; row < 9; row++)
		{
			for (int col = 0; col < 9; col++)
			{
				cout << arrStat[row][col] << " ";
			}
			cout << endl;
		}
	}

	double average();

	int findLargest();

	int findSmallest();

};