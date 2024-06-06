#include <iostream>
#include <ctime>
using namespace std;

int sum_find(int a, int b, int sum = 0) {
	if (a == b)
	{
		return sum + b;
	}
	else {
		sum += a;
		a++;
		sum_find(a, b, sum);
	}
}

int main() {
	int a, b;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << sum_find(a, b);
}