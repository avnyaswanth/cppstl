#include<iostream>
using namespace std;
#include<queue>
int main()
{
	queue<int> q;
	for(int i=0;i<5;i++)
	q.push(i+1);
	cout<<"Queue front: "<<q.front();
	cout<<endl<<"Queue back: "<<q.back()<<endl;
	while(!q.empty())
	{
		cout<<q.front()<<ends;
		q.pop();
	}
	//  pop() method delets the front ele of the queue
}
