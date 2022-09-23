#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int count = 0;
	while(t-->0){
	    int N;
	    cin>>N;
	    int n = N-1;
	    char s[n];
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	    }
		
	    //trans(0->1)
	    for(int i=0;i<n-1;i++){
	        if(s[i]=='0' && s[i+1] == '1'){
				count++;
			}
	    }
		//last trans(1->0)
	    if(s[n-2]=='1' && s[n-1]=='0'){
			count++;
		}
	    cout<<count<<endl;
		count = 0;
	}
	return 0;
}