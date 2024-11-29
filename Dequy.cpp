#include <iostream>

using namespace std;

void dequy(int n, double result) {
    if (n == 0) {
        cout << result << endl;
        return;
    }

    result *= 2;
    cout << result << endl;
    dequy(n - 1, result);
}

int main() {
    int n = 5;
    double initialResult = 2;
    dequy(n, initialResult);
    return 0;
}