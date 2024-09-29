# Month-Vs-days
Algorithm:
Step 1: Initialize Variables

Declare two integer variables, a and b, to store the user's input and other temporary values, respectively.
Step 2: Prompt User for Input

Use printf to prompt the user to enter the number of the month.
Use scanf to read the user's input and store it in variable a.
Step 3: Validate User Input

Check if the user's input a is within the range of 1 to 12 (inclusive) using an if statement.
If the input is valid, print a message indicating that the program will tell the number of days in the chosen month.
If the input is invalid, print an error message indicating that the month number is invalid.
Step 4: Determine Number of Days in the Month

Use a switch statement to determine the number of days in the month based on the user's input a.
For each case (1 to 11), print the corresponding number of days in the month.
For the default case (12), print the number of days in December.
Step 5: Exit

The program terminates after executing the switch statement.
