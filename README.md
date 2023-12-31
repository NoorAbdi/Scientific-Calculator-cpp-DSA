# Scientific Calculator in C++

This repository contains a C++ program for a basic scientific calculator. This calculator can perform various mathematical operations, including basic arithmetic, trigonometric functions, logarithms, and more.

## Requirements

- the calculator should have + - / x   
- Basic trigonometry function: sin cos tan 
- More than basic function: square root, exp, log, ln 
- The calculator can input up to 10 or more variables and parameters. It is not limited to 2 + 2, 3 x 3, etc. 
- Inside the code, you apply the class function (separate class, inline class, constructor, etc.) 
- Inside the code, you apply the linked list or queue function
- It can delete and show the history of the calculator 

## Prerequisites

To compile and run this program, you'll need:

- C++ compiler (e.g., g++) installed on your system.
- A text editor or integrated development environment (IDE).

## Getting Started

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/your-username/Scientific-Calculator-cpp-DSA.git
   ```

2. Navigate to the project directory:

   ```bash
   cd main.cpp
   ```

3. Compile the program:

   ```bash
   g++ main.cpp 
   ```

4. Run the calculator:

   ```bash
   ./a.out
   ```

## Usage

- The calculator has a simple command-line interface.
- Follow the on-screen instructions to perform calculations.
- Use the specified keywords or symbols to select operations.

## Example

```plaintext
                 Scientific Calculator
Engineered by Axel, Gerald, Krisna, Abdi, and Marlon      

Instructions to calculate:
 - trigonomentry do sinN or cosN or tanN where N is degree - logarithmic do logN(I) or ln(I) where N is the base and I is a number
 - exponent do N^J where N and J are numbers
 - square root do VN where N is number
 - multiply/divide/add/sub do N*J or N/J or N+j or N-J where N and J are numbers

We try using these equations:
 - 1 + 1 - 2 / 2 + sin90 + cos0 + tan45 + V4 + 2^2 + log(100) = 12
 - 1 + (1 - 2) / 2 + sin90 + cos(1-1) + tan(15*3) + V(8/2) + log(100)^2 + log2(2^2) = 11.5
 - 1 + (2 + 4/(1+1))/2 + sin90 + cos(10*0) + tan((3*5)*3) 
+ V((2*6)+V16) + log(50*2)^2 + log2((2^2)*4)

Welcome!
Command:
 1: Calculate
 2: Show History
 0: Exit Program
Enter:

```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Special thanks to the C++ community for their support and contributions.

Feel free to contribute to this project by adding more features or improving the code. If you encounter any issues, please open an [issue](https://github.com/your-username/scientific-calculator-cpp/issues). Pull requests are welcome!
