#include<iostream>
#include<string>
using namespace std ;
float update_balance (int command, float dollars, float balance);
int main()
{
	char command ;
	float dollars,balance = 10000 ;
	cout << "Exit with 0 \n" ; 
	do
	{
		cout << "Your balance = " << balance << endl ;
		cout << "Input command (1 or withdraw ,2 or deposit) : " ;
		cin  >> command ;
		if(command == '0')
	{
		cout << "--Exit program--\n";
		break;
	}
		cout << "Input amount : " ;
		cin  >> dollars ;
		balance = update_balance(command,dollars,balance) ;
	}while(command != '0');

	return 0 ;
}
float update_balance (int command, float dollars, float balance)
{
	
	if(command == '1')
	{
		balance -= dollars ;
		return(balance) ;	
	}
	else if(command == '2')
	{
		balance += dollars ;
		return(balance) ;	
	}
	
}
