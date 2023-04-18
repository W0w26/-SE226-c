#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n, x;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter x: ";
    cin >> x;

    vector<double> series(x+1);
    for (int i = 0; i <= x; i++) {
        series[i] = pow(n, i) / tgamma(i+1);
    }

    double result = 1 + accumulate(series.begin(), series.end(), 0.0);

    cout << "e^n = " << result << endl;

    return 0;
}
