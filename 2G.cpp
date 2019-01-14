#include <iostream>
#include <string>

using namespace std;

//function prototype
bool die(const string & msg);

int main(){
	unsigned int seconds = 0;
	unsigned int hours = 0;
	unsigned int minutes = 0;
	cout << "Total seconds:";
	cin >> seconds;
	hours = (seconds / 60 / 60) % 24;
	// seconds = seconds- (hours * 60);
	minutes = (seconds / 60) % 60;
	seconds = (seconds % 60);
	if (!cin) die("non-numeric input ");
	cout << hours << ":" << minutes << seconds << endl;



}
bool die(const string & msg){
	cout << "Fatal error:" << msg << endl;
	exit(EXIT_FAILURE);



}