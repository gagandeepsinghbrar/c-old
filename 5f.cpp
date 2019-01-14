// CS 575, H.W #5F Gagandeep S Brar 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main(){

	int
		value = 0,
		largestNumber = 0;

	cout << "Enter number to find the largest : ";
	cin >> value;

	while (true){
		if (value > largestNumber)
			largestNumber = value;
		if (!cin) break;
		cout << "Enter number to find the largest : ";
		cin >> value;
	}

	cout << "Largest number is: " << largestNumber << ' ' << endl;



	return 0;
}