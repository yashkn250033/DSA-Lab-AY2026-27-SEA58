# Practical: Singly Linked List Operations in C

## 1. Practical Title

Implementation of Singly Linked List Operations in C.

## 2. Problem Statement

Develop a text editor simulation using a singly linked list to store lines of text dynamically. The program supports insertion and deletion of lines at the front, end, and any specified position. It also supports displaying the list normally and in reverse order, as well as reversing the entire linked list.

## 3. Objective

- To implement a singly linked list using dynamic memory allocation.
- To perform insertion and deletion at different positions.
- To display list elements in normal and reverse order.
- To reverse the linked list by modifying its links.

## 4. Algorithm or Approach

1. Start the program and initialize the head pointer to `NULL`.
2. Create a menu for linked list operations.
3. **Insert:** Create a new node and insert it at the front, end, or specified position.
4. **Delete:** Remove a node from the front, end, or specified position.
5. **Display:** Traverse the list from head to tail and print each line.
6. **Display in reverse:** Recursively traverse to the last node and print while returning.
7. **Reverse the list:** Change the direction of the node links using three pointers: `prev`, `current`, and `next`.
8. Repeat operations until the user chooses to exit.
9. Stop the program and release allocated memory.

## 5. Data Structure or Concept Used

- **Singly Linked List:** Stores dynamically allocated nodes connected through pointers.
- **Node:** Contains a line of text and a pointer to the next node.
- **Dynamic Memory Allocation:** Uses `malloc()` to create nodes and `free()` to release them.
- **Pointer Manipulation:** Connects, removes, and reverses nodes.
- **Recursion:** Displays the list in reverse order without changing its links.

## 6. Test Cases

| Test Case | Operation                 | Expected Result                   |
| --------- | ------------------------- | --------------------------------- |
| 1         | Insert at front           | New line appears at the beginning |
| 2         | Insert at end             | New line appears at the end       |
| 3         | Insert at position 2      | New line appears at position 2    |
| 4         | Delete from front         | First line is removed             |
| 5         | Delete from end           | Last line is removed              |
| 6         | Delete from position 2    | Line at position 2 is removed     |
| 7         | Display in reverse        | Lines appear in reverse order     |
| 8         | Reverse the list          | The linked list order is reversed |
| 9         | Delete from an empty list | Appropriate message is displayed  |

## 7. Sample Input and Output

**Sample Input**

```text
1
First line
1
Second line
2
Third line
6
7
8
6
9
```

**Sample Output**

```text
Line inserted successfully.
Line inserted successfully.
Line inserted successfully.

Original List:
First line -> Second line -> Third line

List in Reverse Order:
Third line -> Second line -> First line

List reversed successfully.

Reversed List:
Third line -> Second line -> First line
```

*Note: The sample illustrates the main operations; the exact menu interaction depends on the implementation.*

## 8. Time Complexity

Let `n` be the number of nodes.

- Insert at front: O(1)
- Insert at end: O(n)
- Insert at a specified position: O(n)
- Delete from front: O(1)
- Delete from end: O(n)
- Delete at a specified position: O(n)
- Display list: O(n)
- Display in reverse using recursion: O(n)
- Reverse the list: O(n)

## 9. Space Complexity

- Linked list storage: O(n)
- Iterative list reversal: O(1) auxiliary space.
- Recursive reverse display: O(n) auxiliary space due to the recursion stack.

## 10. Conclusion

The program demonstrates singly linked list operations for dynamically managing lines of text. It performs insertion, deletion, normal display, reverse display, and list reversal. It provides practical understanding of dynamic memory allocation, pointers, recursion, and linked list manipulation.

