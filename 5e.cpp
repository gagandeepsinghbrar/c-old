// CS 575, H.W #5E Gagandeep S Brar 
#include <iostream> 
using namespace std;
#include <cctype> 


int main()
{
	int integer;
	int odds = 0;
	int evens = 0;

	while (true){

		cout << "Please proceed with the  integer  :";
		cin >> integer;

		if (!cin) cout << "That's not even a number";

		if (integer % 7 == 0)
			cout << "Thanks for" << integer << endl;

		else if (integer % 7 != 0)
			cout << "Not divisible by 7";

	}


	return 0;
}