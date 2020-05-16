/*
   Author:Kalpana Baigar
    Program to print reverse of string using constructor and ibuilt function 
*/ 

#include<iostream>
#include<cstring>
#include <algorithm> 


using namespace std;

/*
 class reverse
{
  public:		
    
	reverse(char str[])
		{
			int i=0,j=0;
			char temp;
		
	     	 j = strlen(str) - 1;
			    for (i = 0; i < j; i++,j--)
			    {
			        temp = str[i];
			        str[i] = str[j];
			        str[j] = temp;
			    }
						
			
			cout<<"\n\nreverted string is:"<<str;
			
		}
		
};  */  
int main(void)
{
	string arr;
	cout<<"enter string: ";
	cin>>arr;
	
	cout<<"\nyour entered string is :"<<arr;
	
	//reverse obj(array);
    reverse(arr.begin(), arr.end()); 
   
    cout<<"\nreverted string is:"<<arr;
	
	return 0;
}               
