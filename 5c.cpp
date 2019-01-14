// CS 575, H.W #5C Gagandeep S Brar
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

		if (!cin) break;

		if (integer % 2 == 1)
			evens++;
		else
			odds++;
	}
	cout << " Number of even numbers: " << odds << endl;

	return 0;
}