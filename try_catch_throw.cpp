#include<iostream>
using namespace std;
int main()
{
   try{
    int age;
    cout<<"Enter your age\n";
    cin>>age;
    if(age >= 18)
        {
            cout<<"Access granted - your are an adult\n";
        }
    else
        {
            throw(age);
        }
   }
   catch(int myNum)
    {
        cout<<"Access denied - You must be atleast 18 years old.\n";
        cout<<"Age is: "<<myNum;
    }
    
    return 0;
} 