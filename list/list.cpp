#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
	list<int>  l1 = { 1,2,3,4,5 };
	//## Element access
	cout << "The first elemet in the list :  " << l1.front() << endl;
	cout << "The last elemet in the list :  " << l1.back() << endl;

	//iterator
	cout << "Output of begin and end : ";
	for (auto x = l1.begin(); x != l1.end(); x++)
	{
		cout << *x << " ";
	}
	cout << endl;
	cout << "Output of cbegin and cend : ";
	for (auto x = l1.cbegin(); x != l1.cend(); x++)
	{
		cout << *x << " ";
	}
	cout << endl;
	cout << "Output of rbegin and rend : ";
	for (auto x = l1.rbegin(); x != l1.rend(); x++)
	{
		cout << *x << " ";
	}
	cout << endl;
	cout << "Output of crbegin and crend : ";
	for (auto x = l1.crbegin(); x != l1.crend(); x++)
	{
		cout << *x << " ";
	}
	cout << endl;

	////Capacity
	cout << "The size : " << l1.size() << endl;
	cout << "The max size : " << l1.max_size() << endl;

	// checks if the list is empty or not 
	if (l1.empty() == false)
		cout << "List is not empty";
	else
		cout << "List is empty";
	cout << endl;
	//## Modifiers

	list<double> ld;
	ld.assign(2, 5.2);
	cout << "The new list double : ";
	for (auto x = ld.begin(); x != ld.end(); x++)
	{
		cout << *x << " ";
	}
	cout << endl;
	ld.push_back(6.3);
	ld.push_front(4.6);
	cout << "The new list after insert new element : ";
	for (auto x = ld.begin(); x != ld.end(); x++)
	{
		cout << *x << " ";
	}
	cout << endl;
	//Remove the element
	ld.pop_back();
	ld.pop_front();

	ld.insert(ld.begin(), 4);
	ld.insert(ld.end(), 100);
	cout << "The new list after insert new element: ";
	for (auto x = ld.begin(); x != ld.end(); x++)
	{
		cout << *x << " ";
	}
	cout << endl;
	ld.emplace(ld.end(), 200);
	ld.emplace_front(0);
	ld.emplace_back(1000);
	cout << "The new list after insert new element: ";
	for (auto x = ld.begin(); x != ld.end(); x++)
	{
		cout << *x << " ";
	}
	cout << endl;
	
	ld.reverse();
	cout << "The list after revrese :";
	for (auto x = ld.begin(); x != ld.end(); x++)
	{
		cout << *x << " ";
	}
	cout << endl;
	ld.sort();
	cout << "The list after sort :";
	for (auto x = ld.begin(); x != ld.end(); x++)
	{
		cout << *x << " ";
	}
	cout << endl;
	l1.sort();
	list <int> l2 = { 6,7,8,9,10 };
	l1.merge(l2);
	cout << "The list after merge :";
	for (auto x = l1.begin(); x != l1.end(); x++)
	{
		cout << *x << " ";
	}
	cout << endl;
	
	// create an iterator to point to the first element of the list
	list<int>::iterator itr = l1.begin();

	// increment itr to point to the 2nd element
	++itr;

	//display the 2nd element
	cout << "Second Element: " << *itr << endl;

	// increment itr to point to the 4th element
	++itr;
	++itr;

	// display the 4th element
	cout << "Fourth Element: " << *itr;

	//ERASE the 6 number 
	list<int> ::iterator it2;
	it2 = l1.end();

	it2--; it2--; it2--; it2--; it2--;
	l1.erase(it2);
	cout << "\n the list after erase \n";
	for (auto it2 = l1.begin(); it2 != l1.end(); ++it2)
		cout << ' ' << *it2;

	return 0;
}
 
