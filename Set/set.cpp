// set.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<set>
#include <iterator>

using namespace std;
int main()
{
	set<int> myset = { 10,20,30,50,60,90,40,10 };

	set<int> ::iterator it, it1;
	cout << "The first set : ";
	for (it = myset.begin(); it != myset.end(); it++)
	{
		cout << " " << *it;
	}
	cout << endl;
	set<int> secset;
	cout << "The second set :";
	secset.insert(myset.begin(), myset.end());
	for (it = secset.begin(); it != secset.end(); it++)
	{
		cout << " " << *it;
	}
	cout << endl;

	/////comp
	set<int> ::key_compare comp = myset.key_comp();
	int l = *myset.begin();
	it = myset.begin();
	// printing elements of all set 
	cout << "printing elements of all set ";
	do {
		cout << *it << " ";
	} while (comp(*(++it), l));
	cout << endl;
	set<int> ::value_compare comp2 = myset.value_comp();

	int t = *myset.rbegin();
	it = myset.begin();
	cout << "printing elements of all set ";
	// printing elements of all set 
	do {
		cout << *it << " ";
	} while (comp2(*(++it), t));
	cout << endl;
	////find

	myset.insert(80);
	auto pos = myset.find(40);
	cout << "The set elements after 40 are: ";
	for (auto x = pos; x != myset.end(); x++)
		cout << *x << " ";

	////count
	// check if 11 is present or not 
	if (myset.count(11))
		cout << "\n11 is present in the set\n";
	else
		cout << "\n11 is not present in the set\n";

	////lower bound ve upper bound
	 // when 2 is present
	auto y = myset.lower_bound(20);
	if (y != myset.end()) {
		cout << "\nThe lower bound of key 20 is ";
		cout << (*y) << endl;
	}
	else
		cout << "The element entered is larger than the "
		"greatest element in the set"
		<< endl;
	auto z = myset.lower_bound(200);
	if (z != myset.end()) {
		cout << "\nThe lower bound of key 200 is ";
		cout << (*z) << endl;
	}
	else
		cout << "The element entered is larger than the "
		"greatest element in the set"
		<< endl;

	////upper bound
	auto c = myset.upper_bound(20);

	if (c != myset.end()) {
		cout << "\nThe upper bound of key 20 is ";
		cout << (*c) << endl;
	}
	else
		cout << "The element entered is larger than the "
		"greatest element in the set";
	////equal_range
	auto eq = myset.equal_range(20);
	cout << "\nThe lower bound of 20 is " << *eq.first;
	cout << "\nThe upper bound of 20 is " << *eq.second;
	cout << endl;
	auto hint = myset.emplace(89);
	for (auto it = myset.begin(); it != myset.end(); it++)
		cout << *it << " ";


}

