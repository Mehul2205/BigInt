/* This code is created by MEHUL PATNI in c++
Last Update date : 17/05/2019

For adding BigInt numbers.
*/

#include<iostream>
#include<string.h>
using namespace std;

string ZeroPadNumber(string ret, int num)		// Function adding Padding bits if required.
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
	string add;									// To get the final answer
	int m,n;
	string add1;
	int addition[2] = {0,0};
	if(a.length() > b.length())					// For padding smaller digit number with larger digit number eg. 12345 into 8 digit no : 00012345
	{
		b = ZeroPadNumber(b,a.length());
	}
	else
	{
		a = ZeroPadNumber(a,b.length());
	}
	for(int i=a.length()-1;i>=-1;i--)
	{
		if(i == -1 && addition[0] != 0)			// This is executed if sum of MSB is >= 10
		{
			add1 = addition[0]+48;				// To convert integer 0 into ASCII code of 0
			add.insert(0,add1);					// Insert at 0th index i.e., Addition start from LSB to MSB
			break;
		}	
		else if(i == -1)
			break;
		m = a[i] - 48;							// Converting char into integer
		n = b[i] - 48;							// Converting char into integer
		addition[1] = (m+n+addition[0])%10;		// To compute addition
		addition[0] = (m+n+addition[0])/10;		// To get carry if exists
		add1 = addition[1]+48;
		add.insert(0,add1);

	}	
	cout<<endl;
	cout<<a<<" + "<<b<<" = "<<add<<endl;
	return 0;
}
