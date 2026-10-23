# Practical: Searching Techniques in C

## 1. Practical Title

Implementation of Sequential Search and Binary Search in C.

## 2. Problem Statement

Develop a contact manager program in C that searches for a specific contact name using sequential search and binary search. Sequential search checks names one by one, whereas binary search searches a sorted list by repeatedly dividing it into halves.

## 3. Objective

- To implement sequential and binary search in C.
- To understand the working of both searching techniques.
- To compare their time complexities.
- To locate a specific contact name in a list.

## 4. Algorithm or Approach

### A. Sequential Search

1. Start from the first contact.
2. Compare each contact name with the target name.
3. If a match is found, display its position.
4. If no match is found, display "Contact not found."

### B. Binary Search

1. Sort the contact names alphabetically.
2. Initialize `low = 0` and `high = n - 1`.
3. Calculate the middle index.
4. Compare the middle name with the target name.
5. If the target comes before the middle name, search the left half; otherwise, search the right half.
6. Repeat until the name is found or the search interval becomes empty.

## 5. Data Structure or Concept Used

- **Array:** Stores contact names.
- **Sequential Search:** Checks each element one by one.
- **Binary Search:** Divides a sorted array into halves.
- **Bubble Sort:** Arranges names alphabetically.
- **String Comparison:** The `strcmp()` function compares two strings.

## 6. Test Cases

| Test Case | Search Name |          Expected Result |

| 1 |           Amit |              Contact found |
| 2 |           Priya |             Contact found |
| 3 |           Rahul |             Contact found |
| 4 |           Zoya |              Contact not found |
| 5 |           Empty contact list| No contacts available |

## 7. Sample Input and Output

**Sample Input**

Enter number of contacts: 5
Enter contact names:
Amit
Priya
Rahul
Neha
Karan
Enter name to search: Rahul


**Sample Output**

Sequential Search:
Contact Rahul found at position 3.

Binary Search:
Contact Rahul found at position 4 in the sorted list.
```

## 8. Time Complexity

Let `n` be the number of contacts.

- Sequential Search: O(n)
- Binary Search: O(log n)
- Bubble Sort: O(n²)

## 9. Space Complexity

- Sequential Search: O(1) auxiliary space.
- Binary Search: O(1) auxiliary space.
- Contact Array: O(n) storage, excluding fixed maximum capacity.

## 10. Conclusion

The program implements sequential and binary searching techniques to locate contact names. Sequential search works on an unsorted list, while binary search requires sorted data and generally performs fewer comparisons for large lists. Thus, the program demonstrates the working and efficiency of both searching techniques.
