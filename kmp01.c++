#include <iostream>
#include <string.h>
using namespace std;
int Prefix_Function(string text , string pat,int pie[],int p);
void Kmp_Search(string text , string pat){
	int n = text.length();
	int p = pat.length();
	int pie[p];
	int d=0;
	Prefix_Function(text,pat,pie,p);
	cout<<"The pie array is = ";
	for (int i = 0; i < p; i++)
	{
		cout<<pie[i]<<"-";
	}
	cout<<endl;
	int i=0 , j=0;
	while(i<n){
		d++;
		if (pat[j]==text[i])
		{
			j++;
			i++;
			// cout<<"kkk";
		}
		if(j==p){
			cout<<"Found a Pattern index of it = " << i-j <<endl;
			j=pie[j-1]; 
		}
		else if (i<n &&  pat[j]!=text[i])
		{
			if (j!=0)
			{
				j=pie[j-1];
			}else{
				i=i+1;
			}
		}
	}
	cout<<"iterestion ocations: "<<d<<endl;

}
int Prefix_Function(string text , string pat,int pie[],int p){
		int k= 0;
		pie[0]=0;
		int j =1;
		while ( j< p )
		{
			if (pat[j]==pat[k])
			{
				/* code */
				k++;
				pie[j]=k;
				j++;
				// cout<<k<<"-"<<pat[j]<<" "<<pat[k]<<endl;

			}else{
				if (k!=0)
				{
					// k=0;
					k=pie[k-1];

					//cout<<k<<endl;
					// pie[j]=k;
					// j++;
					/* code */
				}else{
					pie[j]=0;	
					j++;				
				}
			}
			
		}
		for (int i = 0; i < p; ++i)
		{
			cout<<pie[i]<<endl;
			/* code */
		}
		
		// return pie[p];
		// cout<<pie[1]<<endl;
}

int main()
{
	string text,pat;
	cout<<"Enter The String"<<endl;
	getline(cin,text);
	cout<<"Enter The Pattern"<<endl;
	getline(cin,pat);
	Kmp_Search(text,pat);
}
