42 libft + push_swap starter files

Folder layout:
  libft/      Your libft library sources, header, and Makefile
  push_swap/  Push_swap starter source files and Makefile

IMPORTANT:
1. Copy your existing libft .c files into the libft/ folder. This archive
   contains the Makefile and libft.h, not implementations of all libft funcs.
2. The libft Makefile uses the standard 42 mandatory function filenames.
   Remove any source names you do not have, or add your own filenames.
3. From libft/: run `make` to create libft.a.
4. From push_swap/: run `make` to create the push_swap executable.
5. This is a starting point: main currently parses and prints the stack; it
   does not sort the values yet.

Potential next improvements:
- Return an error cleanly if parsing fails after some values were added.
- Suppress duplicate operation output when the operation cannot change a stack.
- Add the sorting algorithm and test with a push_swap checker.
