#include <iostream>
using namespace std;

//think of abab
bool f(int N,string str){
    
    if(N==0)return 1;
    if(N%2 == 0){
        //possible is last operation
        int mid = (N-1)/2;
        if(str.substr(0,mid+1) == str.substr(mid+1,N-(mid+1)))return f(N/2,str);
        else return 0;
    }
    else {
        return f(N-1,str);
    }
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int N;
        string str="";
        cin>>N;
        for(int i=0;i<N;i++){
            char c;
            cin>>c;
            str+=c;
        }
        if(f(N,str))cout<<"Yes"<<endl;
        else cout<<"NO"<<endl;
        
        
    }
}