#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0){
	    int n;
	    cin>>n;
	    vector<int>A(n),B(n);
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>B[i];
	    }
	    int gp = 0;
	    for(int i=0;i<n;i++){
	        for(int j=n-1;j>i;j--){
	            if(A[i]==A[j])gp++;
	        }
	    }
	    cout<<gp<<endl;
	}
	return 0;
}
