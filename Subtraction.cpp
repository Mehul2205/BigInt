/* This code is created by MEHUL PATNI in c++
Last Update date : 17/05/2019

For subtraction of BigInt numbers.
*/

#include<iostream>
#include<string.h>
using namespace std;

string ZeroPadNumber(string ret, int num)			// Function adding Padding bits if required.
{
	int str_length = ret.length();
	for (int i = 0; i < num - str_length; i++)
		ret = "0" + ret;
	return ret;
}

int main()
{
	string a;
	cout<<"Enter 1st large number : ";
	cin>>a;
	string b;
	cout<<"Enter 2nd large number : ";
	cin>>b;
	string sub;										// To get the final answer
	int m,n;
	string sub1;
	int subtraction[2] = {0,0};
	int l1 = a.length();
	int f=1;
	if(a.length() == b.length())
	{
		for(int q = 0; q<a.length(); q++)
		{
			if(a[q]>b[q])
				break;
			else if(a[q] == b[q])
				continue;
			else
			{
				f=0;
				break;
			}
		}
	}
	if(a.length() > b.length() || (a.length() == b.length() && f == 1))
	{
		b = ZeroPadNumber(b,a.length());
		for(int i=a.length()-1;i>=-1;i--)
		{
			if(i == -1 && subtraction[0] != 0)
			{
				sub1 = subtraction[0]+48;
				sub.insert(0,sub1);
				break;
			}	
			else if(i == -1)
				break;
			m = a[i] - 48 - subtraction[0];
			n = b[i] - 48;
			if(m >=n){
				subtraction[1] = (m-n)%10;
				subtraction[0] = 0;
			}else{
				subtraction[1] = (m-n+10)%10;
				subtraction[0] = 1;
			}
			sub1 = subtraction[1]+48;
			sub.insert(0,sub1);
		}
	}
 else
	{
		a = ZeroPadNumber(a,b.length());
		for(int i=a.length()-1;i>=-1;i--)
		{
			if(i == -1 && subtraction[0] != 0)
			{
				sub1 = subtraction[0]+48;
				sub.insert(0,sub1);
				break;
			}	
			else if(i == -1)
			{
				sub.insert(0,"-");
				break;
			}
			m = b[i] - 48 - subtraction[0];
			n = a[i] - 48;
			if(m >=n){
				subtraction[1] = (m-n)%10;
				subtraction[0] = 0;
				
			}else{
				subtraction[1] = (m-n+10)%10;
				subtraction[0] = 1;
			}
			sub1 = subtraction[1]+48;
			sub.insert(0,sub1);
		}
	}	
	int length = sub.length();
	while(true)
	{
		if(sub[0] =='-' && sub[1] == 48)
		{
			for(int x =1;x<sub.length()-1;x++)
			{
				sub[x] = sub[x+1];
			}
		}
		else if(sub[0] == 48)
		{
			for(int x =0;x<sub.length()-1;x++)
			{
				sub[x] = sub[x+1];
			}
		}
		else
		{
			break;
		}
		length--;
	}
	cout<<endl;
	cout<<a<<" - "<<b<<" = ";
	for(int i=0;i<length;i++)
		cout<<sub[i];
	cout<<endl;
	return 0;
}
