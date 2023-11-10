#include <iostream>

using namespace std;

// Hàm tính tổng ước của một số nguyên dương
int sumOfDivisors(int n) {
    int sum = 1; // 1 là ước của mọi số

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }

    return sum;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        // Tính tổng ước và in ra màn hình
        int result = sumOfDivisors(n);
        cout << result << endl;
    }

    return 0;
}