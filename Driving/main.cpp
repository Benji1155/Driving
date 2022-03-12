#include <iostream>  



using namespace std;



int main()



{

	//declaring variables 

	int age = 0;



	//asking for age

	cout << "Enter your age: ";

	cin >> age;



	//doing maths 

	if (age < 16)
		cout << "You aren't allowed to drive yet.";
	else 
		cout << "You are allowed to drive!";

		return(0);
}