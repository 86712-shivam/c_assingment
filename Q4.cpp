#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter subject "<<i+1<<" Marks: ";
		cin >> arr[i];
	}

	for(int i=0;i<5;i++)
	{
      if(arr[i]>=90)
      cout <<"Subject "<<i+1<<":"<<"Ex"<<endl;
      else if(arr[i]<90 && arr[i]>=80)
      cout <<"Subject "<<i+1<<":"<<"A"<<endl;
      else if(arr[i]<80 && arr[i]>=70)
      cout <<"Subject "<<i+1<<":"<<"B"<<endl;
      else if(arr[i]<70 && arr[i]>=60)
      cout <<"Subject "<<i+1<<":"<<"C"<<endl;
      else if(arr[i]<60)
      cout <<"Subject "<<i+1<<":"<<"F"<<endl; 
	}
	
}
