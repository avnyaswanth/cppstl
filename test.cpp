#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> v = {3,4,5,6};
	cout<<binary_search(v.begin(),v.end(),6)<<endl;   // binary search method for finding an element for ascending order
	// for finding the descending order series use comparator
	// returns true or false
	// if the given array is unsort the sort it first
	vector<int> v1(4);
	copy(v.begin(),v.end(),v1.begin());  // copies values from one location and sets in another loc
	vector<int> :: iterator it;  // parameters : first and last iterators of copied array and first iterator of new array
	for(it=v1.begin();it!=v1.end();it++)  // return type is end of the destination ranges
	cout<<*it<<ends;
	int x = count(v.begin(),v.end(),3); // returns the number of occurences in a certain range
	it=find(v.begin(),v.end(),3);  // find func returns the itertor first occurence of the given key if found else 
	if(it!=v.end())  // else returns the end iterator
	cout<<*it;  
}
