# Code Templates

<center>
   <mark>
      This repo not ready yet
   </mark>
</center>

### Table of content

1. [Number theory](#Number-Theory)
    - [Is prime](#Check-number-if-prime-or-not)
    - [Prime Factorization](#Prime-Factorization)
    - [Get Divisors](Get-Divisors)
    - [Sieve of Eratosthenes](Sieve%20of%20Eratosthenes)

<br>

---

<br>

### Number Theory

<br>

#### Tutorials

| Source                    | Content                                                            | Type  | link                                                                 |
|---------------------------|--------------------------------------------------------------------|-------|----------------------------------------------------------------------|
| Mahmoud Ayman's Session 1 | *Divisors, GCD, LCM, Prime Factorization, Pow, PowMod, Sieve, lpf* | Video | [link](https://youtu.be/-ptnoz7Us_I?si=hDSCoXu97gNR6PPm)             |
| Mahmoud Ayman's Session 2 | *Modular Arithmetic,*                                              | Video | [link](https://youtu.be/n8_mqm2amzY?si=ck64qVKtoZsFRCd8)             |
| Mostafa Saad              | _Primes_                                                           | Video | [link](https://youtu.be/VZBfW08ECgA)                                 |
| Mostafa Saad              | _Factorization_                                                    | Video | [link](https://youtu.be/-5ApOQDhBtU)                                 |
| Mostafa Saad              | _Fib, GCD, LCM, Pow_                                               | Video | [link](https://youtu.be/YklnFXpq0ZE?si=2ueThtekooj1o5uU)             |	
| Muhammed Afifi            | _Prime factorization using Sieve_                                  | Video | [link](https://youtu.be/xUk2SggGDRc?si=rjt_Bjb3PYAmktZW)             |
| CP-Algorithm              | _sieve-of-eratosthenes_                                            | Blog  | [link](https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html) |
| CP-Algorithm              | _Divisors_                                                         | Blog  | [link](https://cp-algorithms.com/algebra/divisors.html)              |
| Hazem Adel's Session      | _Primes, Sieve, Divisors, Smallest prime factor, Factorization_    | Video | [link](https://youtu.be/sFxWQ73khKs?si=A9hHlnURB4Mc36b5)             |

<br>

---

<br>

##### Check number if prime or not

Idea:
> loop on all numbers if number satisfy 2 conditions `n > 2` because `1` and `0` aren't primes :) if each one reminder
> from number when modulus from 3 to sqrt(n) equals zero that `return 0`isn't prime :).

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

Idea:
> create vector of pairs to store factors of num then looping from <var>2</var> to <var>sqrt(n)</var> and if

Complexity time: <var>O( sqrt(n) )</var>

Code:

```cpp
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

<br>

---

<br>

##### **Get Divisors**

Idea:
> ....

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

<br>

---

<br>

##### Sieve of Eratosthenes

Idea:
> ...

Complexity time: <var>O( n log log n )</var>

Code:

```cpp
vector<ll> primes(maxSize, 1);
void sieve() {
    primes[0] = primes[1] = 0;
    for (ll i = 2; (i * i) <= maxSize; ++i)
        if (primes[i])
            for (ll j = (i * i); j < maxSize; j += i)
                primes[j] = 0;
}
```

<br>

---

<br>
##### Power

Idea:
> ...

Complexity time:

Code:

```cpp
ll power(ll a, ll b) {
    if (b == 0)return 1;
    if (b == 1)return a;
    ll ret = 1;
    if (b % 2)ret = a;
    ll val = power(a, b / 2);
    return ret * val * val;
}
```

<br>

---

<br>

##### Power with mod

Idea:
> ...

Complexity time:

Code:

```cpp
ll powMod(ll a, ll b) {
    if (b == 0)return 1;
    if (b == 1)return a;
    ll ret = 1;
    if (b % 2)ret = a % mod;
    ll val = powMod(a, b / 2);
    return (ret * val * val) % mod;
}
```

<br>

---

<br>

##### Power

Idea:
> ...

Complexity time: <var>O( log (n) )</var>

Code:

```cpp
ll gcd(ll a, ll b) {
    if (a > b) swap(a, b);
    if (a == 0)return b;
    return gcd(b % a, a);
}
```

<br>

---

<br>