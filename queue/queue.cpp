#include <iostream>
#include <queue>

using namespace std;
int main()
{
	queue<int> myq;
	for (int i = 0; i < 10; i++) {
		myq.push(i);
	}
	cout << "Queue size is : " << myq.size()<<endl;
	if (myq.empty() == true)
	{
		cout << "queue is empty \n";

	}
	else
		cout << "queue not empty \n";

	while (!myq.empty())
	{
		cout<<myq.front()<<" ";
		myq.pop();
	}
	queue<string> myqueue;
	myqueue.emplace("This");
	myqueue.emplace("is");
	myqueue.emplace("a");
	myqueue.emplace("computer");
	myqueue.emplace("science");
	myqueue.emplace("portal");
	cout << endl;
	cout <<"The firt element add : "<< myqueue.front() << endl;
	cout << "The last element add: "<<myqueue.back() << endl;
}