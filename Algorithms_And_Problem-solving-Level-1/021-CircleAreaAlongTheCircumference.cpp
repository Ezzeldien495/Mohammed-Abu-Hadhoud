#include <iostream>
using namespace std;

int main()
{
	short CircleCircumference;

	cout << "Enter circle circumference?\n";
	cin >> CircleCircumference; cout << endl << endl;

	float CircleArea = (CircleCircumference * CircleCircumference) / (4 * 3.14);

	cout << "Circle area is " << CircleArea << endl;

	return 0;

}