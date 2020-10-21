#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float long double
#define f(i,a,b) for(int i = a;i < b;i++)
#define ff(i,a,b)  for(int i = a-1;i>=b;i--)
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false), cin.tie(NULL)
const int mod = 1e9+7;
//int to string -> to_string()
//string to int -> stoi()
int32_t main()
{  IOS;
   string s;
   cin>>s;
   int l,i,c1=0,c2=0;
   l=s.length();
   for(i=0;i<l;i++)
   {
       if(isupper(s[i]))
       	c1++;
       else
       	c2++;
   }
  if(c1>c2)
  {for(i=0;i<l;i++)
   {
       if(islower(s[i]))
       	s[i]=toupper(s[i]);}
  }
  else
  {	 for(i=0;i<l;i++)
   {
       if(isupper(s[i]))
       	s[i]=tolower(s[i]); }
  }
  cout<<s;
   return 0;
}
