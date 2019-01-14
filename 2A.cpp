// CS 575, H.W 2A , Gagandeep S Brar
#include <iostream>
#include <string>
using namespace std;

// function prototype
bool die(const string & msg);

int main(){


	unsigned int quarters, nickels, dimes, pennies;
	unsigned int cents = 0;
	cout << "number of quarters:";
	cin >> quarters;
	if (!cin){ die("input failure"); }
else if (quarters >= 0 && quarters < 1000){ cents += 25 * quarters; }
	else{
		die("Too many Coins");
	}
	cout << "number of nickels:";
	cin >> nickels;
	if (!cin){ die("input failure"); }
	else if (nickels >= 0 && nickels < 1000){ cents += 5 * nickels; }
	else{
		die("Too many Coins");
	}
	cout << "number of dimes:";
	cin >> dimes;
	if (!cin){ die("input failure"); }
	else if (dimes >= 0 && dimes < 1000){ cents += 10 * dimes; }
	else{
		die("Too many Coins");
	}
	cout << "number of pennies:";
	cin >> pennies;
	if (!cin){ die("input failure"); }
	else if (pennies >= 0 && pennies < 1000){ cents += pennies; }
	else{
		die("Too many Coins");
	}

	cout << " The total number of cents is :" << cents << endl;


}

bool die(const string & msg){
	cout << "Fatal error:" << msg << endl;
	exit(EXIT_FAILURE);
}