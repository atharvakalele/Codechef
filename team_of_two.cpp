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
	    vector<vector<int>>arr(N+1,vector<int>(6,0));
	    for(int i=1;i<=N;i++)
	    {
	        int K;
	        cin>>K;
	        arr[i][0]=K;
	        for(int j=1;j<=K;j++)
	        {
	            int x;
	            cin>>x;
	            arr[i][x] = 1;
	        }
	    }
        /*for(int i=1;i<=N;i++)
        {
            for(int j=0;j<=5;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }*/
        bool flag = 1;
        for(int i=1;i<=N-1;i++)
        {
            for(int s=1;(i+s)<=N;s++){
                for(int k=1;k<=5;k++){
                    if(!(arr[i][k] || arr[i+s][k])){
                        flag = 0;
                        //cout<<"("<<i<<","<<k<<")"<<",("<<i+s<<","<<k<<")";
                        break;
                    }
                    else flag = 1;
                }
                if(flag){
                    break;
                }
            }
            if(flag)break;
        }
        
        cout<<flag<<endl;
	}
	return 0;
}