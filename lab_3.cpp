#include <iostream>
#include <cmath>
using namespace std;
#define pi 3.1415926536

int main() {
    double x, e, a = 0, sum = 0, b = pi;
    int i = 0;
    cout << "Enter precision:\n ";
    cin >> e;
    while (1) {
        x = a + (e*i);
        sum += (log(2 + sin(x))*e);
        if (x > (b - e)) {
            break;
        }
        i += 1;
    }
    cout << "Answer: " << sum;
    return 0;
}
