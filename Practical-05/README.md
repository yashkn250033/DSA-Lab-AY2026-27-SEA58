

## 1. Practical Title

Implement a stack using an array with push, pop, and display operations in C.

## 2. Problem Statement

Simulate a parcel-handling system at a post office using a stack implemented with an array. The system supports inserting parcels, removing the most recently added parcel, and displaying all parcels. The stack follows the LIFO (Last In, First Out) principle.

## 3. Objective

- To implement a stack using an array.
- To perform push, pop, and display operations.
- To understand the LIFO principle.
- To handle stack overflow and underflow conditions.

## 4. Algorithm or Approach

1. Start the program.
2. Initialize the stack and set `top = -1`.
3. Display a menu containing push, pop, display, and exit operations.
4. For push, check whether the stack is full. If space is available, insert the parcel and increment `top`.
5. For pop, check whether the stack is empty. If it is not empty, remove the top parcel and decrement `top`.
6. For display, print the parcels from the top to the bottom.
7. Repeat the operations until the user chooses to exit.
8. Stop the program.

## 5. Data Structure or Concept Used

- **Stack:** Stores parcels in a specific order.
- **Array:** Provides static storage for parcels.
- **Top:** Tracks the index of the topmost parcel.
- **Push:** Inserts a parcel into the stack.
- **Pop:** Removes the topmost parcel.
- **LIFO:** The last parcel inserted is the first parcel removed.

## 6. Test Cases

| Test Case | Operation              | Expected Result             |
| --------- | ---------------------- | --------------------------- |
| 1         | Push parcel 101        | Parcel inserted             |
| 2         | Push parcel 102        | Parcel inserted             |
| 3         | Pop                    | Parcel 102 removed          |
| 4         | Display                | Remaining parcels displayed |
| 5         | Pop from empty stack   | Stack underflow message     |
| 6         | Push into a full stack | Stack overflow message      |

## 7. Sample Input and Output

**Sample Input**


1
101
1
102
3
2
3
4
```

**Sample Output**

--- PARCEL STACK MENU ---
1. Push Parcel
2. Pop Parcel
3. Display Parcels
4. Exit

Enter choice: 1
Enter parcel ID: 101
Parcel inserted successfully.

Enter choice: 1
Enter parcel ID: 102
Parcel inserted successfully.

Enter choice: 3
Parcels in stack (top to bottom):
102
101

Enter choice: 2
Removed parcel ID: 102

Enter choice: 3
Parcels in stack (top to bottom):
101

Enter choice: 4
Exiting program.
```

## 8. Time Complexity

Let `n` be the number of parcels.

- Push: O(1)
- Pop: O(1)
- Display: O(n)

## 9. Space Complexity

The space complexity is O(n), where `n` is the maximum stack capacity, because the array reserves space for a fixed number of parcels.

## 10. Conclusion

The program implements a stack using an array to simulate a parcel-handling system. It performs push, pop, and display operations while handling overflow and underflow conditions. It demonstrates the LIFO principle of stack data structures.

