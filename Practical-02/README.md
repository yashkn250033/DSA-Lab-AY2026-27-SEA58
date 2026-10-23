1. Practical Title
Student Database Management System Using an Array of Structures in C

2. Problem Statement
Develop a student result management system using an array of structures. Each student record contains roll number, name, program, course, subject marks, total marks, and average marks. The system supports displaying, searching, sorting, modifying, and adding student records.

3. Objective
   - To implement a student database using an array of structures.
   - To perform insertion, searching, sorting, and modification of records.
   - To calculate total and average marks.
   - To understand structure handling and menu-driven programming in C.
4. Algorithm or Approach
   1. Start the program.
   2. Define a structure to store student details.
   3. Accept the number of students and their information.
   4. Calculate the total and average marks for each student.
   5. Display all student records when requested.
   6.  Search for a student using the roll number.
   7.  Sort student records by total marks in descending order.
   8.  Modify an existing record or append a new student record.
   9.  Repeat operations using a menu until the user chooses to exit.
   10. Stop the program. 

5.  Data Structure or Concept Used
    - Structure: Stores different attributes of a student in one record.
    - Array of structures: Stores multiple student records.
    - Linear search: Finds a student using the roll number.
    - Bubble sort: Sorts students by total marks.
    - Functions: Separate the display, search, sort, modify, and append operations.
    - Menu-driven programming: Allows users to select database operations.
  
6. Test Cases
Test case	        Operation	                       Expected result
    1  	            Add student	                  Student record is added
    2	         Display records	                 All student details are displayed
    3	        Search roll number 2	              Matching record is displayed
    4	     Search nonexistent roll number	        Student not found
    5	         Sort by total marks	             Records appear in descending order
    6	       Modify student marks	            Total and average are recalculated
    7	       Append a student	                New record is added to the database

7. Sample Input and Output
Sample input

Enter number of students: 2

Roll No: 1
Name: Amit
Program: BTech
Course: ENTC
Enter marks in 3 subjects: 80 75 85

Roll No: 2
Name: Rahul
Program: BTech
Course: ENTC
Enter marks in 3 subjects: 90 85 95

Sample output

STUDENT DATABASE

Roll No: 1
Name: Amit
Program: BTech
Course: ENTC
Total Marks: 240
Average: 80.00

Roll No: 2
Name: Rahul
Program: BTech
Course: ENTC
Total Marks: 270
Average: 90.00

Search Roll No: 2
Student Found: Rahul
Total Marks: 270
Average: 90.00

Sorted by Total Marks:
Rahul - 270
Amit  - 240

8. Time Complexity
    Let n be the number of students and m be the number of subjects.
   - Display records: O
   - Search record: O(n)
   - Sort records using bubble sort: O(n^2)
   - Modify record: O(n), including the search
   - Append record: O(1) when array capacity is available
   - Calculate total and average: O(m) per student
  
9. Space Complexity
The space complexity is O(nm) for storing n student records with m subject marks, assuming a fixed number of additional fields per student.

1.  Conclusion
The student database management system demonstrates how an array of structures stores and manages student information in C. It performs searching, sorting, modification, and insertion while calculating total and average marks, providing a basic foundation for database management.
