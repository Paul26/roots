#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a;
	double b;
	double c;
	double x1;
	double x2;

	cout << "Please enter a: " << endl;
	cin >> a;
	
	cout << "Please enter b: " << endl;
	cin >> b;

	cout << "Please enter c: " << endl;
	cin >> c;

	x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

	cout << "X1: " << x1 << endl;
	cout << "X2: " << x2 << endl;

	//system("pause");
	return 0;
}