#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0){
	    int N;
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	    }
//At the time of transitions count+=2. Also don't consider the same person twice.
        int count = 0;
        bool cons=false;
	    for(int i=0;i<N-1;i++){
	        if(A[i]!=A[i+1]){
	            if(!cons){
	                count+=2;
	            }
	            else{
	                count+=1;
	            }
	            cons = true;
	        }
	        else{
	            cons = false;
	        }
	    }
    cout<<count<<endl;
	}
	return 0;
}