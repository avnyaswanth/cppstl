#include<iostream>
using namespace std;
//#include<iterator>
#include<deque>
int main()
{
	deque<int> de;
	for(int i=0;i<5;i++)
	de.push_back(i);
	deque<int>:: iterator it;
	it = de.begin();
	while(it!=de.end())
	{
		cout<<*it;
		it++;
	}
	it = de.begin();it++;
	it = de.insert(it,22);  //  inserts the ele at the specified iterator position and returns iterator to first ele of newly inserted ele
	cout<<*it;
}
