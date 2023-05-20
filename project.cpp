#include<iostream>
using namespace std;
void operation()
{
    cout<<"1: Addition\n";
    cout<<"2: Average\n";
}
int main()
{
    int option;
    int a, b, c;
    cout<<"Enter three integers of your choice\n";
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"Please choose any option according to your specification for the operation to be completed\n";
    operation();
    cout<<"1 or 2\n";
    cin>>option;
    switch (option)
    {
    case 1:
        cout<< a + b + c<<endl;
        break;
    case 2:
        cout<<(a + b + c)/3<<endl;
        break;
    
    default:
        cout<<"Unrecognized operation. Please try again as per the instructions\n";
        break;
    }

    return 0;
}