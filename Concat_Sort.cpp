#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0){
	    int N;
	    cin>>N;
	    vector<int>arr(N);
	    vector<int>dp(N);
	    for(int i=0;i<N;i++){
	        cin>>arr[i];
	        dp[i] = arr[i];
	    }
	    if(N==2){
	        cout<<"Yes"<<endl;
	        continue;
	    }
	    sort(dp.begin(),dp.end());
	    vector<int>P;
	    vector<int>Q;
	    //1st Traversal -> sorted elements.
	    int i=0,j=0;
	    while(i<=N-1 && j<=N-1){
	        if(dp[i]==arr[j]){
	            P.push_back(dp[i]) ;
	            i++,j++;
	        }
	        else{
	            Q.push_back(arr[j]);
	            j++;
	        }
	    }
        /*for(int i:P){
            cout<<i<<" ";
        }
        cout<<endl;
        for(int j:Q){
            cout<<j<<" ";
        }*/
        dp.clear();
        vector<int>().swap(arr);
        dp.insert(dp.begin(),P.begin(),P.end());
        dp.insert(dp.end(),Q.begin(),Q.end());
        vector<int>().swap(P),vector<int>().swap(Q);
        if(is_sorted(dp.begin(),dp.end()))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
	return 0;
}