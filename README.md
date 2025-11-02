![Libft Banner](https://github.com/mirr-x/42-CC-1337/blob/main/images/github_piscine_and_common_core_banner_libft.png)

# libft > My libft Journey

A concise, practical libft built by implementing the standard C helpers from scratch. This repo is a learning diary: clear code, small tests, and notes about edge cases and memory handling.

## ABOUT

The first project at 42, libft, involves learning how the standard functions of C programming work by writing them from scratch and creating a personal library. This project is vital because the library will be reused in later 42 projects.

If you're a 42 student, implement and test the functions yourself instead of copy‑pasting. Be patient and thorough > the learning is in the doing.

## HOW TO USE

1º - Clone the repository

```bash
git clone git@github.com:mirr-x/42-libft.git
```

2º - Enter the project folder and run make

```bash
cd 42-libft
make
```

3º - To use in your code, include the header

```c
#include "libft.h"
```

## MAKEFILE RULES

- `make` > Compile libft mandatory files.
- `make bonus` > Compile libft bonus files.
- `make all` > Compile mandatory + bonus files.
- `make clean` > Delete all `.o` (object) files.
- `make fclean` > Delete `.o` and `libft.a` files.
- `make re` > `fclean` then `all`.

## MANDATORY

The mandatory functions in libft include both functions from the standard C library and other helpers useful for character, string, and memory manipulation. These 34 mandatory functions are the baseline for a complete libft.

Check and manipulate characters:
- `ft_isalpha` > Alphabetic character test.
- `ft_isdigit` > Decimal-digit character test.
- `ft_isalnum` > Alphanumeric character test.
- `ft_isascii` > Test for ASCII character.
- `ft_isprint` > Test for printable character.
- `ft_toupper` > Lower case to upper case conversion.
- `ft_tolower` > Upper case to lower case conversion.

Manipulate strings:
- `ft_strlen` > String length.
- `ft_strlcpy` > Size-bounded string copy.
- `ft_strlcat` > Size-bounded string concatenation.
- `ft_strchr` > Locate first occurrence of char in string.
- `ft_strrchr` > Locate last occurrence of char in string.
- `ft_strncmp` > Size-bounded string compare.
- `ft_strnstr` > Locate substring in string (size-bounded).
- `ft_substr` > Extract substring (malloc).
- `ft_strjoin` > Join two strings into new malloc'd string.
- `ft_strtrim` > Trim characters from start/end of string.
- `ft_split` > Split string by delimiter into array.
- `ft_strmapi` > Create new string by applying a function to each char.
- `ft_striteri` > Iterate and apply function to each char with index.

Manipulate memory:
- `ft_calloc` > Allocate zeroed memory.
- `ft_memset` > Fill memory with a byte.
- `ft_bzero` > Zero a memory area.
- `ft_memcpy` > Copy memory area.
- `ft_memmove` > Copy memory area that may overlap.
- `ft_memchr` > Locate byte in memory.
- `ft_memcmp` > Compare memory areas.
- `ft_strdup` > Duplicate a string (malloc).

Manipulate numbers / IO helpers:
- `ft_atoi` > Convert ASCII string to integer.
- `ft_itoa` > Convert integer to ASCII string.
- `ft_putchar_fd` > Output a char to given file descriptor.
- `ft_putstr_fd` > Output a string to given file descriptor.
- `ft_putendl_fd` > Output a string with newline to fd.
- `ft_putnbr_fd` > Output an integer to given file descriptor.

## BONUS

The bonus functions focus on singly linked list manipulation and are worth extra points. Completing these gives a fuller library and a higher possible grade.

- `ft_lstnew` > Create new list element.
- `ft_lstadd_front` > Add element at the beginning.
- `ft_lstadd_back` > Add element at the end.
- `ft_lstsize` > Count elements in list.
- `ft_lstlast` > Get last element of list.
- `ft_lstdelone` > Delete a single element.
- `ft_lstclear` > Clear a list from a starting point.
- `ft_lstiter` > Apply function to each element's content.
- `ft_lstmap` > Map function over list into a new list.

## NORMINETTE

At 42 School, projects must respect the Norm coding standard. Quick highlights:

- No `for`, `do...while`, `switch`, `case`, `goto`, ternary operators, or variable-length arrays.
- Max 25 lines per function (not counting braces).
- Line width <= 80 columns.
- Max 4 named parameters per function.
- No combined declarations and assignments on the same line (unless `static`).
- Max 5 variables per function.

Run the Norminette tool regularly and fix violations as you go.

Resources:
- 42 Norms (PDF)
- Norminette > https://github.com/42School/norminette
- 42 Header > useful editor header templates

## FILES OF INTEREST

- `libft/libft.h` > Public headers (e.g. `libft.h`).
- `libft/*.c` > Source implementation files.
- `Makefile` > Build rules.

