#include<iostream>
using namespace std;
void category()
{
    cout<<"1: Total Orphan\n";
    cout<<"2: Single Parent\n";
    cout<<"3: Marginalised\n";
    cout<<"4: Other\n";
}
int main()
{
    int choice;
    string fullname;
    cout<<"To qualify for busary, please fill this form correctly\n";
    cout<<"Enter Your Fullname: "<<endl;
    getline(cin,fullname);
    cout<<fullname<<" welcome to application, we wish you all the best\n";

    cout<<"Select your category using numbers 1 to 4.\n";
    category();
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"You will get Ksh. 40000\n";
        break;
    case 2:
        cout<<"You will get Ksh. 30000\n";
        break;
    case 3:
        cout<<"You will get Ksh.20000\n";
        break;
    case 4:
        cout<<"You will get Ksh.10000\n";
        break;
    
    default:
        cout<<"Invalid Entry\n";
        cout<<"Please Try Again\n";
        break;
    }
    return 0;
}
    