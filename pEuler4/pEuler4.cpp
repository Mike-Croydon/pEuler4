// This program solves Project Euler problem 4: Largest Palindrome Product

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include "EulerLib.h"

using namespace std;

/*
//takes a string as input and returns its reverse
string reverseString(string s)
{
	string temp;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		temp.push_back(s[i]);
	}
	return temp;
}

//takes an int as input and outputs true if the int is palindromic. 
bool isPalindrome(int p)
{
	string str = to_string(p);
	string rev = reverseString(str);
	if (str == rev)
	{
		return true;
	}
	else
	{
		return false;
	}
}
*/

//Iterates through all 3 digit number products and checks if they're palindromic
int main()
{
	int largestPalindrome = 0;
	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			int product = i * j;
			if ((EulerLib::Misc::isPalindrome(product)) && (product > largestPalindrome))
			{
				largestPalindrome = product;
			}
		}
	}
	cout << "The largest palindrome made from the product of two 3-digit numbers is: " << largestPalindrome;
}

