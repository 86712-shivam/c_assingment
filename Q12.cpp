#include<bits/stdc++.h>
using namespace std;
int main()
{	
   string s;
   cin >> s;
   
   vector<char>v;	
   
   for(int i=s.size()-1;i>=0;i--)
   v.push_back(s[i]);
   
   for(int i=0;i<v.size();i++)
   s[i] = v[i];
   
   cout<<s;
   
}
