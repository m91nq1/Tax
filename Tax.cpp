#include <iostream>
using namespace std;

float calcCounty(float);
float calcState(float);
float calcTotal(float, float);

int main()
{
    float sales, countytax, statetax, totaltax;
    cout << "Welcome to the total tax calculator tax" << endl;
    cout << "Enter the total sales of the month " << endl;
    cin >> sales;

    countytax = calcCounty(sales);
    statetax = calcState(sales);
    totaltax = calcTotal(countytax, statetax);

    cout << "The county tax is " << "$" << countytax << endl;
    cout << "The state tax is " << "$" << statetax << endl;
    cout << "The total tax is " << "$" << totaltax << endl;

    return 0;
}

float calcCounty(float sales)
{
    float countytax;
    countytax = sales * 0.02;
    return countytax;
}

float calcState(float sales)
{
    float statetax;
    statetax = sales * 0.04;
    return statetax;
}

float calcTotal(float statetax, float countytax)
{
    float totaltax;
    totaltax = statetax + countytax;
    return totaltax;
}
