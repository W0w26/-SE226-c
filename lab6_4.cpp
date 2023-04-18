#include <iostream>
#include <cmath>
using namespace std;

double equation(int k)
{
    static int n;
    static bool n_set = false;

    if (!n_set) {
        cout << "Enter n: ";
        cin >> n;
        n_set = true;
    }

    if (k == 0)
        return 1;
    double prev = equation(k-1);
    return prev + (pow(n,k)/tgamma(k+1));
}

int main()
{
    double result = equation(5);

    cout << "Result = " << result << endl;

    return 0;
}
