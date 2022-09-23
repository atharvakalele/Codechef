#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void digits(long long X,vector<int>& container)
{
    if(X==0 || X==1){
        container.push_back(X%10);
        return;
    }
    container.push_back(X%10);
    digits(X/10,container);
}

void f(int X,set<char>& codes)
{
    vector<int>container;
    digits(X,container);
    long long num = 0;
    for(int i=0;i<container.size();i++){
        for(int j=i+1;j<container.size();j++){
            //straight
            num = container[i]*10 + container[j];
            if(num>=65 && num<=90){
                num = container[i]*10 + container[j];
                codes.insert((char)num);
            }
            //reverse
            num = container[j]*10 + container[i];
            if(num>=65 && num<=90){
                num = container[j]*10 + container[i];
                codes.insert((char)num);
            }
        }
    }

}

int main()
{
    /*set<int>container;
    digits(1931,container);
    vector<int>v(container.begin(),container.end());

    //find closest no >=5 through binary search.
    long long low = 0;
    long long high = v.size()-1;
    long long mid = 0;
    while(low<high){
        mid = low + (high-low)/2;
        if(v[mid]<5){
            low = mid + 1;
        }
        else{
            high = mid;
        }
    }
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
   
    cout<<low<<endl;
   */ 
    /*char a = 65;
    cout<<a<<endl;*/
    /*int t;
    cin>>t;
    while(t-->0)
    {
        long long X;
        cin>>X;
        set<char>codes;
        f(X,codes);
        for(auto it=codes.begin();it!=codes.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }*/
        //cout<<(char)66<<endl;
    /*long long X = 1623455078;*/
    string x = "ABCD";
    cout<<x.substr(1);
    
}