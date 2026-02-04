# Function Types Practice (Prime Numbers)

This project is a dedicated practice session for understanding how **User-Defined Functions** work in C. To demonstrate these concepts, I have implemented a **Prime Number Checker** using four different function structures.

## Concept Overview
According to standard C programming principles:
1. **Library/Built-in functions:** Pre-defined functions like `printf()` and `scanf()`.
2. **User-defined functions:** Created by the programmer to perform specific tasks.

### The Four Types of User-Defined Functions
I have structured my practice into these four categories:
* **Type I:** No argument, no return.
* **Type II:** No argument, but has return.
* **Type III:** Argument but no return.
* **Type IV:** Has argument and return both.

---

## Folder Structure

| File Name | Function Category | Description |
| :--- | :--- | :--- |
| `prime_no_arg_no_ret.c` | Type I | Function handles input, calculation, and printing. |
| `prime_no_arg_with_ret.c` | Type II | Function handles input but returns the result to `main`. |
| `prime_with_arg_no_ret.c` | Type III | `main` handles input and passes it; function prints result. |
| `prime_with_arg_with_ret.c` | Type IV | `main` handles input/output; function handles logic only. |

---

# C Function Types: The Prime Number Challenge

This folder is a collection of my practice programs in C. My goal was to master the **four ways to write user-defined functions** by applying them to a single logic: checking if a number is **Prime**.

## The Logic Used
For all these files, I used the **Modulo Operator (`%`)** and a `for` loop to check for factors. I also added a `break` statement to make the code more efficient—once a divisor is found, the loop stops immediately.

**Author:** MD Sabbir Hossain