__compile command (exact flags)__
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

**run instructions**
Use ./calculator to start the program. Then follow the menu options one of the five options. If you have chosen an option between 1-5, then enter your first number followed by your second number to perform the calculation. To quit the program, enter 0 when you are given the menu options again.

**supported operations**
The program supports adding two numbers together, subtracting two numbers together, multiplying two numbers together and dividing two numbers together, as long as b is not equal to 0.

**numeric behaviour (integer vs decimal)**
Within my program, I use integers for the menu operations, as each menu option is only a whole number, meaning that I won't have to deal with decimals. For my a, b, and result values, I use decimals as a way to be flexible when doing division operations to show a more accurate result. With this, I only round it up to one decimal place, as it allows for an accurate but also more readable result.

**known limitations (if any)**
Some known limitations within my program include that inputting letters and special characters will result in some error messages and will just loop back to the start of the program. My program can also only do calculations of 2 values, meaning I can't do something such as 2+7+9. My program can also only do one operation at a time, meaning that I can't do something such as 4+9 * 7. 
