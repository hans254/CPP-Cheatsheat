#include<iostream>
using namespace std;
void sum(int a, int b, int c)
{
    cout<<"The sum is "<<a+b+c<<endl;
}
int main()
{
    int water_drilling_machine, car_engines, drones;
    cout<<"Enter the prices of each machine\n";
    cout<<"Enter the price of water_drilling_machine.\n";
    cin>>water_drilling_machine;
    cout<<"Enter the price of car_engines.\n";
    cin>>car_engines;
    cout<<"Enter the price of drones.\n";
    cin>>drones;

    sum(water_drilling_machine, car_engines, drones);
    return 0;
}