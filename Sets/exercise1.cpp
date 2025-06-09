#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
    set<int> numbers = {1, 2, 3};
    set<string> names = {"Alice", "Bob", "Charlie"};
    unordered_set<int> items = {50, 32, 37, 42};

    // Adding elements to a set
    numbers.insert(4);
    numbers.insert(5);

    // Printing out everything within a set
    for (int number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;
    /*
    If we want to check if an element exist, we use the count method,
    it returns 1 if the element exist and returns 0
    if the element does not exist
    */
    if (numbers.count(3))
    {
        cout << "The number " << 3 << " exists";
    }
    cout << endl;
    // Removing an element

    numbers.erase(1);
    // check if 1 exists;
    cout << numbers.count(1);

    return 0;
}