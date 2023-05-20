#include<iostream>
using namespace std;
int main()
{
    int NO;
    cout<<"Enter any number between 1 and 5\n";
    cin>>NO;
    switch (NO)
    {
    case 1:
        cout<<"One";
        break;
    case 2:
        cout<<"Two";
        break;
    case 3:
        cout<<"Three";
        break;
    case 4:
        cout<<"Four";
        break;
    case 5:
        cout<<"Five";
        break;
       
    
    default:
        cout<<"Please enter numbers as intructed above";
        break;
    }

    return 0;
}

cout<<"Please Select: \n";
            cin>>loanstatus;
           if(loanstatus == 1)
           {
                Goodcredit();
           }
           else if(loanstatus == 2)
           {
                constant();
           }
           else if(loanstatus == 3)
           {
                 noGoodCredit();
           }
           else
           {
            cout<<"Invalid Entry!!"<<endl;
           }


           