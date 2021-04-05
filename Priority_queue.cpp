#include<iostream>
using namespace std;
#include<queue>
//  priority queue inserts elements in descending order always
int main()
{
	priority_queue<int> q;
	for(int i=0;i<5;i++)
	q.push(i*3);
	while(!q.empty())
	{
		cout<<q.top()<<ends;
		q.pop();
	}
	// top() returns the first ele of queue
}

