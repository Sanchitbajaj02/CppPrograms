#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int i,a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        map<int,int> m;
        for(i=0;i<n;i++)
        {
            m[a[i]]++;
        }
        int max=0,cmax=0,s=0;
        map<int,int>::iterator j;
        
        for(j=m.begin();j!=m.end();j++)
        {
          if(j->second>cmax)
            {max=j->first;cmax=j->second;}
        }
       
        for(j=m.begin();j!=m.end();j++)
        {
            if(j->first!=max)
                s=s+j->second;
        }
        cout<<s<<endl;
        
    }
}
