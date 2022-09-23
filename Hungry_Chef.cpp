#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0){
	    int X,Y,N,R;
	    cin>>X>>Y>>N>>R;
	    int x=0,y=N;
	    while(y>=0){
	        x = N-y;
            cout<<x<<" "<<y<<endl;
	        if((x+y)==N && (R-(x*X + y*Y))>=0)break;
            y--;
	    }
        cout<<x<<" "<<y<<endl;
	}
	return 0;
}