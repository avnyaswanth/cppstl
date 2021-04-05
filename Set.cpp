#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int> s;
	s.insert(6);
	s.insert(4);
	s.insert(3);
	s.insert(43);
	s.insert(-1);
	set<int> :: iterator it;
	it = s.begin();
	while(it!=s.end())
	{
	cout<<*it<<ends;
	it++;
   }
//   cout<<"find: "<<*(s.find(10));
//   //  set wont allow duplicate values
//   s.erase(30);
//   it = s.begin();
//	while(it!=s.end())
//	{
//	cout<<*it<<ends;
//	it++;
//   }
}
