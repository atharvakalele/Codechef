#include <iostream>

using namespace std;

long long int f(long long int n)
{
    if(n == 0)return 0;
    if(n&1)return ((f(n>>1)<<2) + (((n>>1)<<2)) + 1);
    else return ((f(n>>1)<<2));
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t-->0){
        long long int maxT,maxN,sumN;
        cin>>maxT>>maxN>>sumN;
        long long int count = 0;
        while(sumN>=maxN && count<maxT){
            sumN-=maxN;
            count++;
        }
        if(count == maxT){
            cout<<(count)*f(maxN)<<endl;
        }
        else{//count < maxT && sumN<maxN
            cout<<count*f(maxN)+f(sumN)<<endl;
        }
    }
      return 0;
}
