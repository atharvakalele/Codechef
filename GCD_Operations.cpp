#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
	    int N;
	    cin>>N;
	    vector<int>arr(N);
	    bool flag = 0;
	    for(int i=0;i<N;i++){
	        cin>>arr[i];
	        if((i+1)%arr[i]!=0)flag = 1;
	    }
	    if(!flag)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
