# 🧮 C Calculator

A simple command-line calculator built in **C** to practice core programming concepts such as functions, modular programming, loops, switch statements, and basic mathematical operations.

<p align="center">

<img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c"> <img src="https://img.shields.io/badge/Compiler-GCC-00599C?style=for-the-badge&logo=gnu"> <img src="https://img.shields.io/badge/Platform-Windows-0078D6?style=for-the-badge&logo=windows"> <img src="https://img.shields.io/badge/Terminal-MSYS2%20UCRT64-5C2D91?style=for-the-badge"> <img src="https://img.shields.io/badge/License-MIT-green?style=for-the-badge">

</p>




## ✨ Features

* ➕ Addition
* ➖ Subtraction
* ✖️ Multiplication
* ➗ Division
* 🔢 Power (`a^b`)
* √ Square Root
* ❌ Error handling for division by zero
* 📋 Interactive menu-driven interface

## 📂 Project Structure

```text
Calculator/
│
├── main.c
├── calculator.c
├── calculator.h
└── README.md
```

## 🚀 Getting Started

### Prerequisites

* GCC Compiler (MSYS2 UCRT64)
* Visual Studio Code (optional)

### Clone the Repository

```bash
git clone <https://github.com/Giribalajichandrashekar/Calculator-using-C>
cd Calculator
```

## ⚙️ Compile & Run (MSYS2 UCRT64)

Open the **MSYS2 UCRT64** terminal and navigate to your project folder.

Compile:

```bash
gcc main.c calculator.c -o calculator.exe -lm
```

Run:

```bash
./calculator.exe
```

## 📸 Sample Output

```text
==============================
      C CALCULATOR
==============================

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Power
6. Square Root
7. Exit

Enter your choice: 1
Enter two numbers: 12 8

Result = 20.00
```

## 🛠️ Technologies Used

* C Programming Language
* GCC (MSYS2 UCRT64)
* Standard C Library
* `math.h`

## 📚 Concepts Practiced

* Functions
* Header Files
* Modular Programming
* Loops
* Switch Statements
* User Input
* Error Handling
* Mathematical Operations

## 🔮 Future Improvements

* Scientific Calculator Mode
* Calculation History
* Memory Functions (M+, M-, MR, MC)
* Input Validation
* Expression Evaluation (`10 + 5 * 2`)
* Improved Terminal UI with Colors
* Keyboard Shortcuts

---

## 👨‍💻 Author

**Giri Balaji C**

Student Developer

---
## 📄 License

This project is open source and available under the MIT License.


## 🤝 Contributing

Contributions, suggestions, and improvements are welcome. Feel free to fork the repository
and submit a pull request.