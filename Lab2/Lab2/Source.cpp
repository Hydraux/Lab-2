/*
	CS215 section 402
	Assignment: Lab2
	Author: Ryan Bezold
	Last Modified: 1/23/2019
*/
#include <IOStream>
#include <string>
using namespace std;

int main()
{

	//Initialize Variables
	int num1, num2, num3;
	int max, mid, min;
	int Allepo, Bannana, Cayenne, DragonsBreath;
	string pepper;

	//Get user input for 3 numbers
	cout << "Enter number 1: ";
	cin >> num1;

	cout << "Enter number 2: ";
	cin >> num2;

	cout << "Enter number 3: ";
	cin >> num3;

	//Sort the numbers by value
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			max = num1;
			if (num3 > num2)
			{
				mid = num3;
				min = num2;
			}
			else
			{
				min = num3;
				mid = num2;
			}
		}
		else 
		{
			max = num3;
			mid = num1;
			min = num2;
		}
	}
	else
	{
		if (num2 > num3)
		{
			max = num2;
			if (num3 > num1)
			{
				mid = num3;
				min = num1;
			}
			else
			{
				min = num3;
				mid = num1;
			}
		}
		else
		{
			max = num3;
			mid = num2;
			min = num1;
		}
	}


	//Print the numbers
	cout << "Sorted, they are: " << min << " " << mid << " " << max << endl;

	string response = test ();

	cout << response;


	system("PAUSE");

}



string test()
{

	//print menu
	cout << "\nA. Allepo Pepper" << endl;
	cout << "B. Bannana Pepper" << endl;
	cout << "C. Cayenne Pepper" << endl;
	cout << "D. Dragon's Breath" << endl;
	cout << "Enter a letter to choose a pepper: ";

	//store heat values
	int Allepo = 30000;
	int Bannana = 1000;
	int Cayenne = 40000;
	int DragonsBreath = 2480000;
	string pepper;

	//get users pepper choice;
	cin >> pepper;

	//print heat value in scovilles
	if (pepper == "A" || pepper == "a")
	{
		return "That's 3000 Scovilles of heat!";
	}
	else if (pepper == "B" || pepper == "b")
	{
		return "That's 1000 Scovilles of heat!";
	}
	else if (pepper == "C" || pepper == "c")
	{
		return "That's 4000 Scovilles of heat!";
	}
	else if (pepper == "D" || pepper == "d")
	{
		return "That's 30000 Scovilles of heat!";
	}
	else
	{
		return "That pepper is not on the list.";
	}
}

