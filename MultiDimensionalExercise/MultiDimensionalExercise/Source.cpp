#include <iostream>

using namespace std;

/*
How would you write a 2D array using 
only a 1D array. What extra functions might
you need to accomplish this?
*/

/*
			Columns 
		 0    1   2
		+---+---+---+
	0	| 0 | 1 | 2 |
		+---+---+---+
	1	| 3 | 4 | 5 |
		+---+---+---+
	2	| 6 | 7 | 8 |
		+---+---+---+
	*/

int Index(int r, int c, int NumberOfColumns);

int main() {

	const int Max = 3;

	int array[Max * Max];

	for (int r = 0; r < Max; r++) {
		for (int c = 0; c < Max; c++) {
			array[Index(r, c, Max)] = Index(r, c, Max);

			cout << "r =" << r << " ,c =" << c << endl;
			cout << "Array[" << Index(r, c, Max) << "]= "<< array[Index(r, c, Max)] << endl;
		}
	}

	return 0;
}

int Index(int r, int c, int NumberOfColumns)
{
	return c + NumberOfColumns*r;
}
