#include <iostream>
using namespace std;

long long int sum_of_digits(long long int X)
{
    if(X==1)return 1;
    if(X==0)return 0;

    return X % 10 + sum_of_digits(X/10);
}
long long int closest_to_3_UL(long long int X)
{   
    long long int sum = sum_of_digits(X);
    if(sum % 3 == 0)return X;
    long long int diff = sum % 3;
    long long int new_X = X-diff + 3;
    return closest_to_3_UL(new_X);
}
long long int closest_to_3_LL(long long int X)
{   
    long long int sum = sum_of_digits(X);
    if(sum % 3 == 0)return X;
    long long int diff = sum % 3;
    long long int new_X = X-diff;
    return closest_to_3_UL(new_X);
}

long long int f(long long int L,long long int R)
{
    long long int upper_limit = closest_to_3_UL(L);
    long long int lower_limit = closest_to_3_LL(R);
    long long int a = upper_limit/3;
    long long int b = lower_limit/3;
    return b-a + 1;
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t-->0)
    {
        long long int L,R;
        cin>>L>>R;
        cout<<f(L,R)<<endl;
    }

    //cout<<sum_of_digits(2537)<<endl;
  
    return 0;
}
