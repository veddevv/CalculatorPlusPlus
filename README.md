# Calculator++

A simple command-line calculator program written in C++ that performs basic arithmetic operations. As you can see, it based off of the name of the programming language C++.
WIP.

## Features

- **Addition** (`+`): Add two numbers
- **Subtraction** (`-`): Subtract two numbers
- **Multiplication** (`*`): Multiply two numbers
- **Division** (`/`): Divide two numbers with zero-division error handling

## Requirements

- C++ compiler (gcc, clang++, or g++)
- No external dependencies required
- Standard C++ library only

## Compilation

To compile the program, use one of the following commands:

### Using GCC
```bash
gcc main.cpp -o main -lstdc++
```

### Using g++
```bash
g++ main.cpp -o main
```

### Using clang++
```bash
clang++ main.cpp -o main
```

### With optimization (optional)
```bash
g++ -O2 main.cpp -o main
```

## Usage

1. Run the compiled program:
   ```bash
   ./main
   ```

2. Follow the prompts:
   - Enter an operator: `+`, `-`, `*`, or `/`
   - Enter two numbers separated by space

### Example

```
Enter operator (+, -, *, /): +
Enter two numbers: 5 3
Result: 8
```

### Example with Division
```
Enter operator (+, -, *, /): /
Enter two numbers: 10 2
Result: 5
```

### Error Handling

The program handles two types of errors:

1. **Division by Zero**
   ```
   Enter operator (+, -, *, /): /
   Enter two numbers: 10 0
   Error: Division by zero!
   ```

2. **Invalid Operator**
   ```
   Enter operator (+, -, *, /): %
   Enter two numbers: 5 3
   Error: Invalid operator!
   ```

## Code Structure

- `main.cpp`: Clean, modern C++ implementation
- Uses explicit `std::` namespace prefix (no `using namespace std;`)
- Switch-case statement for operation handling
- Input validation for division by zero
- Error messages for invalid operators
- Consistent formatting and proper spacing

## License

This is a simple educational project. Feel free to use and modify as needed.
