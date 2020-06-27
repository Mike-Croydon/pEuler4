// This program solves Project Euler problem 4: Largest Palindrome Product

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

string reverseString(string s)
{
	string temp;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		temp.push_back(s[i]);
	}
	return temp;
}

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


int main()
{
	string test = "test";
	cout << reverseString(test) << endl;
	int t = 909;
	cout << isPalindrome(t);
}

