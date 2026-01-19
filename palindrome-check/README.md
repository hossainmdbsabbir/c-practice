# Palindrome Number Checker (C Program)

##  Overview

This C program checks whether a given **non-negative integer** is a **palindrome**.
A palindrome number reads the same **forward and backward** (e.g., `121`, `1331`).

---

##  How It Works

1. Takes an integer input from the user
2. Rejects negative numbers (not palindromes)
3. Reverses the number using arithmetic operations
4. Compares the reversed number with the original
5. Prints whether the number is a palindrome or not

---

##  Core Logic Used

* Modulus operator `%` to extract digits
* Integer division `/` to remove digits
* While loop for digit reversal
* Conditional statements for comparison

---

##  Example Output

### Input

```
Please enter an integer: 121
```

### Output

```
It's a palindrome.
```

### Input

```
Please enter an integer: 456
```

### Output

```
It's not a palindrome.
```

---

##  Special Case Handling

* **Negative numbers** are automatically rejected

  ```
  Negative numbers are not palindromes.
  ```

---

## ▶ How to Run the Program

### Compile

```bash
gcc palindrome.c -o palindrome
```

### Execute

```bash
./palindrome
```

---

##  Requirements

* C Compiler (GCC recommended)
* Basic understanding of C syntax

---

##  Key Takeaway

This program is a great example of using **loops, conditions, and mathematical operations** in C to solve a real problem efficiently.
