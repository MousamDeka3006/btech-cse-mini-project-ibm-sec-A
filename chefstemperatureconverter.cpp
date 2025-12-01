Problem title: Chef's temperature converter.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float celsius;


    cin >> celsius;

    float fahrenheit = (celsius * 9 / 5) + 32;

    cout << fixed << setprecision(2);
    cout << "Temperature in Fahrenheit = " << fahrenheit << endl;

    return 0;

}
