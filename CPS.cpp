#include <iostream>

#include <vector>

using namespace std;

int countPS(string str, int i, int j,vector<vector<int>>& dp){
    
    if(i==j)return 1;
    if(i>j)return 0;
    if(dp[i][j]!=-1)return dp[i][j];

    if(str[i]==str[j])return dp[i][j] = countPS(str,i+1,j,dp) + countPS(str,i,j-1,dp) + 1;

    return dp[i][j] = countPS(str,i+1,j,dp) + countPS(str,i,j-1,dp) -  countPS(str,i+1,j-1,dp); 

}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t-->0){
        string str;
        cin>>str;
        vector<int>v(str.length(),-1);
        vector<vector<int>>dp(str.length(),v);
        cout<<countPS(str,0,str.length()-1,dp)<<endl;
    }
    
    
    return 0;
}
