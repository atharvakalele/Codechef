#include <iostream>
#include <vector>

using namespace std;

int f(int i, int N, int k, int arr[], int GatheredSum, int taken, vector<vector<int>>& dp){
    if(i==N){
        if(GatheredSum!=0 && GatheredSum % k == 0 && taken>=2){
            cout<<GatheredSum<<endl;
            return 1;
        }
        return 0;
    }

    if(dp[i][GatheredSum]!=-1)return dp[i][GatheredSum];

    int x = f(i+1,N,k,arr,GatheredSum+arr[i],taken+1,dp);
    int y = f(i+1,N,k,arr,GatheredSum,taken,dp);

    return dp[i][GatheredSum] = x+y;

}

int main(int argc, char const *argv[])
{
    int N;
    cin>>N;
    int arr[N];
    int sum = 0;
    for(int i=0;i<N;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    vector<vector<int>>dp(N,vector<int>(sum+1,-1));
    cout<<f(0,N,5,arr,0,0,dp);
    return 0;
}
