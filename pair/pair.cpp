// pair.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<int, int> pair1 (1, 2);
    pair<double, int> pair2(2.2, 5);
    pair<string, int>pair3;
    
    cout << pair1.first << " ";
    cout << pair1.second << endl;
    pair1.first = 20;

    pair3 = make_pair("engineer", 30);
    cout << pair3.first << " " << pair3.second << endl;
    pair<string, int> pair4("Danya ", 32);
    pair3.swap(pair4);
    cout << pair3.first << " " << pair3.second << endl;
    int a, b;
    tie(a,b) = pair1;
    cout << a << " " << b << endl;
    pair1.second = 30;
    tie(a, ignore) = pair1;
   
    // prints old value of b
    cout << a << " " << b << endl;

}

