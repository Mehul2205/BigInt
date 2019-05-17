# BigInt
To compute basic mathematical calculation like addition, subtraction, multiplication and division on a large digit number in c++.

int i = 0;
char ch = i;
cout<<ch;

Output : 48

So, whenever we add 48 into a number this is to convert an integer into a string and vice versa.

### Code for Padding the bits :

string ZeroPadNumber(string ret, int num){
	int str_length = ret.length();
	for (int i = 0; i < num - str_length; i++)
		ret = "0" + ret;
	return ret;
}

## Addition
Key points
  1. In c++ you cannot store 10-20 digit number, so if we want to add these numbers then this concept is used.
  2. Time Complexity - O(n)     where n indicate length of number i.e., number of digits.
  3. No Exception, run for all cases.

#### Screenshot

## Subtraction

Key points
  1. In c++ you cannot store 10-20 digit number, so if we want to implement subtraction on these numbers then this concept is used.
  2. Time Complexity - O(n)     where n indicate length of number i.e., number of digits.
  3. No Exception, run for all cases.
  
#### Screenshot

## Multiplication
Key points
  1. In c++ you cannot store 10-20 digit number, so if we want to add these numbers then this concept is used.
  2. Time Complexity - O(n*n)     where n indicate length of number i.e., number of digits.
  3. No Exception, run for all cases.

#### Screenshot

## Division
Key points
  1. In c++ you cannot store 10-20 digit number, so if we want to add these numbers then this concept is used.
  2. Time Complexity - O(2^n)     where n indicate length of number i.e., number of digits.
  3. 1 Exception, this code is recursive in nature, if stack is overloaded then it will terminate abruptly.

#### Screenshot
