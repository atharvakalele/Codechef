#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0){
	    long long int N;
	    cin>>N;
	    long long A[N];
	    long long c=0,ans=0;
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	        if(A[i]==1)c++;
	        else{
	            ans+=(c*(c+1)/2);
	            c = 0;
	        }
	    }
	    if(A[N-1]=1)ans+=(c*(c+1)/2);
	    cout<<ans<<endl;
}
	return 0;
}