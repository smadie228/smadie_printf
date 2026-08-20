# ft_printf

A compact reimplementation of the C standard library's `printf` function, built as a static library for School 21.

The project focuses on variadic arguments, format parsing, numeric conversion, pointer representation, and predictable output counting.

## Supported conversions

`%c` В· `%s` В· `%p` В· `%d` В· `%i` В· `%u` В· `%x` В· `%X` В· `%%`

## Build

```bash
make
```

This produces `libftprintf.a`. Include `ft_printf.h` and link the archive with your program:

```bash
cc main.c libftprintf.a -o demo
```

## API

```c
int ft_printf(const char *format, ...);
```

Like the standard function, `ft_printf` returns the number of characters written.

## Project status

Learning project preserved as part of my School 21 C portfolio.
