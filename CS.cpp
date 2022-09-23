#include <iostream>
#include <stack>
using namespace std;

//This program calculates the no. of distinct 'ab' subsequences in a string str.

int f(int n,stack<char>st,int count,string str) //Recursive
{
    if(n==0){
        if(str[0]=='a')count+=st.size();
        return count;
    }

    if(str[n]=='b'){
        st.push(str[n]);
        return f(n-1,st,count,str);
    }
    else if(str[n]=='a')
    {
        count+=st.size();
        return f(n-1,st,count,str);
    }
    else{
        return f(n-1,st,count,str);
    }
}

int g(string str){//Iterative way (derived from the above recursive function) More efficient!
    int n= str.length()-1;
    stack<char>st;
    int count = 0;

    for(int i=n;i>=0;i--){
        if(str[i] == 'b'){
            st.push(str[i]);
        }
        else if(str[i]=='a'){
            count+=st.size();
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    string str = "ababcab";
    int n = str.length();
    int count = 0;
    stack<char>st;
    cout<<g(str);   
    return 0;
}
