// This program will receive input
// on miles traveled and length of time
// in hours to calculate how many miles
// were traveled per hour.

// Beatrix House

#include <iostream>
#include <iomanip>
using namespace std;

void milesPerHour(float, float, float&);

int main ()
{
    float miles;
    float hours;
    float miles_Per_Hour;
    
    cout << setprecision(2) << fixed;
    
    cout << "Please input the miles traveled." << endl;
    cin >> miles;
    
    cout << "Please input the hours traveled." << endl;
    cin >> hours;
    
    miles_Per_Hour = milesPerHour(miles, hours);
    
    cout << "Your speed is " << miles_Per_Hour << " miles per hour." << endl;
}

void milesPerHour(float milesTraveled, hoursTraveled, float& mph)
{
    mph = milesTraveled * hoursTraveled;
}

