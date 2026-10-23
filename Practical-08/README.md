# Practical: Binary Search Tree Operations in C

## 1. Practical Title

Implementation of Binary Search Tree (BST) Operations Using Recursion in C.

## 2. Problem Statement

Develop an online directory system using a Binary Search Tree (BST) to store names in sorted order and support efficient searching. Implement recursive inorder, preorder, and postorder traversals, along with searching for a specific name in the directory.

## 3. Objective

- To create a Binary Search Tree using names.
- To implement recursive tree traversals.
- To search for a specific name in the BST.
- To understand the properties and operations of a BST.

## 4. Algorithm or Approach

1. Start the program.
2. Create a BST node containing a name and pointers to its left and right children.
3. Insert each name into the BST according to alphabetical order.
4. For names alphabetically smaller than the current node, move to the left subtree.
5. For names alphabetically greater than the current node, move to the right subtree.
6. Implement recursive traversals:
   - **Inorder:** Left, Root, Right.
   - **Preorder:** Root, Left, Right.
   - **Postorder:** Left, Right, Root.
7. Search for a name by comparing it with the current node and moving left or right.
8. Display the results and stop the program.

## 5. Data Structure or Concept Used

- **Binary Search Tree:** Stores names according to alphabetical order.
- **Structure:** Represents each tree node.
- **Dynamic Memory Allocation:** Uses `malloc()` to create nodes.
- **Recursion:** Implements tree insertion, searching, and traversal.
- **String Comparison:** Uses `strcmp()` to compare names.

## 6. Test Cases

| Test Case | Operation                | Expected Result                          |
| --------- | ------------------------ | ---------------------------------------- |
| 1         | Insert Amit, Rahul, Neha | Names stored in BST                      |
| 2         | Inorder traversal        | Amit, Neha, Rahul                        |
| 3         | Preorder traversal       | Root followed by left and right subtrees |
| 4         | Postorder traversal      | Left and right subtrees followed by root |
| 5         | Search Neha              | Name found                               |
| 6         | Search Zoya              | Name not found                           |
| 7         | Search an empty tree     | Name not found                           |

## 7. Sample Input and Output

**Sample Input**

```text
Enter number of names: 3
Enter names:
Rahul
Amit
Neha

Enter name to search: Neha
```

**Sample Output**

```text
Inorder Traversal: Amit Neha Rahul
Preorder Traversal: Rahul Amit Neha
Postorder Traversal: Amit Neha Rahul
Neha found in the directory.
```

## 8. Time Complexity

Let `n` be the number of nodes and `h` be the height of the BST.

- Insertion: O(h)
- Searching: O(h)
- Inorder traversal: O(n)
- Preorder traversal: O(n)
- Postorder traversal: O(n)

For a balanced BST, insertion and searching take O(log n) time on average. In the worst case, an unbalanced BST takes O(n) time for insertion and searching.

## 9. Space Complexity

- BST storage: O(n)
- Recursive insertion and searching: O(h) auxiliary space.
- Recursive traversals: O(h) auxiliary space.

In the worst case, the tree height is O(n).

## 10. Conclusion

The program demonstrates how a Binary Search Tree stores names in an ordered structure and supports searching. Recursive inorder, preorder, and postorder traversals demonstrate different ways of visiting tree nodes. The efficiency of searching depends on the height and balance of the tree.

