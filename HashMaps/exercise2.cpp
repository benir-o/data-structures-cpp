#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> people = {{1, "Vici"}, {2, "Alicia"}, {3, "Malcolm"}};

    // Inserting key value pairs
    people[4] = "Benir";
    people[5] = "Richarlisson";

    // printing a value
    cout << people[1] << " ";
    cout << endl;

    // printing all key value pairs
    for (auto kvpair : people)
    {
        cout << kvpair.first << "--> " << kvpair.second << endl;
    }
    return 0;
}