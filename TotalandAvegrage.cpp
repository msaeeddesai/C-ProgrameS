# include <iostream>
using namespace std;
int main()
{
	float num1,num2,num3,num4,num5,num6;
	float total , aveg ;
	
	cout << "\n Enter 1st Number : ";
	cin >> num1;
	
	cout << "\n Enter 2st Number : ";
	cin >> num2;
	
	cout << "\n Enter 3st Number : ";
	cin >> num3;
	
	cout << "\n Enter 4st Number : ";
	cin >> num4;
	
	cout << "\n Enter 5st Number : ";
	cin >> num5;
	
	cout << "\n Enter 6st Number : ";
	cin >> num6;
	
	total = num1+num2+num3+num4+num5+num6;
	aveg = total/6;
	
	
	cout << "\n Your Total is : " << total;
	cout << "\n Your Averageis : " << aveg;
	
	return 0;
}
