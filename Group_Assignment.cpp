#include <iostream>
#include <vector>
using namespace std;

void f(int* A, int N){
    vector<int>dp(N+1,0);
    for(int i=0;i<N;i++){
        dp[A[i]]+=1;
    }
    for(int i=0;i<N;i++){
        if(dp[A[i]]%A[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t-->0){
        int N;
        cin>>N;
        int P[N];
        for(int i=0;i<N;i++)cin>>P[i];
        f(P,N);
    }
    return 0;
}
