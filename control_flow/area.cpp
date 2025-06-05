#include <iostream>
using namespace std;
int main()
{
    int length;
    int width;
    cout << "Enter the length of rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    int area = length * width;
    cout << "The area of the rectangle is " << area << endl;
    int perimeter = 2 * length + 2 * width;
    cout << "The perimeter is " << perimeter;

    return 0;
}

// This program calculates the area and perimeter of a rectangle based on user input for length and width.
// It prompts the user to enter the dimensions, computes the area and perimeter, and then displays the results.