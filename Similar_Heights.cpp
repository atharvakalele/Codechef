#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0){
	    int N;
	    cin >>N;
	    int H[N];
	    unordered_map<int, int>frequency;
	    int max_frequency = 0;
	    for(int i=0;i<N;i++){
	        cin>>H[i];
	        frequency[H[i]]++;
	        max_frequency = max(max_frequency,frequency[H[i]]);
	    }
	    sort(H,H+N);
	    int count = 0;
	    for(int i=0;i<N;i++){
	        if(frequency[H[i]]==1)count+=1;
	    }
	    if(count != 1)cout<<(count+1)/2<<endl;
	    else{
	        //x is the element with frequency 1.
	        //if x is largest.
	        if(frequency[H[N-1]] == 1 && max_frequency == 2)cout<<2<<endl;
	        else if(frequency[H[N-1]] == 1 && max_frequency > 2)cout<<1<<endl;
	        else {
	            cout<<1<<endl;
	        }
	    }
	}
	return 0;
}
