#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st;
    for(int i=9;i>=1;i--)
    {
        st.push(i);
    }

    string s = "IDIDID";
    vector<int>X(10);
    int n = s.length(),k=0;
    if(n==2){
        
    }
    else if(n%2 == 0){
        for(int i=0;i<=n-2;i+=2){
        if(s[i]=='I' && s[i+1]=='D'){
            if(i==0){
                X[k] = st.top();
                st.pop();
                k++;
                X[k+1] = st.top();
                st.pop();
                X[k] = st.top();
                st.pop();
                k++;
            }
            else{
                X[k+1] = st.top();
                st.pop();
                X[k] = st.top();
                st.pop();
                k++;
            }
        }
        else if(s[i] == 'D' && s[i+1] == 'I'){
            if(i==0){
                
            }
            else{

            }
        }
    }
    }
    for(int i=0;i<X.size();i++)cout<<X[i]<<" ";
}