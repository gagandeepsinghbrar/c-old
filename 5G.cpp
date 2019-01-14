// CS 575, H.W #5G Gagandeep S Brar 
#include <iostream>
#include <string>

using namespace std;

bool die(const string & msg);

int main(){

	unsigned long long i, sum;
	sum = 0;
	i = 1;

	// begin do-while loop from 1 to 100
	do
	{
		sum = sum + i;
		i = i + 1;
	} while (i <= 1000000);

	cout << "The sum from 1 to 1000000 = " << sum;

	cin.get();
	return 0;
}

bool die(const string & msg){
	cout << "Fatal error: " << msg << endl;
	exit(EXIT_FAILURE);
}

