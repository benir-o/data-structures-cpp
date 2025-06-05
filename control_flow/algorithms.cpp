#include <iostream>
using namespace std;
int main()
{

    int a;
    int b;
    int c;
    cout << "Enter the number A: ";
    cin >> a;
    cout << "Enter the number B: ";
    cin >> b;
    cout << "Enter the number C: ";
    cin >> c;
    int d = a + b + c;
    float average = d / 3;
    cout << "The average of the three numbers is " << average << endl;
    float product = a * b * c;
    cout << "The product of the three numbers is " << product;
    return 0;
}