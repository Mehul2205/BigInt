# BigInt
To compute basic mathematical calculation like addition, subtraction, multiplication and division on a large digit number in c++.

int i = 0;
char ch = i;
cout<<ch;

Output : 48

So, whenever we add 48 into a number this is to convert an integer into a string and vice versa.

### Code for Padding the bits :

1. string ZeroPadNumber(string ret, int num){
2.	int str_length = ret.length();
3.	for (int i = 0; i < num - str_length; i++)
4.		ret = "0" + ret;
5.	return ret;
6. }

## Addition
Key points
  1. In c++ you cannot store 10-20 digit number, so if we want to add these numbers then this concept is used.
  2. Time Complexity - O(n)     where n indicate length of number i.e., number of digits.
  3. No Exception, run for all cases.

#### Screenshot
![image1](https://user-images.githubusercontent.com/48055152/57938955-e61d4580-78e6-11e9-952f-1a63f5a40ff1.png)

## Subtraction

Key points
  1. In c++ you cannot store 10-20 digit number, so if we want to implement subtraction on these numbers then this concept is used.
  2. Time Complexity - O(n)     where n indicate length of number i.e., number of digits.
  3. No Exception, run for all cases.
  
#### Screenshot
![image2](https://user-images.githubusercontent.com/48055152/57938956-e6b5dc00-78e6-11e9-98d7-eaf24a724c6c.png)

## Multiplication
Key points
  1. In c++ you cannot store 10-20 digit number, so if we want to add these numbers then this concept is used.
  2. Time Complexity - O(n*n)     where n indicate length of number i.e., number of digits.
  3. No Exception, run for all cases.

#### Screenshot
![image3](https://user-images.githubusercontent.com/48055152/57938957-e6b5dc00-78e6-11e9-8fa6-c6909ffdbe44.png)

## Division
Key points
  1. In c++ you cannot store 10-20 digit number, so if we want to add these numbers then this concept is used.
  2. Time Complexity - O(2^n)     where n indicate length of number i.e., number of digits.
  3. 1 Exception, this code is recursive in nature, if stack is overloaded then it will terminate abruptly.

#### Screenshot
![image4](https://user-images.githubusercontent.com/48055152/57938954-e61d4580-78e6-11e9-8518-cd0bbfe0bf5a.png)
