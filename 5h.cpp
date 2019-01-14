// CS 575, H.W #5H Gagandeep S Brar 
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string password, guess;
	password = "Gandalf";
	cout << "Please enter password to continue:   ";
	int chances;
	for (chances = 0; chances <5; chances++) {
		getline(cin, guess);
		if (guess == password){
			cout << "Ok, you now have access to Bob Hart's checking account.";
			return 0;
		}
		else
			cout << "Nope, Try again" << endl;
	}
	cout << "You are obviously a criminal. Homeland Security has been notified !!!" << endl;
	return 0;
}