#include<iostream>
using namespace std;
#include<vector>
#include<iterator>
int main()
{
	vector<int> v;
	for(int i=1;i<5;i++)
	v.push_back(10*i);
	cout<<v.size()<<endl;  //   size returns the number of elements in the vector
	cout<<v.capacity();
	vector<int>::iterator i;
	auto itr = v.begin();
	cout<<*itr;
	for(i=v.begin();i!=v.end();i++)
	cout<<*i<<ends;
	v.insert(0,1)
}
