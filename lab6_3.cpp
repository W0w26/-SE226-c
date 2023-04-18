#include <iostream>
#include <cmath>
using namespace std;

double equation(int n, int k)
{
    if (k == 0)
        return 1;
    double prev = equation(n, k-1);
    return prev + (pow(n,k)/tgamma(k+1));
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    double result = equation(n, 5);

    cout << "Result = " << result << endl;

    return 0;
}
