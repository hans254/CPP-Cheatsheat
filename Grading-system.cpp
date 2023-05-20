//NAME: HANSEL FIDEL NDEMANGE
//REG NO: COM/M/0072/2021
#include<iostream>
using namespace std;
int main()
{
    int score;
    cout<<"Enter your marks for Computer studies\n";
    cin>>score;
    if (score >= 80 && score <= 100)
    {
        cout<<"You have: A";
    }
    else if (score >= 75 && score <= 79)
    {
        cout<<"You have: A-";
    }
    else if (score >= 70 && score <= 74)
    {
        cout<<"You have: B+";
    }
    else if(score >= 65 && score <= 69)
    {
        cout<<"You have: B";
    }
    else if (score >= 60 && score <= 64)
    {
        cout<<"You have: B-";
    }
    else if (score >= 55 && score <= 59)
    {
        cout<<"You have: C+";
    }
    else if (score >= 50 && score <= 54)
    {
        cout<<"You have: C";
    }
    else if (score >= 40 && score <= 49)
    {
        cout<<"You have: C-";
    }
    else if (score >= 30 && score <= 39)
    {
        cout<<"You have: D+";
    }
    else if (score >= 25 && score <= 29)
    {
        cout<<"You have: D";
    }
    else if (score >= 20 && score <= 24)
    {
        cout<<"You have: D-";
    }
    else
    {
        cout<<"You have: E";
    }
    return 0;
}