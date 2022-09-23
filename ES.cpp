#include <iostream>
#include <math.h>
using namespace std;

int countES(int* wt,int n,int& count){
    if(n<0){
        count+=1;
        return 0;
    }
    //pick
    countES(wt,n-1,count);
    //unpick
    countES(wt,n-1,count);
    return count;
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t-->0){
        int N;
        cin>>N;
        int* arr = new int[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        long long int x = pow(2,N)-1;
        cout<<x<<endl;
        cout<<(N*N - N*(N+1)/2)<<endl;
    }
    return 0;
}
