//CS 575 , H.W #2H , Gagandeep S Brar
#include <iostream>
#include <string>

using namespace std;

//function prototype
bool die(const string & msg);

int main(){
	unsigned int number = 0;
	
	cout << "Give me a four digit number:";
	cin >> number;
	int d4; /* 4th digit of the number */
	int d3; /* 3rd digit of the number */
	int d2; /* 2nd digit of the number */
	int d1; /* 1st digit of the number */


	if (number > 9999) die("Number not a 4 digit number. Too big");
	if (number < 1000) die("Number not a 4 digit number. Too small ");
	if (!cin) die("non-numeric input ");

	d4 = (number % 10);
	d3 = (number / 10) % 10;
	d2 = (number / 100) % 10;
	d1 = (number / 1000) % 10;

	printf("%d\n", d1);
	printf("%d\n", d2);
	printf("%d\n", d3);
	printf("%d\n", d4);
	
	

}
bool die(const string & msg){
	cout << "Fatal error:" << msg << endl;
	exit(EXIT_FAILURE);



}