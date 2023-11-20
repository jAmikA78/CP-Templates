# Code Templates

### Table of content

1. [Number theory](#Number-Theory)
	- [Is prime](#Check-number-if-prime-or-not?)
	- [Prime Factorization](#Prime-Factorization)
	- [Get Divisors](Get-Divisors)

---

### Number Theory

#### Tutorials



Source|Content|Type|link
----|---|---|---
Mahmoud Ayman's Session 1|*Divisors, GCD, LCM, Prime Factorization, Pow, PowMod, Sieve*|Video|[link](https://youtu.be/-ptnoz7Us_I?si=hDSCoXu97gNR6PPm)|
Mahmoud Ayman's Session 2|*Modular Arithmatic,*|Video|[link](https://youtu.be/n8_mqm2amzY?si=ck64qVKtoZsFRCd8)
|Mostafa Saad|Primes|Video|[link](https://youtu.be/VZBfW08ECgA)|
|Mostafa Saad|Factorization|Video|[link](https://youtu.be/-5ApOQDhBtU)|
|Mostafa Saad|Fib, GCD, LCM, Pow|Video|[link](https://youtu.be/YklnFXpq0ZE?si=2ueThtekooj1o5uU)|	
|Muhammed Afifi|Prime factorization using Sieve|Video|[link](https://youtu.be/xUk2SggGDRc?si=rjt_Bjb3PYAmktZW)|
|CP-Algorithm|sieve-of-eratosthenes|Blog|[link](https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html)|
|CP-Algorithm|Divisors|Blog|[link](https://cp-algorithms.com/algebra/divisors.html)|
|Hazem Adel's Session|Primes, Sieve, Divisors, Smallest prime factor, Factorization|Video|[link](https://youtu.be/sFxWQ73khKs?si=A9hHlnURB4Mc36b5)|

---

##### **Check number if prime or not?**

Idea:

loop on all numbers if number statisfy 2 conditions `n > 2` because `1` and `0` aren't primes :) if each one reminder from number when modulus from 3 to sqrt(n) equals zero that `return 0`isn't prime :).
 
Complexity time: <var>O( sqrt(n) )</var>

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


##### **Prime Factorization**

Idea: create vector of pairs to store factors of num then looping from <var>2</var> to <var>sqrt(n)</var> and if 

Complexity time: <var>O( sqrt(n) )</var>

Code:
```cpp
// next line as a create new data type :)
template<typename T = int> using veprs = vector<pair<T, T>>;
veprs<ll> primeFactors(ll n) { // sqrt (n)
    veprs<ll> ret;
    for (int i = 2; (i * i) <= n; i += (1 + (i & 1))) {
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
```

##### **Get Divisors**

Idea: ....

Complexity time: <var>O( sqrt(n)  )</var>

Code:
```cpp
vector<ll> divisors(ll n) {
    vector<ll> ret;
    for (ll i = 1; (i * i) <= n; i++) {
        if (n % i == 0) {
            ret.pb(i);
            if (i * i != n)
                ret.pb(n / i);
        }
    }
    return ret;
}
```