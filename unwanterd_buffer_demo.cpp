#include<iostream>
using namespace std;
int main()
{
char x[20],y[20];
cout<<"Enter a integer and a string";
cin>>x;
//cin>>ws;   // clears the buffer after the first input;
//cin.ignore();  
cin.get(y,20);
cout<<x<<y;
}
