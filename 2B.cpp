// CS 575 , H.W# 2 B , Gagandeep S Brar
#include <iostream>
#include <string>
using namespace std;

// function prototype
bool die(const string & msg);

int main(){


	
	unsigned int coins;
	cout << "Cents:";
	cin >> coins;
	if (!cin){
		die("input error");
	}
	else if (coins > 25000){
		die("Too much Money");
	}
	cout << "Quarters:" << coins / 25 << endl;
	coins = coins % 25;
	cout << "Dimes:" << coins / 10 << endl;
	coins = coins % 10;
	cout << "Nickels:" << coins / 5 << endl;
	coins = coins % 5;
	cout << "Pennies:" << coins << endl;


}

bool die(const string & msg){
	cout << "Fatal error:" << msg << endl;
	exit(EXIT_FAILURE);
}