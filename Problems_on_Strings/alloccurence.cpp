
/*
   Author:Kalpana Baigar
   program to search all occurrences of a character in a string
*/

#include <string>
#include<iostream>
#include<cstring>

using namespace std;


int main()
{
    string str;
	char ch;
	int i=0,len;

	
	
   cout <<"Please enter a string: ";
   getline (cin, str);
  
	cout<<"\nYour entered string is:"<<str;
	
	len=str.length();
	cout<<"\n\nenter character:";
	cin>>ch;
	
	for(i=0;i<len;i++)
	{
		if(str[i]==ch)
		{
			cout<<"\ncharacter present at index"<<i;
		}
		
		
	}
	
   
	
}
