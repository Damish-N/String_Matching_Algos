#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string pattern,text;
	int i = 0 , j = 0;
	text = "aaddddaaabaaaaaabaaadsaaabaaa";
	pattern = "aaab";
	int a= pattern.length();
	int b = text.length();
	int pie[a];
	pie[0] = j;
	for (int i = 1; i < a;)
	{
		if (pattern[i]==pattern[j])
		{
			j++;
			pie[i]=j;
			i++;
		}else{
			if (j>0)
			{
				j=pie[j-1];
			}else{
				pie[i]=0;
				i++;
			}
		}
	}

	for (int i = 0; i < a; ++i)
	{
		cout<<pie[i]<<" " ;
	}
	i=0,j=0;
	while(i<b-a+1){
		if (text[i]==pattern[j])
		{
			i++;
			j++;
		}
		else{

			if (j!=0)
			{
				j=pie[j-1];
			}else{
				i=i+1;
			}
		}
		if (j==a)
		{
			cout<<"\n Pattern found in = " << i-j <<endl;
			j=pie[j-1];
		}
	}
	return 0;
}