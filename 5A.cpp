// CS 575, H.W #5A Gagandeep S Brar 
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// function prototype


int main()
{
	int i, y;
	i = 0;
	cout << "Enter the multiple and limit: ";
	cin >> i >> y;
	while (i < y)
	{

		cout << i << " ";
		i = i + 5;


	}

	cout << endl;


	for (i = 0; i < y; i = i + 5)
	{

		cout << i << " ";

	}
	cout << endl;
	i = 0; 
	do
	{
		cout << i << " ";
		i = i + 5;
	} while (i < y);







}
