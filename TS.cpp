//Sorting in decreasing order.
#include<bits/stdc++.h>
using namespace std;
bool cmp(int x, int y){
    return x<y;
}
int main()
{

        int n;
        cin>>n;
         int a[n];
        for(int i=0;i<n;i++)
          cin>>a[i];
            sort(a,a+n,cmp);
            for(int i=0;i<n;i++)
            cout<<a[i]<<'\n';
    return 0;
}





