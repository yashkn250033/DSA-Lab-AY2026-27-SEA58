1. Practical Title
Write a C program to display different patterns using numbers, asterisks, and alphabets.

2. Problem Statement
Write a C program to print the following patterns:
   1. Right-angle triangle using numbers.
   2. Diamond shape using numbers.
   3. Pyramid using asterisks.
   4. Pyramid using alphabets.

3. Objective
   - To understand nested loops in C.
   - To learn pattern printing using for loops.
   - To understand the use of numbers, characters, spaces, and asterisks in patterns.

4. Algorithm or Approach
   1. Start the program.
   2. Declare loop variables and the number of rows.
   3. Use nested loops to print each pattern.
   4. For the right-angle triangle, print increasing numbers in each row.
   5. For the diamond pattern, print increasing and then decreasing numbers.
   6. For the asterisk pyramid, print spaces followed by asterisks.
   7.  For the alphabet pyramid, print alphabets in increasing and then decreasing order within each row.
   8.  Stop the program.
  
5.  Data Structure or Concept Used
    - Nested loops: Used to control rows and columns.
    - for loop: Repeats statements for pattern generation.
    - Conditional logic: Controls increasing and decreasing patterns.
    - Characters and integers: Used to print alphabets and numbers.

6. Test Cases
Test case	    Input	            Expected result
    1	        Rows = 4	    Right-angle triangle with 4 rows
    2	        Rows = 4	    Diamond pattern with 7 rows
    3	        Rows = 4	    Asterisk pyramid with 4 rows
    4	        Rows = 4	    Alphabet pyramid with 4 rows

7. Sample Input and Output
Sample input
Enter number of rows: 4

Sample output

A. Right-angle triangle using numbers
1
12
123
1234

B. Diamond shape using numbers
   1
  2 2
 3 3 3
4 4 4 4
 3 3 3
  2 2
   1

C. Pyramid using asterisks
   *
  * *
 * * *
* * * *

8. Time Complexity
The time complexity of each pattern is O(n^2), where n is the number of rows, because nested loops are used to print the patterns.

9. Space Complexity
The auxiliary space complexity is O(1), as the program uses only a fixed number of variables.

10. Conclusion
The program demonstrates how nested loops in C generate different patterns using numbers, asterisks, and alphabets. It improves understanding of loop control, spacing, and character manipulation.
