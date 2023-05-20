#include<iostream>
using namespace std;
void operation()
{
    cout<<"1: Addition\n";
    cout<<"2: Average\n";
}
int main()
{
    int a, b, c;
    cout<<"Please enter 3 intergers of your choice"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"Choose the operation to be done on the entered values"<<endl;
    operation();
    cout<<"1 or 2\n";
    int option;
    cin>>option;
    switch (option)
    {
    case 1:
        cout<<a + b + c;
        break;
    
    case 2:
        cout<<(a + b + c)/3;
        break;

    default:
        cout<<"Invalid operation!!!\n";
        cout<<"Please Try Again\n";
        break;
    }
    return 0;
}