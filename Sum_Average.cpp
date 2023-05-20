#include<iostream>
using namespace std;
void sum(int a, int b, int c)
{
    cout<<"Sum ="<<a + b + c<<endl;
}
void avg(int a, int b, int c)
{
    cout<<"Average ="<<(a + b + c)/3<<endl;
}
int main()
{
    int x, y, z;
    cout<<"Please enter three integers of your choice\n";
    cin>>x;
    cin>>y;
    cin>>z;
    sum(x, y, z);
    avg(x, y, z);

    return 0;
}