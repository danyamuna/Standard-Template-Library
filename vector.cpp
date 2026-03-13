#include <iostream>
#include <vector>
using namespace std;

int main()
{
	std::vector<int> num = { 1,2,3,4,5,6,7,8,9 };
	for (int c : num) {
		std::cout << c << " ";

	}
	std::cout << std::endl;
	std::cout << "The first element " << num.front() << std::endl;

	std::cout << "The last element " << num.back() << std::endl;
	cout << "Output of begin and end : ";
	for (auto i = num.begin(); i != num.end(); i++)
		cout << *i << " ";
	cout << endl;
	cout << "Output of cbegin and cend : ";
	for (auto i = num.cbegin(); i != num.cend(); i++)
		cout << *i << " ";
	cout << endl;
	cout << "Output of rbegin and rend : ";
	for (auto i = num.rbegin(); i != num.rend(); i++)
		cout << *i << " ";
	cout << endl;
	//Capacity
	cout << "The size : " << num.size() << endl;
	cout << "The max size : " << num.max_size() << endl;
	cout << "The capacity : " << num.capacity() << endl;
	// checks if the vector is empty or not 
	if (num.empty() == false)
		cout << "\nVector is not empty";
	else
		cout << "\nVector is empty";

	// Shrinks the vector 
	num.shrink_to_fit();
	cout << "\nVector elements are: ";
	for (auto it = num.begin(); it != num.end(); it++)
		cout << *it << " ";
	//Element access
	cout << "\nreference pointer : " << num[2];
	cout << "\nnat : num.at(4) = " << num.at(4);
	cout << "\nThe first element in the vector : " << num.front();
	cout << "\nThe last element in the vector : " << num.back();
	// pointer to the first element 
	int* pos = num.data();
	cout << "\nThe first element is " << *pos;

	//Modifier
	vector<int> v;
	v.assign(6, 7);
	cout << "\nThe vector elements are: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	v.push_back(8); cout << endl;
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	v.push_back(9);
	v.insert(v.begin(), 2);
	v.insert(v.begin(), 1);
	//num.erase(num[2]);
	cout << "\n The new vector is : \n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	v.emplace(v.begin(), 0);
	v.emplace_back(10);
	cout << "\n The new vector is : \n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	num.swap(v);
	cout << "\n the vector after swap \n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	
	//ERASE the 4 number 
	vector<int> v2 = { 1,2,3,4,5 };
    vector<int> ::iterator it;
		it = v2.end();
		
		it--; it--;
		v2.erase(it);
		cout << "\n the vector after erase \n";
		for (auto it = v2.begin(); it != v2.end(); ++it)
			cout << ' ' << *it;


}