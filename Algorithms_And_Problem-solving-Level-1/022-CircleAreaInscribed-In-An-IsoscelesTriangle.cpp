#include <iostream>
using namespace std;

int main()
{
	short TriangleSide, TriangleBase;

	cout << "Enter length of side of triangle?\n";
	cin >> TriangleSide; cout << endl;
	
	cout << "Enter length of base of triangle?\n";
	cin >> TriangleBase; cout << endl << endl;

	float CircleArea = (3.14 * TriangleBase * TriangleBase * (2 * TriangleSide - TriangleBase)) / (4 * (2 * TriangleSide + TriangleBase));

	cout << "Circle area is " << CircleArea << endl;

	return 0;



}