#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

void Navie_Strinfg_Matcher(string text,string pat){
	int n = text.length();
	int p = pat.length();
	int j,i,count=0;
	cout<<n<<endl;
	cout<<"The You enterd String is = "+ text <<endl;
	cout<<"The You enterd patten is = "+ pat <<endl;
	for (i = 0; i <=n-p; i++)
	{
		for (j = 0; j < p; j++)
		{
			cout<<++count<<"-"<<text[i+j] <<" "<<pat[j] <<endl;  
			if (text[i+j]!=pat[j])
			{
				cout<<" Miss Match found" << endl;
				break;
			}

			if (text[i+j]==pat[j] && j==(p-1))
			{
			cout<<"The index of the patten Match " << i << endl;
				break;
			}
		}
		
	}
}
int main()
{	
	string text,pat;
	cout<<"Enter The String"<<endl;
	getline(cin,text);
	cout<<"Enter The Pattern"<<endl;
	getline(cin,pat);
	Navie_Strinfg_Matcher(text,pat);
	// cout<<"Damsih";
	return 0;
}