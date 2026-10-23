

## 1. Practical Title

Write a C program to convert a decimal number into its binary equivalent using a stack.

## 2. Problem Statement

Write a C program to convert a given decimal number into its binary representation using a stack implemented with an array. The program stores the remainders obtained by repeatedly dividing the decimal number by 2 and then pops them in reverse order to display the binary number.

## 3. Objective

- To understand the concept of a stack.
- To implement stack operations using an array.
- To convert a decimal number into binary.
- To understand the LIFO (Last In, First Out) principle.

## 4. Algorithm or Approach

1. Start the program.
2. Read a decimal number from the user.
3. If the number is zero, print `0`.
4. Divide the number by 2 and push the remainder onto the stack.
5. Repeat until the quotient becomes zero.
6. Pop and print the stack elements to obtain the binary representation.
7. Stop the program.

## 5. Data Structure or Concept Used

- **Stack:** Stores binary digits during conversion.
- **Array:** Implements the stack.
- **Push:** Inserts an element onto the stack.
- **Pop:** Removes the top element from the stack.
- **LIFO:** The last inserted element is removed first.

## 6. Test Cases

| Test Case | Decimal Input | Expected Binary Output |
| --------- | ------------: | ---------------------- |
| 1         |             0 | 0                      |
| 2         |             5 | 101                    |
| 3         |            10 | 1010                   |
| 4         |            15 | 1111                   |
| 5         |            25 | 11001                  |

## 7. Sample Input and Output

**Sample Input**


Enter a decimal number: 10


**Sample Output**


Binary equivalent: 1010


## 8. Time Complexity

The time complexity is **O(log n)** for a positive decimal number `n`, because the number is repeatedly divided by 2 until it becomes zero.

For zero, the conversion takes constant time, O(1).

## 9. Space Complexity

The space complexity is **O(log n)** because the stack stores the binary digits of the decimal number.

## 10. Conclusion

The program converts a decimal number into its binary equivalent using a stack implemented with an array. It demonstrates stack operations and the LIFO principle, which helps produce the binary digits in the correct order.

