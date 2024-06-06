#include <iostream>
#include <ctime>
using namespace std;

int result(int num, int power)
{
	if (power == 0)
	{
		return 0;
	}
	else if (power == 1)
	{
		return num;
	}
	else {
		result(num * num, power - 1);
	}
	
}


int main() {
	cout << result(5, 2) << endl;
}