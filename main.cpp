#include <iostream>
using namespace std;

int main()
{
    int numpassengers = 4;
    double distanceKM = 159;
    double kmperLiter = 15;
    double gasprice = 1.5;
    double foodprice = 13;
    double litersused = 10.6;


    cout <<" how many people are coming on this trip with you? " << endl;
    cin >> numpassengers;
    cout <<"How many KM are you going to travel? " ;
    cin >> distanceKM ;
    cout <<"whats the price of gas? $";
    cin >> gasprice;
    cout <<"how much for each persons meals?";
    cin >> foodprice;


    litersused = (distanceKM / 100) * 15;




    return 0;
}