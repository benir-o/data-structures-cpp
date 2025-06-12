#include <iostream>
#include <map>
#include <unordered_map> //This is a hashtable
using namespace std;

struct CityRecord
{
    string Name;
    int Population;
    double Latitude, Longitude;
};
int main()
{
    vector<CityRecord> cities;
    cities.emplace_back("Nairobi", 5000, 1.1, 47.0);
    cities.emplace_back("Kisumu", 80000, 1.3, 46.2);
    cities.emplace_back("Mombasa", 10000, 0.9, 47.3);

    for (const auto &city : cities)
    {
        if (city.Name == "Kisumu")
        {
            cout << city.Population;
        }
    }
    return 0;
}