/*
   Author:Kalpana Baigar
   program to find the first occurrence of a character in a string
*/

#include<iostream>
#include<cstring>

using namespace std;


int main()
{
	char str[]="hello how are you";
	char ch;
	
	int i=0,len;
	len=strlen(str);
	
	cout<<"\nenter character:";
	cin>>ch;
	
	for(i=0;i<len;i++)
	{
		if(str[i]==ch)
		{
			cout<<"first occurence of character is at location:"<<i;
			break;
		}
	}
	
	if(i==len)
	{
		cout<<"not present";
	}
	
}
