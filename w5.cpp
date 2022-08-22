#include <iostream>
using namespace std;

main (){
	
	int num1,num2,num3,num4,num5,i,arr[4];
	
	
	cout << "Enter your 1st number : \n";
	cin  >> num1;
	
	cout << "Enter your 2nd number : \n";
	cin  >> num2;
	
	cout << "Enter your 3rd number : \n";
	cin  >> num3;
	
	cout << "Enter your 4rd number : \n";
	cin  >> num4;
	
	cout << "Enter your 5th number : \n";
	cin  >> num5;
	

	num1=num1*num1;
	num2=num2*num2;
	num3=num3*num3;
	num4=num4*num4;
	num5=num5*num5;
	
	
	
	arr[0]=num1;
	arr[1]=num2;
	arr[2]=num3;
	arr[3]=num4;
	arr[4]=num5;
	
	cout<<"\n\nyou array of cubes follow as :\n";
	
	for(i=0;i<=4;i++){
		
		cout<<arr[i]<<endl;
		
	}
	
	
	
	
}
