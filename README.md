# my_printf

## Overview
`my_printf` is a C library that provides a custom implementation of the `printf` function from the standard C library. This library aims to offer similar functionality to `printf`, allowing users to format and print output to the console with ease. Developed as part of an Epitech project, this implementation was completed within a timeframe of 2 weeks by a team of 2 developers ([Edgar Brunet](https://github.com/edgarbnt) and [Enzo Dubeaurepaire](https://github.com/EnzoDubeaurepaire)).

## Features
- Supports a wide range of format specifiers, including `%d`, `%s`, `%c`, `%f`, `%x`, and more.
- Provides basic formatting options such as width, precision, and alignment.
- Supports the use of flags to control formatting, such as `+`, `-`, `0`, and space.

## Installation
To use `my_printf` in your C projects, follow these steps:

1. Clone the repository:

```bash
git clone https://github.com/yourusername/my_printf.git
```

2. Build the library:

```bash
cd my_printf
make
```

This will generate the `my_printf.a` library file.

3. Link the library to your project:

```bash
gcc -o my_program my_program.c -L/path/to/my_printf -lmy_printf
```

Replace `/path/to/my_printf` with the actual path to the `my_printf` library directory.

4. Include the header file in your C code (which is in the `include` folder):

```c
#include "my_printf.h"
```

## Usage
Using `my_printf` is similar to using `printf` from the standard C library. Here's a basic example:

```c
#include <stdio.h>
#include "my_printf.h"

int main() {
    my_printf("Hello, %s!\n", "world");
    my_printf("The value of pi is approximately: %f\n", 3.14159);
    my_printf("The answer to everything is: %d\n", 42);
    return 0;
}
```
