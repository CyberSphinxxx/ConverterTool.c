# ConverterTool.c

---------------------------------------------------------------------------------
This code defines a C program that prompts the user to choose between inches to meters `option 1` and feet to meters `option 2`.

Depending on the choice, it then takes user input for the height in inches or feet, performs the conversion, and displays the result in meters.

We include the standard input/output library `#include <stdio.h>`.

The main function is where the program execution begins.

---------------------------------------------------------------------------------
**We declare two variables:**

`input`: A double variable that stores the height to be converted.
`choice`: An int variable that stores the user's conversion choice (1 for inches to meters, 2 for feet to meters).
We display a menu for the user to choose between the two conversion options.

We use `scanf` to read the user's choice and store it in the choice variable.

Using an `if-else` statement, we check the user's choice:

---------------------------------------------------------------------------------
If the choice is `1`, the program converts `inches to meters:`

It prompts the user for their height in inches, reads the input, and calculates the conversion using the formula input  0.0254.

The result is printed in meters withtwo decimal places.

If the choice is `2`, the program converts `feet to meters` in a similar manner.

If the choice is neither 1 nor 2, it informs the user that their choice is `invalid`.

Finally, the program returns 0 to indicate successful execution.

---------------------------------------------------------------------------------
You can compile and run this program, and it will allow you to convert heights between inches and feet to meters based on your choice.
