# Code Templates

### Table of content

1. [Number theory](#Number-Theory)
	- [Is prime](#Check-number-if-prime-or-not?)
	- [Prime Factorization](#Prime-Factorization)

---

### Number Theory

#### **Check number if prime or not?**

Idea:

loop on all numbers if number statisfy 2 conditions `n > 2` because `1` and `0` aren't primes :) if each one reminder from number when modulus from 3 to sqrt(n) equals zero that `return 0`isn't prime :).
 
Complexity time:

Code:
```cpp
bool isPrime(ll n) {
    if (n == 1 || n == 0)return 0;
    else if (n != 2 && n % 2 == 0)return 0;
    for (ll i = 2; (i * i) <= n; i++) {
        if (n % i == 0)return 0;
    }
    return 1;
}
```
<br>
---
<br>


#### **Prime Factorization**

Idea: ....

Complexity time: **O(** sqrt(n) **)**

Code:
```cpp
// next line as a create new data type :)
template<typename T = int> using veprs = vector<pair<T, T>>;
veprs<ll> primeFactors(ll n) {
    veprs<ll> ret;
    for (int i = 2; (i * i) <= n; ++i) {
        if (n % i == 0) {
            ll c = 0;
            while (n % i == 0)
                n /= i, c++;
            ret.pb(i, c);
        }
    }
    if (n > 1)
        ret.pb(n, 1);
    return ret;
}
void s0lve() {
    ll n;
    cin >> n;
    veprs<ll> prime_factors = primeFactors(n);
    for (auto [a, b]: prime_factors)
        cout << a << " - " << b << ln;
}
```
