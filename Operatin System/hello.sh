#! /bin/bash

clear
: '
    A Heredoc is a type of redirection that allows for passing of
    multiple lines of input to a command:
    
    [COMMAND] <<[-] "DELIMITER"
        HERE-DOCUMENT
    DELIMITER

    * If the delimiting identifier is unquoted, the shell will substitute all   variables, commands and special characters before passing the here-document lines to the command.

    * Appending a minus sign to the redirection operator <<-, will cause all leading tab characters to be ignored. This allows you to use indentation when writing here-documents in shell scripts. Leading whitespace characters are not allowed, only tab.

    * The here-document block can contain strings, variables, commands and any other type of input.

    * The last line ends with the delimiting identifier. White space in front of the delimiter is not allowed.
'

# cat <<- heredocDelimiter
#     Enter your text here:
# heredocDelimiter
# # echo 'Hello World' > file.txt   #output redirection using streams
# cat >> './file.txt'

# : '
# this is a multiline comment.
# '


# Conditional Statements

# count=9

# if [ $count -eq 10 ] # -ne, -gt, -lt
# then
#     echo 'The condition is true'
# else 
#     echo 'The condition is false'
# fi

# To use the normal operators instead of -eq, etc.
# if [ count > 10 ]
# then 
#     echo 'Condition true'
# elif [ count == 10 ]
# then
#     echo 'Condition false'
# else 
#     echo 'count < 10'
# fi

# # and operator (&& or -a)
# age=29

# if [ age > 18 && age < 40 ]
# then 
#     echo 'Age is correct'
# else 
# echo 'Age is incorrect'
# fi

# # or operator (|| or -o)
# age2=10
# if [ age2 < 18 || age2 > 40 ]
# then 
#     echo 'Age is correct'
# else 
# echo 'Age is incorrect'
# fi

# case statement:
# single quotes don't let expressions and variables expand.
# echo -e 'Enter a car brand: '
: '
    * -r :
        Use "raw input". Specifically, this option causes read to interpret backslashes literally, rather than interpreting them as escape characters.

    * -e :
        Get a line of input until delimiter is reached.
    
    * -i "some text" : 
        When used in conjunction with -e (and only if -s is not used), text is inserted as the initial text of the input line. The user is permitted to edit text on the input line.

    * -n nchars :
        Stop reading after an integer number nchars characters are read, if the line delimiter has not been reached.

    * -N nchars :
        Ignore the line delimiter. Stop reading only after nchars characters are read, EOF is reached, or read times out.

    * -d delim :
        Set the delimiter character to delim. This character signals the end of the line. If -d is not used, the default line delimiter is a newline.

    * -a array :
        Store the words in an indexed array named array. Numbering of array elements starts at zero.

    * -p prompt :
        Print the string prompt, without a newline, before beginning to read.

    * -s :
       Do not echo keystrokes when read is taking input from the terminal.
    
    * -t timeout:
        Time out, and return failure, if a complete line of input is not read within timeout seconds. If the timeout value is zero, read will not read any data, but returns success if input was available to read. If timeout is not specified, the value of the shell variable TMOUT is used instead, if it exists. The value of timeout are fractional numbers, e.g., 3.5.

    * -u fd :
        Read from the file descriptor fd instead of standard input. The file descriptor should be a small integer.

    Exit status
        The exit status of read is zero unless EOF is encountered, the timeout is exceeded, an error occurs assigning a value to name, or the file descriptor provided to -u is invalid.

        If a timeout is exceeded, the exit status is greater than 128.
'
# read -rei "mercedes"  car
# echo "$car"
# case $car in 

#     'Mercedes')
#         echo 'Nice car'
#     ;;

#     'bmw')
#         echo 'noice'
#     ;;

#     'supra')
#         echo 'noiiiceeee'
#     ;;

#     *)
#         echo 'unknown'
#     ;;
# esac


# while loop

# number=1

# while [ number <= 10 ] 
# do 
#     echo "$number"
#     number=$((number+1))
# done

# # until loop

# until [ number < 1]
# do 
#     echo "$number"
#     number=$((number-1))
# done

# for loop

# for i in 0 1 2 3 4 5
# for i in {0..20..2} # {start..end..increment} 
# do 
#     echo "$i"
# done

# for (( i=0; i <= 20; i+=2 )) #i++, ++i, --i, i--
# do  
#     echo "$i"

#     if (( i > 7 ))
#     then
#         break # continue statement is also available in bash.
#     fi
    
# done

# echo "$0 $1 $2 $3"  # scriptname arg1, arg2 arg3,....,argn

# args=("$@") # all the args

# # echo "${args[0]} ${args[1]} ${args[2]} ${args[3]}"
# echo "${args[@]}" # print the entire array.

# echo "$@" # all the args
# echo "$#" # number of args to script

# reading files using stdin.
# while read -r line
# do 
#     echo "$line"
# done < "${1:-/dev/stdin}"

# ls -al 1>file1.txt 2>file2.txt # 1-> stdout 2-> stderr
# ls -al >file1.txt # stdout redirected but stderr is not
# ls -al >file1.txt 2>&1 # stdout and stderr to file1.
# ls -al >&file1.txt # stdout and stderr to file1.

# MESSAGE="Hello Abhishek"
# export MESSAGE
# ./second-script.sh

## String processing
# read -rp "Enter first string: " st1
# read -rp "Enter second string: " st2


# Tests like -eq to check numeric equality or \< for string comparison only work are actually parameters to the test command, and only work as tests in that context. [ is an alias for test, so you'll frequently see them written as [ 1 -eq 2 ].

# ( .. ) is completely unrelated, and is a subshell mostly used to scope shell modifications. They should not be used in if or while statements in shell scripts.

# If you wanted to test a condition, rewrite the ( .. ) to [ .. ]

# if [ "$st1" == "$st2" ]
# then
#     echo "Strings match"
# else
#     echo "Strings don't match"
# fi 

# if [ "$st1" \< "$st2" ] # st1 is smaller than st2
# then
#     echo "$st2 is greater than $st1"
# elif [ "$st1" \> "$st2" ]
# then
#     echo "$st1 is greater than $st2."
# else
#     echo "Both the strings are equal."
# fi 


# concatenation
a=$1
b=$2

# c=$a$" "$b

# echo "$c"

echo "${a^}"
echo "${b^^}"