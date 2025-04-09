#include <iostream>
using namespace std;

int main() {
    int n = 5;
    cout << "The sum of the first " << n << " natural numbers is: ";
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}
