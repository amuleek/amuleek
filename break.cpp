#include<iostream.h>
using namespace std;
int main() {
    float number, sum = 0.0;

    // test expression is always true
    while (true)
    {
        cout << "Enter a number: ";
        cin >> number;
        
        if (number != 0.0)
        {
            sum += number;
        }
        else
        {
            // terminates the loop if number equals 0.0
            break;
        }

    }
    cout << "Sum = " << sum;

    return 0;
}
