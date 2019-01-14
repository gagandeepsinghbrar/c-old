// CS 575, H.W #5D Gagandeep S Brar 
#include <iostream>
#include <string>

using namespace std;
// function prototype
bool die(const string & msg);

int main(){
	unsigned average, a, b, c, d, e;
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

	average = (a + b + c + d + e) / 5;
	cout << average << endl;


}
bool die(const string & msg){
	cout << "Fatal error: " << msg << endl;
	exit(EXIT_FAILURE);

}