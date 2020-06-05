#include <iostream>
#include <string.h>
using namespace std;
int booyermoor(string pattern,string text,int badchar[256]){
	int pattern_size=pattern.length();
	cout<<"pattern_size:"<<pattern_size<<endl;
	for (int i = 0; i <10; i++)
	{
		badchar[i]=pattern.length();
	}
	
	for (int i = 0; i<pattern_size-1; i++)
	{
		badchar[(int)pattern[i] - 48]=pattern_size-i-1;
	}
	//int p= (int)pattern[3] - 48;
	//cout<<p<<endl;
	 // for (int i = 0; i < pattern_size; i++)
	 // {
 	// 	cout<<pattern[i]<<" :"<<badchar[(int)pattern[i]-48]<<" "<<endl;
	 // }
		// badchar[pattern[1]]=13;
		// cout<<(int) pattern[1];
	 // for (int i = 0; i < pattern_size; i++)
	 // {
 	// 	cout<<i<<" "<<badchar[i]<<" : "<<endl;
	 // }
	int j=0;
	int i=0;
	for(i=0 ; i<=text.length()- pattern_size;){
		for(j=pattern_size-1;j>=0;j--){
			// cout<<"Value of j "<<j << endl;
			// cout<<text[i+j]<<" - "<<pattern[j]<<endl;
			if(text[i+j]!=pattern[j]){
				break;
			}
			if(j==0){
			cout<<"Found the ,match :" << i<<endl;
			}
		
		}
		
		i=i+badchar[((int)text[i+pattern_size-1]-48)];
		// cout<<"Value of i"<<i<<" "<<endl;
	}
}
int main(){
	string text;
	string pattern;
	int badchar[256];
	cout<<"Enter the text"<<endl;
	cin>> text;
	cout<<"Enter pattern" <<endl;
	cin>> pattern;
	booyermoor(pattern,text,badchar);
	// cout<<"0"<<endl;
}