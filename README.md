<p align="center">
  <img src="https://github.com/jotavare/jotavare/blob/main/42/banners/piscine_and_common_core/github_piscine_and_common_core_banner_get_next_line.png">
</p>

<p align="center">
	<img src="https://img.shields.io/badge/evaluated-18%20%2F%2012%20%2F%202022-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=%2312bab9&style=flat-square"/>
	<a href='https://www.linkedin.com/in/jotavare' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-0A66C2?style=flat-square&logo=data:image/svg%2bxml;base64,PHN2ZyByb2xlPSJpbWciIHZpZXdCb3g9IjAgMCAyNCAyNCIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIj48dGl0bGU+TGlua2VkSW48L3RpdGxlPjxwYXRoIGZpbGw9IndoaXRlIiBkPSJNMjAuNDQ3IDIwLjQ1MmgtMy41NTR2LTUuNTY5YzAtMS4zMjgtLjAyNy0zLjAzNy0xLjg1Mi0zLjAzNy0xLjg1MyAwLTIuMTM2IDEuNDQ1LTIuMTM2IDIuOTM5djUuNjY3SDkuMzUxVjloMy40MTR2MS41NjFoLjA0NmMuNDc3LS45IDEuNjM3LTEuODUgMy4zNy0xLjg1IDMuNjAxIDAgNC4yNjcgMi4zNyA0LjI2NyA1LjQ1NXY2LjI4NnpNNS4zMzcgNy40MzNjLTEuMTQ0IDAtMi4wNjMtLjkyNi0yLjA2My0yLjA2NSAwLTEuMTM4LjkyLTIuMDYzIDIuMDYzLTIuMDYzIDEuMTQgMCAyLjA2NC45MjUgMi4wNjQgMi4wNjMgMCAxLjEzOS0uOTI1IDIuMDY1LTIuMDY0IDIuMDY1em0xLjc4MiAxMy4wMTlIMy41NTVWOWgzLjU2NHYxMS40NTJ6TTIyLjIyNSAwSDEuNzcxQy43OTIgMCAwIC43NzQgMCAxLjcyOXYyMC41NDJDMCAyMy4yMjcuNzkyIDI0IDEuNzcxIDI0aDIwLjQ1MUMyMy4yIDI0IDI0IDIzLjIyNyAyNCAyMi4yNzFWMS43MjlDMjQgLjc3NCAyMy4yIDAgMjIuMjIyIDBoLjAwM3oiLz48L3N2Zz4K&logoColor=white'/></a>
	<a href='https://profile.intra.42.fr/users/jotavare' target="_blank"><img alt='42' src='https://img.shields.io/badge/Porto-100000?style=flat-square&logo=42&logoColor=white&labelColor=000000&color=000000'/></a>
</p>

## ABOUT
This project taught me how to read from a file descriptor and use static variables. This function retrieves a single line from a specified file descriptor. When called in a loop, get_next_line returns all the contents of the file, one line at a time until the end of the file is reached. Additionally, this function can be compiled with any buffer size specified.

> [!NOTE]
> For the rest of the projects and exams in the cursus, <a href="https://github.com/jotavare/42-common-core">click here</a>.

## HOW TO USE
#### 1º - Clone the repository
```git
git clone git@github.com:jotavare/get_next_line.git
```

#### 2º - Enter the project folder
```bash
cd get_next_line/get_next_line
```

#### 3º - Compile the mandatory or bonus files
> The program should always be compiled with the flags below.
```bash
[Flags] -Wall -Wextra -Werror
[Mandatory] cc [Flags] main.c get_next_line.c get_next_line_utils.c
[Bonus] cc [Flags] main.c get_next_line_bonus.c get_next_line_utils_bonus.c
```

#### 4º - BUFFER_SIZE can be specified at compilation to override the default BUFFER_SIZE
> get_next_line should be able to compile with and without the -D BUFFER_SIZE=[SIZE] flag.
```bash
[Flags] -Wall -Wextra -Werror -D BUFFER_SIZE=[SIZE]
[Mandatory] cc [Flags] main.c get_next_line.c get_next_line_utils.c
[Bonus] cc [Flags] main.c get_next_line_bonus.c get_next_line_utils_bonus.c
```

#### 5º - Execution with one or multiple file descriptors/standard input
```bash
./a.out [text.txt]
./a.out [text1.txt] [text2.txt]
```

## MANDATORY
- [x] Read from one file descriptor, one line at a time.
- [x] Needs to return the line that was read. If empty or error, return `NULL`.
- [x] Should work as expected reading from a file or standard input.
- [x] Returned line should include the terminating `\n` character, except if it's the end of the file and the line does not end with `\n`.
- [x] The `get_next_line.h` header file should include at least the `get_next_line()` function.
- [x] All additional functions should be included in `get_next_line_utils.c` file, libft is not allowed.
- [x] To define the buffer size for `read()`, add the option to the compiled file `-D BUFFER_SIZE=[SIZE]`.

## BONUS
- [x] Use only one static variable.
- [x] Manage multiple file descriptors at the same time.
- [x] Bonus files should include a suffix `_bonus.[c/h]`.

## NORMINETTE
> At 42 School, it is expected that almost every project is written following the Norm, which is the coding standard of the school.

```
- No for, do...while, switch, case, goto, ternary operators, or variable-length arrays allowed;
- Each function must be a maximum of 25 lines, not counting the function's curly brackets;
- Each line must be at most 80 columns wide, with comments included;
- A function can take 4 named parameters maximum;
- No assigns and declarations in the same line (unless static);
- You can't declare more than 5 variables per function;
- ...
```

* [42 Norms](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf) - Information about 42 code norms. `PDF`
* [Norminette](https://github.com/42School/norminette) - Tool to respect the code norm, made by 42. `GitHub`
* [42 Header](https://github.com/42Paris/42header) - 42 header for Vim. `GitHub`

## DEBUGGING
> The line returned belongs to the caller, and whatever has been read but not
> yet returned sits in a static variable between calls, so this is where the
> leaks are.

Compile with `-g` to keep the symbols the debuggers need:

```bash
cc -Wall -Wextra -Werror -g main.c get_next_line.c get_next_line_utils.c
```

`valgrind --leak-check=full ./a.out` - Report memory that was allocated and never freed. Every line handed back has to be freed by the caller, and stopping before the end of a file leaves the stash holding the rest.

`valgrind --track-origins=yes ./a.out` - Trace an uninitialised value back to where it came from.

`gdb ./a.out` - Step through a call and inspect the stash between reads.

`cc -fsanitize=address -g ...` - Catches leaks and out-of-bounds reads without valgrind, and runs much faster.

Worth testing with `-D BUFFER_SIZE=1` and with a file whose last line has no `\n`; both are where an implementation usually breaks.

* [GDB](https://www.sourceware.org/gdb/) - The GNU debugger. `Website`
* [Valgrind](https://valgrind.org/docs/manual/quick-start.html) - Quick start guide. `Website`
