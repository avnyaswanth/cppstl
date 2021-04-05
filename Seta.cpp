#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int> s;
	for(int i=1;i<6;i++)
	s.insert(i*10);
	s.insert(50);
	set<int> :: iterator it;
	it = s.begin();
	while(it!=s.end())
	{
	cout<<*it<<ends;
	it++;
   }
   //  set wont allow duplicate values
   // erase(iterator it) removes the ele at the position pointed by iterator
   // find(x) returns the iterator to the element x if present, else returns the iterator to end;
}
