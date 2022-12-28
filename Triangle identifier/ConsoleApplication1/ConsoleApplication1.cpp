#include <iostream>
#include <string>
using namespace std;
int main() {
	float a, b, c;
	cout << "Please input a,b,c: \n";
	cin >> a >> b >> c;
	if (a == b && b == c)
	{
		cout << "This is Equilateral Triangle\n";
	}
	else
	{
		if (a != b && a != c && b != c)
		{
			cout << "This is Scalene Triangle\n";
		}
		else
		{
			cout << "This is Isosceles Triangle\n";
		}
	}

	system("pause>0");
}

