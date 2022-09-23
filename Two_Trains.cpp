#include <iostream>
#include <vector>
using namespace std;



int main() {
	int t;
	cin>>t;
	while(t-->0){
	    int N;
	    cin>>N;
	    vector<int>a(N),b(N);
		a[0]=0;
		b[0]=0;
		int sum=0,diff;
	    for(int i=1;i<N;i++){
	        cin>>a[i];
			sum+=a[i];
			b[i] = a[i];
			a[i]=sum;
	    }
		for(int i=0;i<N;i++)cout<<a[i]<<" ";
		cout<<endl;
		for(int i=0;i<N;i++)cout<<b[i]<<" ";
		for(int i=0;i<N-1;i++){
			diff=a[i+1]-b[i];
			if(diff>0)b[i+1]=b[i]+diff+b[i+1];
			else b[i+1] = b[i] + b[i+1];
		}
	    cout<<b[N-1]<<endl;
	}
	return 0;
}