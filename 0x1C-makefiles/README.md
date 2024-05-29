# 0x1C. C - Makefiles

This project is focused on understanding and utilizing Makefiles to automate the compilation process of C programs. Makefiles are a fundamental tool in software development that help manage project builds efficiently.

## Learning Objectives

By the end of this project, you should be able to:

- Explain the purpose and functionality of `make` and Makefiles.
- Understand when, why, and how to use Makefiles.
- Define and use rules in Makefiles.
- Differentiate between explicit and implicit rules.
- Identify and implement the most common and useful rules.
- Set and use variables in Makefiles.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- OS: Ubuntu 20.04 LTS
- Version of `gcc`: 9.3.0
- Version of `make`: GNU Make 4.2.1
- All files should end with a new line.
- A `README.md` file at the root of the project is mandatory.

## Tasks

### 0. make -f 0-Makefile

Create your first Makefile.

**Requirements:**

- Name of the executable: `school`
- Rules: `all`
  - The `all` rule builds your executable.
- Variables: None

**Example:**

```sh
$ make -f 0-Makefile
gcc main.c school.c -o school
$ ./school
```

### 1. make -f 1-Makefile

Create a Makefile with variables for the compiler and source files.

**Requirements:**

- Name of the executable: `school`
- Rules: `all`
  - The `all` rule builds your executable.
- Variables: `CC`, `SRC`
  - `CC`: the compiler to be used.
  - `SRC`: the `.c` files.

**Example:**

```sh
$ make -f 1-Makefile
gcc main.c school.c -o school
$ make -f 1-Makefile
gcc main.c school.c -o school
```

### 2. make -f 2-Makefile

Create a more useful Makefile with object files.

**Requirements:**

- Name of the executable: `school`
- Rules: `all`
  - The `all` rule builds your executable.
- Variables: `CC`, `SRC`, `OBJ`, `NAME`
  - `CC`: the compiler to be used.
  - `SRC`: the `.c` files.
  - `OBJ`: the `.o` files.
  - `NAME`: the name of the executable.
- The `all` rule should recompile only the updated source files.
- You are not allowed to have a list of all the `.o` files.

**Example:**

```sh
$ make -f 2-Makefile
gcc -c -o main.o main.c
gcc -c -o school.o school.c
gcc main.o school.o -o school
$ make -f 2-Makefile
gcc main.o school.o -o school
$ echo "/* School */" >> main.c
$ make -f 2-Makefile
gcc -c -o main.o main.c
gcc main.o school.o -o school
```

### 3. make -f 3-Makefile

Create a Makefile with cleaning rules.

**Requirements:**

- Name of the executable: `school`
- Rules: `all`, `clean`, `oclean`, `fclean`, `re`
  - `all`: builds your executable.
  - `clean`: deletes all Emacs and Vim temporary files along with the executable.
  - `oclean`: deletes the object files.
  - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files.
  - `re`: forces recompilation of all source files.
- Variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
  - `CC`: the compiler to be used.
  - `SRC`: the `.c` files.
  - `OBJ`: the `.o` files.
  - `NAME`: the name of the executable.
  - `RM`: the program to delete files.
- The `all` rule should recompile only the updated source files.
- The `clean`, `oclean`, `fclean`, `re` rules should never fail.
- You are not allowed to have a list of all the `.o` files.

**Example:**

```sh
$ make -f 3-Makefile
gcc -c -o main.o main.c
gcc -c -o school.o school.c
gcc main.o school.o -o school
$ make all -f 3-Makefile
gcc main.o school.o -o school
$ make clean -f 3-Makefile
rm -f *~ school
$ make oclean -f 3-Makefile
rm -f main.o school.o
$ make fclean -f 3-Makefile
rm -f *~ school
rm -f main.o school.o
$ make all -f 3-Makefile
gcc -c -o main.o main.c
gcc -c -o school.o school.c
gcc main.o school.o -o school
$ make re -f 3-Makefile
rm -f main.o school.o
gcc -c -o main.o main.c
gcc -c -o school.o school.c
gcc main.o school.o -o school
```

### 4. A complete Makefile

Create a complete Makefile with additional compiler flags.

**Requirements:**

- Name of the executable: `school`
- Rules: `all`, `clean`, `fclean`, `oclean`, `re`
  - `all`: builds your executable.
  - `clean`: deletes all Emacs and Vim temporary files along with the executable.
  - `oclean`: deletes the object files.
  - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files.
  - `re`: forces recompilation of all source files.
- Variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
  - `CC`: the compiler to be used.
  - `SRC`: the `.c` files.
  - `OBJ`: the `.o` files.
  - `NAME`: the name of the executable.
  - `RM`: the program to delete files.
  - `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`.
- The `all` rule should recompile only the updated source files.
- The `clean`, `oclean`, `fclean`, `re` rules should never fail.
- You are not allowed to have a list of all the `.o` files.

**Example:**

```sh
$ make all -f 4-Makefile
gcc -Wall -Werror -Wextra -pedantic -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic -c -o school.o school.c
gcc main.o school.o -o school
```

### 5. Island Perimeter

Create a Python function to calculate the perimeter of an island in a grid.

**Requirements:**

- First line contains `#!/usr/bin/python3`
- You are not allowed to import any module.
- The module and function must be documented.

**Function Signature:**

```python
def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    """
```

**Example:**

```python
#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))  # Output: 12
```

## Repository

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1C-makefiles`

Ensure all your files are pushed to the correct GitHub repository and directory as specified.
