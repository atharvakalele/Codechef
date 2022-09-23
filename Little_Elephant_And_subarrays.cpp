#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<int>arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int Q;
    cin>>Q;
    for(int x=0;x<Q;x++){
        int q;
        cin>>q;
        if(N==1){
            if(q!=arr[0])cout<<0<<endl;
            else cout<<1<<endl;
            }
        else{
                int s = 0;
                while(arr[s]!=q && s<N)s++;
                if(s==N)cout<<0<<endl;
                else if(s==0){
                    int j=s+1;
                    while(arr[j]>=arr[s])j++;
                    j--;
                    cout<<j-s+1<<endl;
                }
                else if(s==N-1){
                    int i=s-1;
                    while(arr[i]>=arr[s])i--;
                    i++;
                    cout<<s-i+1<<endl;
                }
                else{
                    int i = s-1,j=s+1;
                    while(arr[j]>=arr[s])j++;
                    j--;
                    while(arr[i]>=arr[s])i--;
                    i++;
                    if(i==s && j==s)cout<<1<<endl;
                    else if(j==s)cout<<s-i+1<<endl;
                    else if(i==s)cout<<j-s+1<<endl;
                    else cout<<(j-s) + (s-i) + 3 <<endl;
                }
            }
        }
}
