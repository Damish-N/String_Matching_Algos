#include <iostream>
#include <string.h>

using namespace std;

int main(){
	string Text,pattern;
	int size=0,l=0;
	cout<<"Enter the Text"<<endl;
	cin>>Text;
	cout<<"Enter the pattern"<<endl;
	cin>>pattern;
	int Hash_pattern=0;
	for(int j=0 ; j< pattern.length();j++){
		Hash_pattern=Hash_pattern+pattern[j];
	}

	// cout<<"The Hash Value of the pattern: "<<Hash_pattern <<endl;
	for (int i = 0; i <= Text.length()-pattern.length();i++){
			size=0;
			for (int k = 0; k <pattern.length() ; k++){
					size= size+Text[i+k];
			}
			cout<<"The Hash Value of the pattern: "<<Hash_pattern <<endl;
			cout<<"The  Value of the Text: "<<size<<endl;
			if(size == Hash_pattern){
				l=0;
				while( l <pattern.length() ){
					cout<<"The Text Char :" << Text[i+l]<<" "<<pattern[l] <<endl;
					if(Text[i+l]!=pattern[l]){
						break;
						}
					l++;
					cout<<"The value of the  l: "<<l<<endl;
				}
				if (l==pattern.length()){
						cout<<"\t The pattern is match :"<<i<<endl;
					}
			}
	}
	
}