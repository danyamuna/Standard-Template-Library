// map.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> mymap;
    mymap.insert(pair<int, int>(1,10));
    mymap.insert(pair<int, int>(2, 20));
    mymap.insert(pair<int, int>(3, 30));
    mymap.insert(pair<int, int>(4, 40));
    mymap.insert(pair<int, int>(5, 50));

    map<int, int>::iterator it;
    cout << "map is : \n";  cout << "\tKEY\tELEMENT\n";
    for (it = mymap.begin(); it != mymap.end(); it++)
    {
      
        cout <<"\t" << it->first << " ";
        cout << "\t" << it->second << endl;
    }
    cout << endl;
    ////count
    if (mymap.count(1) == 1)
        cout << "\n number 1 found \n";
    else
        cout<<"number 1 dont found \n";
    ////find
    auto a = mymap.find(4);

    cout << "Elements from position of 4 in the map are : \n";
    cout << "KEY\tELEMENT\n";

    for(it= a; it!=mymap.end();it++)
        cout << it->first << '\t' << it->second << '\n';
    cout << "The size of map : " << mymap.size();
    cout << "\nThem ma size of map : " << mymap.max_size();
    mymap.emplace(6, 80);
    mymap.emplace(7, 42);
    /*NOTE : If the same key is emplaced more than once, 
    the map stores the first element only as the map is a container*/
    cout << "\nmap is : \n";  cout << "\tKEY\tELEMENT\n";
    for (it = mymap.begin(); it != mymap.end(); it++)
    {

        cout << "\t" << it->first << " ";
        cout << "\t" << it->second << endl;
    }
    cout << endl;
    auto itr = mymap.upper_bound(6);
    cout << "The upper bound of key 6 is ";
    cout << (*itr).first << " " << (*itr).second << endl;
    auto itr2 = mymap.lower_bound(6);
    cout << "The lower bound of key 6 is ";
    cout << (*itr2).first << " " << (*itr2).second << endl;
    ////erase
    map<int, int >::iterator ite;
    ite = mymap.find(1);
    mymap.erase(ite);

}

 