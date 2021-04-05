#include<iostream>
using namespace std;
#include<list>
int main()
{
	list<int> l;
	for(int i=0;i<5;i++)
	l.push_back(5-i);
	list<int>::iterator it;
	it = l.begin();
	while(it!=l.end())
		cout<<*(it++)<<ends;
		cout<<endl;
}
