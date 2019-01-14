// CS 575, H.W #2D Gagandeep S Brar 
#include <iostream>
#include <string>

using namespace std;
// function prototype
bool die(const string & msg);

int main(){
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	float d = 0.0;
	float e = 0.0;
	

	cout << "5 scores:";
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;

	if (!cin) die("non-numeric input");
	if (a < 0) die("negative input");
	if (b < 0) die("negative input");
	if (c < 0) die("negative input");
	if (d < 0) die("negative input");
	if (e < 0) die("negative input");

	cout << (a + b + c + d + e) / 5 <<endl;
	

}

bool die(const string & msg){
	cout << "Fatal error: " << msg << endl;
	exit(EXIT_FAILURE);

}