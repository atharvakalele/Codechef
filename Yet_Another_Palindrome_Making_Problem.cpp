#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0){
	    int N;
	    cin>>N;
	    char s[N];
	    char even[N/2];
	    int e = 0,o = 0;
	    char odd[N/2];
	    for(int i=0;i<N;i++){
	        cin>>s[i];
	        if(i%2 == 0){
	            even[e++] = s[i];
	        }
	        else{
	            odd[o++] = s[i];
	        }
	    }
	    sort(even,even+N/2);
	    sort(odd,odd+N/2);
	    bool isPalindrome = true;
	    for(int i=0;i<N/2;i++){
	        if(even[i]!=odd[i]){
	            isPalindrome = false;
	            break;
	        }
	    }
	    if(isPalindrome)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
