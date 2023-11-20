# Code Templates

### Table of content

1. [Number theory](#Number-Theory)


### Number Theory

**Check number if prime or not?**

Idea:

loop on all numbers if number statisfy 2 conditions `n > 2` because `1` and `0` aren't primes :) if each one reminder from number when modulus from 3 to sqrt(n) equals zero that `return 0`isn't prime :).
 
complexity:

code:
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