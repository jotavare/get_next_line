<p align="center">
  <img src="https://github.com/jotavare/jotavare/blob/main/42/banners/piscine_and_common_core/github_piscine_and_common_core_banner_get_next_line.png">
</p>

<p align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/evaluated-18%20%2F%2012%20%2F%202022-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/github/languages/top/jotavare/get_next_line?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/github/last-commit/jotavare/get_next_line?color=%2312bab9&style=flat-square"/>
	<a href='https://www.linkedin.com/in/jotavare' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-blue?style=flat-square'/></a>
	<a href='https://profile.intra.42.fr/users/jotavare' target="_blank"><img alt='42' src='https://img.shields.io/badge/Porto-100000?style=flat-square&logo=42&logoColor=white&labelColor=000000&color=000000'/></a>
</p>

<p align="center">
	<a href="#about">About</a> •
	<a href="#how-to-use">How to use</a> •
	<a href="#mandatory">Mandatory</a> •
	<a href="#bonus">Bonus</a> •
	<a href="#norminette">Norminette</a> •
	<a href="#contributing">Contributing</a> •
	<a href="#license">License</a>
</p>

## ABOUT
This project taught me how to read from a file descriptor and use static variables. This function retrieves a single line from a specified file descriptor. When called in a loop, get_next_line returns all the contents of the file, one line at a time until the end of the file is reached. Additionally, this function can be compiled with any buffer size specified.

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
- [x] All adicional functions should be included in `get_next_line_utils.c` file, libft is not allowed.
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

## CONTRIBUTING

If you find any issues or have suggestions for improvements, feel free to fork the repository and open an issue or submit a pull request.

## LICENSE

This project is available under the MIT License. For further details, please refer to the [LICENSE](https://github.com/jotavare/get_next_line/blob/master/LICENSE) file.
