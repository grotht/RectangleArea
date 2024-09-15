
#include <iostream>
#include <conio.h>

using namespace std;

int GetLengthFromUser();
int GetWidthFromUser();
int CalculateArea(int length, int width);
void DisplayArea(int area);

int main()
{
	int length = GetLengthFromUser();
	int width = GetWidthFromUser();
	int area = CalculateArea(length, width);
	DisplayArea(area);

	(void)_getch();
	return 0;
}

int GetLengthFromUser()
{
	int length = 0;

	cout << "Enter the length of the rectangle: ";

	cin >> length;

	cout << "\n";

	return length;
}

int GetWidthFromUser()
{
	int width = 0;

	cout << "Enter the width of the rectangle: ";

	cin >> width;

	cout << "\n";

	return width;
}

int CalculateArea(int length, int width)
{
	int area = length * width;
	return area;
}

void DisplayArea(int area)
{
	cout << "The area of the rectangle is: " << area << "\n";
}