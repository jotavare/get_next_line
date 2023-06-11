<p align="center">
  <img src="https://github.com/jotavare/jotavare/blob/main/42/banner/new/42_get_next_line_banner_new.png">
</p>

<p align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/evaluated-18%20%2F%2012%20%2F%202022-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/github/languages/top/jotavare/get_next_line?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/github/last-commit/jotavare/get_next_line?color=%2312bab9&style=flat-square"/>
	<a href='https://www.linkedin.com/in/joaoptoliveira' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=0A66C2&color=0A66C2'/></a>
	<a href='https://profile.intra.42.fr/users/jotavare' target="_blank"><img alt='42' src='https://img.shields.io/badge/Porto-100000?style=flat-square&logo=42&logoColor=white&labelColor=000000&color=000000'/></a>
</p>

<p align="center">
	<a href="#about">About</a> •
	<a href="#how-to-use">How to use</a> •
	<a href="#mandatory">Mandatory</a> •
	<a href="#bonus">Bonus</a> •
	<a href="#disclaimer">Disclaimer</a> •
	<a href="#license">License</a>
</p>

## ABOUT
The "get_next_line" project in school 42 teaches us how to read from a file descriptor and use static variables. This function retrieves a single line from a specified file descriptor. When called in a loop, "get_next_line" returns all the contents of the file, one line at a time until the end of the file is reached. Additionally, this function can be compiled with any buffer size specified.

<a href="https://github.com/jotavare/get_next_line/blob/master/subject/en_subject_get_next_line.pdf">Click here</a> for the subject of this project.

## HOW TO USE
#### COMPILE

#### 1º - Clone the repository
```
git clone git@github.com:jotavare/get_next_line.git
```

#### 2º - Enter the project folder
```
cd get_next_line/get_next_line
```

#### 3º - Compile the mandatory or bonus files
```
(Mandatory) cc main.c get_next_line.c get_next_line_utils.c
(Bonus) cc main.c get_next_line_bonus.c get_next_line_utils_bonus.c
```

#### 4º - BUFFER_SIZE can be specified at compilation to override the default BUFFER_SIZE
```
(Mandatory) cc -D BUFFER_SIZE=[SIZE] main.c get_next_line.c get_next_line_utils.c
(Bonus) cc -D BUFFER_SIZE=[SIZE] main.c get_next_line_bonus.c get_next_line_utils_bonus.c
```

#### 5º - Execution with one or multiple file descriptors
```
./a.out [text.txt]
./a.out [text1.txt] [text2.txt]
```

#### MAKEFILE RULES

`make` - Compile libft mandatory functions.

``make bonus`` - Compile libft bonus functions.

``make all`` - Compile mandatory + bonus functions.

``make clean`` - Delete all .o (object files) files.

``make fclean`` - Delete all .o (object files) and .a (executable) files.

``make re`` - use rules `fclean` + `all`.

## MANDATORY
* Contains functions specifically developed for this project. ``get_next_line.c``
* Contains functions from libft with a few changes to fit in the project. ``get_next_line_utils.c``
* Contains the headers of all .c files. ``get_next_line.h``

## BONUS
* Contains functions specifically developed for this project. ``get_next_line_bonus.c``		
* Contains functions from libft with a few changes to fit in the project. ``get_next_line_utils_bonus.c``	
* Contains the headers of all .c files. ``get_next_line_bonus.h``		

## DISCLAIMER
At 42 School, it is expected that almost every project is written in accordance with the Norm, which is the coding standard of the school.

```
- No for, do while, switch, case or goto are allowed
- No more than 25 lines per function and 5 functions per file
- No assigns and declarations in the same line (unless static)
- No more than 5 variables in 1 function
- ...
```

<a href="https://github.com/jotavare/jotavare/blob/main/42/pdf/en_norm.pdf">Click here</a> for more information on 42 norms.

## LICENSE
<p>
This work is published under the terms of <a href="https://github.com/jotavare/jotavare/blob/main/LICENSE">42 Unlicense</a>.
</p>
