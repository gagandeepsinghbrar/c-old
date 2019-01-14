// CS 575 , H.W #5B , Gagandeep S Brar
#include <iostream>
#include <string>

using namespace std;
int main()
{
	unsigned x;
	cout << "Enter the count number : ";
	cin >> x;
	float total = 0;
	float product = 1;

	for (int count = 0; count < x; count++)  // Loop 7 times
	{
		int num = 0;   // moved declaration of count and num to keep their scope smaller
		std::cout << "Please enter a number :";
		std::cin >> num;
		total += num;
		product = product*num;

	}
	std::cout << "the sum is " << total << " and product is " << product << std::endl; // " instead of ' and total instead of num
}