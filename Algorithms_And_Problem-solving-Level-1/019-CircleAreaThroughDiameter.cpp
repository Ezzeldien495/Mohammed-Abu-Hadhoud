#include <iostream>
using namespace std;

int main()
{
	short CircleDiameter;

	cout << "Enter circle diameter?\n";
	cin >> CircleDiameter; cout << endl << endl;

	float CircleArea = (3.14 * CircleDiameter * CircleDiameter) / 4;

	cout << "Circle area is " << CircleArea << endl;

	return 0;

}