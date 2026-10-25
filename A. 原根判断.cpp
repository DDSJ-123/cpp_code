#include <iostream>
#include <vector>
using namespace std;

// 快速幂：计算 (base^exponent) mod modu
long long pow_mod(long long base, long long exponent, long long modu) {
    long long result = 1;
    base = base % modu; // 预处理，避免base过大
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % modu;
        }
        base = (base * base) % modu;
        exponent /= 2;
    }
    return result;
}

// 质因数分解：返回n的所有不同质因数
vector<long long> get_prime_factors(long long n) {
    vector<long long> factors;
    // 处理2的情况
    if (n % 2 == 0) {
        factors.push_back(2);
        while (n % 2 == 0) n /= 2;
    }
    // 处理奇数
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            factors.push_back(i);
            while (n % i == 0) n /= i;
        }
    }
    // 剩余的n本身是质数
    if (n > 1) factors.push_back(n);
    return factors;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        long long a, p;
        cin >> a >> p;
        long long m = p - 1;
        vector<long long> factors = get_prime_factors(m);
        bool is_primitive = true;
        
        for (long long q : factors) {
            long long exponent = m / q;
            long long res = pow_mod(a, exponent, p);
            if (res == 1) {
                is_primitive = false;
                break;
            }
        }
        
        cout << (is_primitive ? "Yes" : "No") << endl;
    }
    return 0;
}

