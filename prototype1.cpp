#include <iostream>
#include <ctime>
using namespace std;
int checkNum(int,int);
int main ()
{
	int a,number,sum = 0;
	srand(time(0));
	number = 1 + rand() %10 ;
	cout<<"###Welcome to guessing number game###"<<endl;
	cout<<"Secret number has been chosen"<<endl;
	do{
		cout<<"Guess the number (1 to 10) : " ;
		cin>>a ;
		checkNum(a,number);
		sum += 1 ;
	}while(a != number);
	cout<<"Congratulations!"<<endl;
	cout<<"The secret number is : "<<number<<endl;
	cout<<"You made "<<sum<<" guesses"<<endl; 
	return(0);
}
int checkNum(int a,int num)
{
		if(a > num)
		{
			cout<<"The secret number is higher"<<"\n";
		}
		else if(a < num)
		{
			cout<<"The secret number is lower"<<"\n";
		}
	return(num,a);
}