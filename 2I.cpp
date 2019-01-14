// CS 575, H.W # 2I , Gagandeep S Brar
#include <iostream>
#include <string>

using namespace std;

//function prototype
bool die(const string & msg);

int main(){
	int number = 0;

	cout << "Give me a four digit number:";
	cin >> number;
	

	
	if (number > 9999) die("Number not a 4 digit number. Too big");
	if (number < 1000) die("Number not a 4 digit number. Too small ");
	if (!cin) die("non-numeric input ");

	int squared = number*number;
	cout << "Square of the number is " << squared << endl;

	int reverse = 0;
	for (int i = 3; i >= 0; i--){
		int digit = number % 10;
		reverse = reverse + digit;
		reverse = reverse * 10;
		number = number / 10;
	}
	reverse = reverse / 10;
	
	cout << "Reversed Number is" << reverse << endl;
	cout << "Square of reversed number is" << reverse*reverse << endl;



}
bool die(const string & msg){
	cout << "Fatal error:" << msg << endl;
	exit(EXIT_FAILURE);

}