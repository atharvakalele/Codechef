#include <iostream>
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        ll n,k;
        cin>>n>>k;
        
    }
}
/*ll n;
        cin>>n;
        vector<ll>a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        map<ll,ll>strength;
        ll max_strength=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int trainer = i+1;
            for(int j=0;j<n;j++)
            {
                if(a[i]>a[j])strength[trainer]+=1;
                else if(b[i]>b[j])strength[trainer]+=1;
                else strength[trainer]+=0;
            }
            max_strength = max(max_strength,strength[trainer]);
        }
        ll count = 0;
        for(auto it:strength)
        {
            if(max_strength==it.second)count+=1;
        }
        cout<<count<<endl;*/