#include <iostream>
using namespace std;

int main()
{
	int a = 20;
	int b = 10;

	cout << "Before: a is " << a << " and b is " << b << endl;

	int temp = a;
	a = b;
	b = temp;
	cout << "After: a is " << a << " and b is " << b << endl;

	system("pause>0");
}
