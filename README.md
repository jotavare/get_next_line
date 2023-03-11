<p align="center">
  <img src="https://github.com/jotavare/jotavare/blob/main/42/banner/42_banner_get_next_line.png">
</p>

<p align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/evaluated-18%20%2F%2012%20%2F%202022-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/github/languages/top/jotavare/get_next_line?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/github/last-commit/jotavare/get_next_line?color=%2312bab9&style=flat-square"/>
</p>

<p align="center">
	<a href="#about">About</a> •
	<a href="#how-to-use">How to use</a> •
	<a href="#mandatory">Mandatory</a> •
	<a href="#bonus">Bonus</a> •
	<a href="#disclaimer">Disclaimer</a> •
	<a href="#testers">Testers</a> •
	<a href="#license">License</a>
</p>

## ABOUT
The "get_next_line" project in school 42 teaches us how to read from a file descriptor and use static variables. This function retrieves a single line from a specified file descriptor. When called in a loop, "get_next_line" returns all the contents of the file, one line at a time until the end of the file is reached. Additionally, this function can be compiled with any buffer size specified.

Click here for the subject of this project.

## HOW TO USE
#### COMPILE

#### 1º - Clone the repository
```bash
git clone git@github.com:jotavare/get_next_line.git
```

#### 2º - Enter the project folder
```bash
cd get_next_line\get_next_line
```

#### 3º - Compile the mandatory or bonus files
```bash
gcc main.c get_next_line.c get_next_line_utils.c ``Mandatory``
gcc main.c get_next_line_bonus.c get_next_line_utils_bonus.c ``Bonus``
```

#### 4º - BUFFER_SIZE can be specified at compilation to override the default BUFFER_SIZE
```bash
gcc -D BUFFER_SIZE=42 main.c get_next_line.c get_next_line_utils.c ``Mandatory``
gcc -D BUFFER_SIZE=42 main.c get_next_line_bonus.c get_next_line_utils_bonus.c ``Bonus`
```

#### 5º - Execution
```bash
./a.out [file]
```

## MANDATORY
* ``get_next_line.c``		Contains functions specifically developed for this project
* ``get_next_line_utils.c``	Contains functions from libft with a few changes to fit in the project
* ``get_next_line.h``		Contains the headers of all .c files

## BONUS
* ``get_next_line_bonus.c``		Contains functions specifically developed for this project
* ``get_next_line_utils_bonus.c``	Contains functions from libft with a few changes to fit in the project
* ``get_next_line_bonus.h``		Contains the headers of all .c files

## DISCLAIMER
At 42 School, it is expected that almost every project is written in accordance with the Norm, which is the coding standard of the school.

```bash
- No for, do while, switch, case or goto are allowed
- No more than 25 lines per function and 5 functions per file
- No assigns and declarations in the same line (unless static)
- No more than 5 variables in 1 function
- ...
```

<a href="https://github.com/jotavare/jotavare/blob/main/42/pdf/en_norm.pdf">Click here</a> for more information on 42 norms.

## TESTERS
* [Francinette](https://github.com/xicodomingues/francinette)
* [gnlTester](https://github.com/Tripouille/gnlTester)

## LICENSE
<p>
This work is published under the terms of <a href="https://github.com/jotavare/jotavare/blob/main/LICENSE">42 Unlicense</a>.
</p>
