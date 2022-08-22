#include<iostream>

using namespace std;
main(){
	
	char ab;
	cout<<"Enter Any Alphabet = ";
	cin>>ab;
	if(ab=='a'||ab=='e'||ab=='i'||ab=='o'||ab=='u'||ab=='A'||ab=='E'||ab=='I'||ab=='O'||ab=='U'){
		cout<<"Its a Vowel";
	}
	else{
		cout<<"Its a Consonant";
	}
}
