// CS 575, H.W #2C Gagandeep S Brar 
#include <iostream>
#include <string>

using namespace std;
// function prototype
bool die(const string & msg);

int main(){
	double value = 0.0;
	unsigned evenvalue = 0;
	unsigned oddvalue = 0;
	double halfvalue = 0;
	cout << "Give me a non-negative floating point number :";
	cin >> value;

	if (value < 0) die("negative input");
	if (!cin) die("non numeric input");

	cout << " nearest interger must be " << (int)(value + .5) << endl;

	if ((int)value % 2 == 0){
		evenvalue = value;
		oddvalue = value + 1;
	}
	if ((int)value % 2 == 1){
		evenvalue = value + 1;
		oddvalue = value;
	}
	cout << "nearest even integer must be " << evenvalue << endl;
	cout << "nearest odd integer must be " << oddvalue << endl;
	cout << "nearest half- integer must be" << round(value*2.0) / 2.0 << endl;
}
bool die(const string & msg){
	cout << "Fatal Error:" << msg << endl;
	exit(EXIT_FAILURE);
}




	cin >> d;
	cin >> e;

	if (!cin) die("non-numeric input");
	if (a < 0) die("negative input");
	if (b < 0) die("negative input");
	if (c < 0) die("negative input");
	if (d < 0) die("negative input");
	if (e < 0) die("negative input");

	average = (a + b + c + d + e) / 5;
	average = (int)(average + .5);
	cout << average << endl;


}

bool die(const string & msg){
	cout << "Fatal error: " << msg << endl;
	exit(EXIT_FAILURE);

}