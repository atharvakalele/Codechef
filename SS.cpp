#include <iostream>

using namespace std;

// This is an inefficient soln.

long long f(long long* arr, long long N){

    long long c = 0,d = 0,sum = 1;
    for(long long i=0;i<N;i++){
        if(arr[i]%2 !=0 || arr[i]%4 == 0){
            c++;
        }
        sum = arr[i];
        for(long long j = i+1;j<N;j++){
            sum = sum*arr[j];

            if(sum % 2 !=0 || sum %4 == 0)d++;
        }
        sum = 1;//reset
    }
    return d+c;
}
int main(int argc, char const *argv[])
{
    long long t;
    cin>>t;
    while(t-->0){
        long long N;
        cin>>N;
        long long arr[N];
        for(long long i=0;i<N;i++){
            cin>>arr[i];
        }
        cout<<f(arr,N)<<endl;
    }
    return 0;
}
