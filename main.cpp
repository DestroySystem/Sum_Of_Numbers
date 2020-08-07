#include <iostream>
using namespace std;

int main()
{
    int value = 0, sum = 0, max = 0,step;
    cout << " Enter the interval of numbers:" << endl;
    cin >> max;
    cout << " Enter divisor : " << endl;
    cin >> value;
    step = value;
    while (value <= max)
    {
        sum += value;
        value += step;
    }
    cout << " Sum of number divisible by " << step << " = " << sum << endl;
    return 0;
}