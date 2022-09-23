#include <iostream>
using namespace std;

int f(int n,int x, int y)
{
    if(n<=0)return 0;
    int b = x + f(n-100,x,y);
    int c = y + f(n-4,x,y);
    
    return min(b,c);
}

int main(int argc, char const *argv[])
{
   
    cout<<f(105,80,10)<<endl;
    return 0;
}
