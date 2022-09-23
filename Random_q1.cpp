#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    string s;
    for(int i=0;i<str1.length();i++){
        char c = str1[i];
        bool flag = 0;
        for(int j=0;j<str2.length();j++)
        {
            if(c == str2[j]){
                flag =1;
                break;
            }
        }
        if(!flag)s+=c;
    }
    for(int j=0;j<str1.length();j++){
        char c = str2[j];
        bool flag = 0;
        for(int i=0;i<str1.length();i++)
        {
            if(c == str1[i]){
                flag =1;
                break;
            }
        }
        if(!flag)s+=c;
    }
    cout<<s<<endl;
}
