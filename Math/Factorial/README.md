# Factorial

<details open>
<summary>Resources</summary>

- [Maths is fun](https://www.mathsisfun.com/numbers/factorial.html) - blog
- [The Organic Chemistry Tutor](https://youtu.be/pxh__ugRKz8) - video

</details>

## Code

```cpp
int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}
```

## Important Notes

- $0!$ $=$ $1$

<details>
<summary>Proof</summary>

- step 1

    $2! = \frac{3!}{2}$

- step 2

    $1! = \frac{2!}{1}$

- step 3

    $0! = \frac{1!}{1}$

</details>
