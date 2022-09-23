#include <iostream>
#include <set>
#include <vector>
#include <bits/stdc++.h>
#include <string>
using namespace std;

// Worst approach....think of something else!

void f(int i ,string str, string ssf, set<string>& dp){
    
    if(i==str.length()){
        dp.insert(ssf);
        return;
    }

    //pick
    f(i+1,str,ssf+str[i],dp);
    //unpick
    f(i+1,str,ssf,dp);
    
}
int g(string str){

    set<string>dp;
    f(0,str,"",dp);
    int count = 0;
    for(string x:dp){
        count+=1;
        if(x==str)break;
    }
    return (dp.size()-count);
}
int main(int argc, char const *argv[])
{
    
    string str = "banana";
    
    set<string>dp;
    f(0,str,"",dp);
    for(string x : dp){
        cout<<x<<" ";
    }
    return 0;
}
