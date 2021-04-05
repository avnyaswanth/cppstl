#include<iostream>
#include<string>
#include<limits.h>
using namespace std;
int main()
 {
	//code
	return 0;
	int t;
	cin>>t;
	 string patt,str;
	while(t--)
	{
	    cin>>str>>patt;
	     int min = INT_MAX,flag = 0;
	    for(int i=0;i<patt.size();i++)
	    {
	        for(int j=0;j<str.size();i++)
	        {
	            if(patt[i]==str[j])
	            {
	                if(j<min)
	                min = j;
	                flag++;
	                break;
	            }
	        }
	    }
	   if(flag)
	    cout<<str.at(min)<<endl;
	    else
	    cout<<'$'<<endl;
	}
}
