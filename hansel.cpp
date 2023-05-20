#include<iostream>
using namespace std;
int main()
{
	int score;
	cout<<"Please enter your score\n";
	cin>> score;

	if(score >= 70 && score <= 100)
	{
		cout<<"First class";
	}
	else if (score >= 60 && score <= 69)
	{
		cout<<"Second Class Upper";
	}
	else if (score >= 50 && score <= 59)
	{
		cout<<"Second Class Upper";
	}
	else if (score >= 40 && score <= 49)
	{
		cout<<"Pass";
	}
	else
	{
		cout<<"Fail";
	}
	
	return 0;
}