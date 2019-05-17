/* This code is created by MEHUL PATNI in c++
Last Update date : 17/05/2019

For multiplication of BigInt numbers.
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

string Addition(string a, string b)
{
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
		addition[0] = (m+n)/10;					// To get carry if exists
		add1 = addition[1]+48;
		add.insert(0,add1);

	}	
	return add;
}
int main()
{
	
	string a;
	cout<<"Enter 1st large number : ";
	cin>>a;
	string b;
	cout<<"Enter 2nd large number : ";
	cin>>b;
	string mul[2];
	string mul1;
	int m,n;
	int multiplication[2] = {0,0};
	for(int i =b.length()-1; i>-1;i--)
	{
		mul[1].clear();
		multiplication[0] = 0;
		for (int k =b.length()-1; k>i; k--)
			{
				mul[1].insert(0,"0");
			}
		for(int j =a.length()-1; j>=-1;j--)
		{
			if(j == -1 && multiplication[0] != 0)				// This is executed if MSB is >= 10
			{
				mul1 = multiplication[0]+48;					// To convert integer 0 into ASCII code of 0
				mul[1].insert(0,mul1);							// Insert at 0th index i.e., Addition start from LSB to MSB
				break;
			}	
			else if(j == -1)
				break;

			m = a[j] - 48;										// Converting char into integer
			n = b[i] - 48;										// Converting char into integer
			multiplication[1] = (m*n+multiplication[0])%10;		// To compute multiplication
			multiplication[0] = (m*n+multiplication[0])/10;		// To get carry if exists
			mul1 = multiplication[1]+48;
			mul[1].insert(0,mul1);
			
		}
		mul[0] = Addition(mul[0],mul[1]);
	}
	cout<<endl;
	cout<<a<<" * "<<b<<" = "<<mul[0]<<endl;
}
