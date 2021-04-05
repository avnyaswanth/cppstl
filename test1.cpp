#include<iostream>
using namespace std;
#include<utility>
#include<vector>
int max(int a,int b)
{
	if(a>=b)
	return a;
	else
	return b;
}
int min(int a,int b)
{
	if(a<=b)
	return a;
	else return b;
}
int min_lights(vector<int> arr,int b)
{
	int count = 0;
	vector<pair<int,int>> co_ord;
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]==1)
		co_ord.push_back({max(0,i-b+1),min(arr.size()-1,i+b-1)});
	}
	int i=0,start = 0;
	while(i<co_ord.size())
	{
		if(co_ord[i].first>start)
		return -1;
		int end = INT_MIN;
		while(co_ord[i].first<=start)
		{
			if(co_ord[i].second>start)
			{
				end = max(co_ord[i].second,end);
			}
			i++;
		}
		count++;
		if(end==arr.size()-1)
		break;
		start = end+1;
	}
	return count;
}
int main()
{
	vector<int> arr;
	int n,b,x;
	cin>>n;
	for(int i=0;i<n;i++)      //    array values
	{
		cin>>x;
		arr.push_back(x);
	} 
	cin>>b;     //  b value light power
	cout<<min_lights(arr,b);
}
