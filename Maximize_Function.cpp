#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t-->0){
	    int N;
	    cin>>N;
        long long A[N];
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	    }
        sort(A,A+N);
        //2 7 5
        long long int max1 = A[N-1],max2 = A[N-2],min = A[0];
        cout<<(abs(max1-min) + abs(max2-min) + abs(max1-max2))<<endl;
        
	}
	return 0;
}