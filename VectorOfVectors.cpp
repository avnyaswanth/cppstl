#include<iostream>
using namespace std;
#include<vector>
#include<iterator>
int main()
{
	vector<vector<int> > vec;
	for(int i=1;i<4;i++)
	{
		vector<int> v;
		for(int j=1;j<5;j++)
		v.push_back(j*i);
		vec.push_back(v);
	}
	for(int i=0;i<vec.size();i++)
	{
		for(int j=0;j<vec[i].size();j++)
		cout<<vec[i][j]<<ends;
		cout<<endl;
	}
}
