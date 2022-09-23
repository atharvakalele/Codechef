#include <iostream>
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
	    ll n;
	    cin>>n;
	    vector<ll>a(n);
	    for(int i=0;i<n;i++)cin>>a[i];
	    ll min_e=INT_MAX,max_e=INT_MIN,min_ie=a[0]*a[0],max_ie=a[0]*a[0];
		for(int i=0;i<n;i++)
		{
			min_e = min(min_e,a[i]);
			max_e = max(max_e,a[i]);
			min_ie = min(min_ie,(min_e*max_e));
			min_ie = min(min_ie,a[i]*a[i]);
			max_ie = max(max_ie,(max_e*min_e));
			max_ie = max(max_ie,a[i]*a[i]);
			//cout<<min_e<<" "<<max_e<<" "<<min_ie<<" "<<max_ie<<endl;
		}
		cout<<min_ie<<" "<<max_ie<<endl;
	}
	return 0;
}
