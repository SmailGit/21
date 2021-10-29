#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double n = 0;
    double last_n = 100;
    double sum = 1;
    int k = 2;

    double const e = 0.00005;

    while (abs(n - last_n) > e)
    {
        double factorial = 1;

        for (int i = k; i > 0; i--)
        {
            factorial = factorial * i;
        }

        n = 1 / factorial;
        last_n = pow(-1, k) / (factorial / (2 * k));

        sum = sum + n;

        k++;
    }

    cout << sum;
}

cout << sum;
}