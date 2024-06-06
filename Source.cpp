#include <iostream>
#include <ctime>
using namespace std;

void star_painter(int number) {
	if (number == 0)
	{
		cout << '0';
	}
	else if (number == 1)
	{
		cout << " * ";
	}
	else
	{
		cout << " * ";
		star_painter(number - 1);
	}
}

int main() {
	int stars;
	cout << "Enter number of stars: ";
	cin >> stars;
	star_painter(stars);
}