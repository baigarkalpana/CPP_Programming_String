/*
   Author:Kalpana Baigar
   program to find the last occurrence of a character in a string
*/

#include<iostream>
#include<cstring>

using namespace std;


int main()
{
	char str[]="hello how are you";
	char ch;
	int i=0,len,ret=0,cnt;
	len=strlen(str);
	
	
	cout<<"\nenter character:";
	cin>>ch;
	
	for(i=0;i<len;i++)
	{
		if(str[i]==ch)
		{
			ret=1;
			cnt=i;
		}
		
		
	}
	
	if(ret==1)
	{
			cout<<"last occurence of character is at location:"<<cnt;
	}

	else if(i==len)
	{
		cout<<"not present";
	}
	
}
