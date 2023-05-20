#include<iostream>
using namespace std;
int main()
{
    int values[] = {50,60,48,90,75,48,38,60};
    int sum = 0;
    int size = 8;
    for (int i = 0; i < 8; i++)
    {
        sum = sum + values[i];
    }
    cout<<"Sum = "<<sum;

    return 0;
}