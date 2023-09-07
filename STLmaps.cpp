#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> map1;
    map1["Rao Rabi"] = 98;
    map1["Rao Ahmad"] = 86;
    map1["Zeeshan"] = 65;
    map1["Rao Ali"] = 88;
    map1["Zain"] = 56;
    // inserting key value pair
    map1.insert({{"Umer", 89}, {"Zohaib", 78}});

    map<string, int>::iterator iter;
    // to erase any key value pair
    iter = map1.find("Rao Ali");
    if (iter != map1.end())
        map1.erase(iter);
    // to display data
    for (iter = map1.begin(); iter != map1.end(); iter++)
    {
        cout << iter->first << "-->" << iter->second << endl;
    }

    return 0;
};