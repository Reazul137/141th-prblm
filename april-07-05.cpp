#include<iostream>
using namespace std;
int main()
{
    float kel, frh;

    cout << "\n\n Convert temperature in kelvin to Fahrenheit : \n";
    cout << "--------------------------------------------------\n";

    cout << " Input the temperature in kelvin : ";
    cin >> kel;

    frh = (9.0 / 5) * ( kel - 273.15 ) + 32;

    cout << " Your input temperature in kelvin is " << kel << " and the converted in Fahrenheit temperature is " << frh << endl;
    cout << endl;

    return 0;
}
