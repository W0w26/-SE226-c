#include <iostream>
#include <cmath>
using namespace std;

double result = 0;

void equation(int n, int k)
{
    if (k == 0) {
        result += 1;
        return;
    }

    equation(n, k-1);

    result += (pow(n, k) * pow(-1, k+1)) / tgamma(k+1);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    equation(n, 5);

    cout << "Result = " << result << endl;

    return 0;
}
