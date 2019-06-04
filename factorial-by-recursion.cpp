#include<iostream>

using namespace std;

int factorial(int val)
{
	int prod;

	if(val == 1)
		return 1;

	else
	{
		prod = val * factorial(val-1);
		return prod;
	}
}


int main()
{
	int ch;
	char n;
	do{
		cout<<"\nType a no. to find the factorial of : ";
		cin>>ch;
		cout<<"\nFactorial is : "<<factorial(ch)<<endl;
		cout<<"\nType 'n' to stop : ";
		cout<<"\nWant to perform more ? ";
		cin>>n;

	}while(n !='n');

	return 0;
}
