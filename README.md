# -mathematical-manipulation
C++ PROJECT 01

Assignment Overview:
    This project focuses on some mathematical manipulation. It is worth 5 points (0.5% of your
overall grade). It is due Monday, January 21st before midnight.
The Problem You should all have learned something about complex numbers in your travels. A complex
number actually consists of two parts: a real part and an imaginary part. The imaginary part is
multiplied by the special value i, the √-1. A complex number is usually written in the form 1 + 2i
, a sum with the real part first, the imaginary part second followed by i.
We are just going to do some basic math. You will read in two complex numbers and provide the
sum, difference, product and quotient of those two values.

Some Background:
    You forgot about complex numbers, didn't you. Well, Wikipedia is here to help. There's far more
information here than you need, but the two most important sections are
https://en.wikipedia.org/wiki/Complex_number#Addition_and_subtraction and
https://en.wikipedia.org/wiki/Complex_number#Multiplication_and_division . You can get the
formulas from there

Program Specifications:
    Your program will do the following:
1. Take as input four floating point values (in this order, as indicated):
a. a real value and an imaginary value for the first complex number
b. a real value and an imaginary value for the second complex number
2. Print the following four results: the sum, the difference, the product and the quotient of
the 2 complex numbers. You will use exactly the following format:
a. Each result on a single line (thus 4 lines printed)
b. The precision is to two decimal point of accuracy (see note 1c below)
c. output looks like the following exactly: 1 + 2i that is, a float, a space, a plus
sign, a space, a float followed directly by the letter i

Assignment Notes:
    1. We might as well try to make the output somewhat readable. You can look this up in the text
or on the internet, but you can use the following modifiers that affect how numbers print.
a. cout << fixed 
Elements will be printed as floating point numbers (ex 123.456). Use this for the
project.
    b. cout << scientific
Elements will be printed in scientific notation (ex 1.23456 x 102
). This is an
alternative but not what we want for this project.
    c. cout << setprecision(2)
This is the precision of the operation. If there are more than two decimals after
decimal point, this will round the output to two decimals. In combination with fixed,
it will always print two decimals after the point
#include<iomanip>
Provide the include and use setprecision(2) for this project.
    • Thus cout << setprecision(2) << fixed << 123.4567 <<
endl; will print 123.46
    2. The following statement will read two variables from the same, space separated line. It is an
example of chaining input:
…
double d1, d2;
cin >> d1 >> d2;
…
You can also do it on separate lines. Your choice
…
cin >> d1;
cin >> d2;
…
    3. There are 4 tests provided. The first is a file-exists test to make sure you got the directory
issue correct, the remaining three are input-output tests.
    4. You do not have to check for bad input values. In general, we will explicitly indicate the
errors we are looking for, but for now we are not checking for input errors.
    5. If you read off of a single line of 4 space separated floating point numbers for the input, you
can do a handy trick off the command line. You can redirect a file (containing that single line
of space separated input) to your main program. With that file in the same directory as the
compiled a.out, you can do:
./a.out < fileOfInput.txt
This will automatically feed the input to the cin statement and produce the output. Makes it
easier to test things, saves you from typing 4 numbers a lot.
    6. You can check your calculations on http://www.wolframalpha.com/ or using python or some
other approach that you are comfortable with. If wolframalpha, make sure you enclose the
complex number in parens as in: (1 + 2i) + (1 + 2i)
    7. You can always look at the test cases on Mimir to see the answer and the required format
