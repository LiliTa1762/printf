# printf
This project is meant to recreate the printf function with the knowledge we've gotten so far during the whole process of learning C programming language in __Holberton School__.
 ## Syntax and functionality
 - The syntax for our function is _printf("%type_of_variable, variable); where %type of variable stands for the format specificator. 
 - As printf means "print formatted", it's mostly used to print text (characters or strings) and numbers (integers or decimals).
 
 ## Function prototype
int _printf(const char *format, ...)

We have different kinds of variables available to be used in this function. 

## Examples

## To print a single character
## Char: %c
- Input: _printf("The %c is the first letter in the alphabet\n", 'a');
- Output: The a is the first letter in the alphabet


## To print a string
## String: %s
- Input: _printf("My name is not %s\n", "Betty");
- Output: My name is not Betty


## To print an integer
## Integer: %i
- Input: _printf("My birthday is on January %i\n", 13);
- Output: My birthday is on January 13


## To print a decimal
## Decimal: %d
- Input: _printf("The value of pi is %d\n", 3.1416);
- Output: The value of pi is 3.1416


## Authors
- Silena Restrepo (https://twitter.com/silenarestrepo_) 
- Lilibeth Tabares (https://twitter.com/LilibethTabares)
