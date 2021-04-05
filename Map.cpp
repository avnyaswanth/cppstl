#include<iostream>
#include<string>
#include<map>
#include<iterator>;
using namespace std;
int main()
{
	map<string,int> m,m1;
		m.insert({"z",2});
	m.insert({"y",1});  // The insertion done according to the default natural sorting order of the keys
	m.insert({"a",3});   // if we are adding duplicate key value pairs new value will be updated at the key value already existed
	map<string,int>:: iterator itr;
	for(itr=m.begin();itr!=m.end();itr++)
	{
		cout<<itr->first<<ends;  // key 
		cout<<itr->second<<endl;  // value
	}
	map<string,int>:: iterator it = m.find("a");  // 
	cout<<it->second;
	m.swap(m1);    //  Swaps the elements of map m to map m1
	itr = m1.begin();
	cout<<endl<<itr->first;
	}
