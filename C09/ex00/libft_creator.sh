#!/bin/bash
rm -f libft.a
find . -type f -name "*.c" -exec gcc -Wall -Wextra -Werror -c {} ";"
ar -rc libft.a *.o
find . -type f -name "*.o" -delete