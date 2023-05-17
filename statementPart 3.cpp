#include <iostream>
using namespace std;
int main ()
{
	float Obmarks,TotalMarks,Per;
	
	cout << "Enter Your Marks:";
	cin >> Obmarks;
	
	TotalMarks = 500;
	if (Obmarks > 500){
		cout << "\n Enter Valid Marks";
	}
	
	else{
		Per = Obmarks/TotalMarks * 100;
		
		cout << "\n Your Percentage is : " << Per << "%";
		
		if (Per >= 80)
		{
			cout << "\n Congrats You Got A+ ";                
		}
		
		else if (Per >=70)
		{
			cout << "\n You got A";
		}
		
			else if (Per >=60)
		{
			cout << "\n You got B";
		}
		
			else if (Per >= 50 && Per <= 60 )
		{
			cout << "\n You got C";
		}
		
		else 
		{
			cout << "\n We are Sorry You are fail";
		}
	
    }
  
}



