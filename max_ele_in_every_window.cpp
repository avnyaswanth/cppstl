 #include<iostream>
 using namespace std;
 #include<deque>
 int main()
 {
 	int n,arr[n],k;
 	cout<<"Enter n and k";
 	cin>>n>>k;
 	for(int i=0;i<n;i++)
 	cin>>arr[i];
 	deque<int> dq;
 	for(int i=0;i<k;i++)
 	{
 		while(!dq.empty()&&arr[i]>arr[dq.back()])
 		{
 			dq.pop_back();
		 }
		 dq.push_back(i);
	 }
	 cout<<arr[dq.front()]<<ends;
	 for(int i=k;i<n;i++)
	 {
	 	while(!dq.empty()&&dq.front()<=i-k)
	 	
	 		dq.pop_front();
	 		
		 while(!dq.empty()&&arr[i]>arr[dq.back()])
		 
		 dq.pop_back();
		 
		 dq.push_back(i);
		 cout<<arr[dq.front()]<<ends;
	 }
 }
