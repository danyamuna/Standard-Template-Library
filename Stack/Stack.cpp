#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<string> mystack;
	mystack.push("pizza");
	mystack.push("eggs");
	mystack.push("Hamburger");
	cout << endl;
	cout << "The size of stack :" << mystack.size() << endl;

	cout << "The stack is : ";
	while (!mystack.empty()) {
		cout << ' ' << mystack.top();
		mystack.pop();
	}
	cout << endl;
	cout << "The size of stack :"  << mystack.size() << endl;

	//////emplace
	mystack.emplace("apple");
	mystack.emplace("milk");
	// printing the stack 
	cout << "mystack = ";
	while (!mystack.empty()) {
		cout << mystack.top() << " ";
		mystack.pop();
	}

	return 0;
}



