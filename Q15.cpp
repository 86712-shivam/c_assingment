#include<bits/stdc++.h>
using namespace std;
int main()
{	
   string s;
   getline(cin, s); 

   vector<char>v;
   
   for(int i=0;i<s.size();i++)
   {
   	  if(s[i]>='A'&&s[i]<='Z' || s[i]>='a'&&s[i]<='z')
   	  {
   	 	if(s[i]>='a' && s[i]<='z')
   	    {
   	 	 v.push_back(int(s[i])-32);
	    }
	    else
	    v.push_back(s[i]);
	  } 
   	  
   }
   
   
   map<char, int>mp;
   
   for(int i=0;i<s.size();i++)
   mp[v[i]] = mp[v[i]]+1;
   
   map<char, int>::iterator it;
   
   for(it=mp.begin();it!=mp.end();it++)
   cout<<it->first<<" : "<<it->second<<endl;
   
   
   
}
