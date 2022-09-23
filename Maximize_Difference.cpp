#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0){
	    long long N,M;
	    cin>>N>>M;
	    long long maxi=0;
	    long long A = 0,B=0;
	    for(long long i=N;i<=M;i++){
	        long long k = M/i;
	        //10*8 = 80 or maxi --> i*k or maxi.
	        if(abs(i*k - i)>maxi){
	            A = i;
	            B=i*k;
	            maxi = max(maxi,abs(i*k - i));
	        }
	    }
	    if(maxi==0){
            A=M;
            B=M;
        }
        cout<<A<<" "<<B<<endl;
	}
	return 0;
}