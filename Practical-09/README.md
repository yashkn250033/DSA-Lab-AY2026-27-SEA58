# Practical: Graph Traversal Using BFS and DFS in C

## 1. Practical Title

Implementation of Breadth-First Search (BFS) and Depth-First Search (DFS) Using an Adjacency Matrix in C.

## 2. Problem Statement

Develop a campus navigation system that represents buildings as vertices and routes between buildings as edges. Create a graph using an adjacency matrix and implement Breadth-First Search (BFS) and Depth-First Search (DFS) to explore the connectivity between buildings.

## 3. Objective

- To represent a graph using an adjacency matrix.
- To implement BFS and DFS traversal techniques.
- To understand queue-based and recursive graph traversal.
- To explore the connectivity between campus buildings.

## 4. Algorithm or Approach

1. Start the program.
2. Read the number of buildings and the connections between them.
3. Store the connections in an adjacency matrix.
4. Select a starting building.
5. **BFS:** Use a queue to visit adjacent buildings level by level.
6. **DFS:** Use recursion to visit an unvisited adjacent building as deeply as possible before backtracking.
7. Mark each visited building to avoid visiting it repeatedly.
8. Display the traversal order for BFS and DFS.
9. Stop the program.

## 5. Data Structure or Concept Used

- **Graph:** Represents buildings and routes.
- **Adjacency Matrix:** Stores connections between buildings using a two-dimensional array.
- **Queue:** Supports BFS traversal in FIFO order.
- **Visited Array:** Tracks buildings that have already been visited.
- **Recursion:** Implements DFS traversal.

## 6. Test Cases

| Test Case | Input / Condition       | Expected Result                                                 |
| --------- | ----------------------- | --------------------------------------------------------------- |
| 1         | Connected graph         | BFS and DFS visit all reachable buildings                       |
| 2         | Disconnected graph      | Only buildings reachable from the starting building are visited |
| 3         | Single building         | Both traversals visit the starting building                     |
| 4         | No connections          | Both traversals visit only the starting building                |
| 5         | Invalid starting vertex | Program displays an error message                               |

## 7. Sample Input and Output

**Sample Input**

```text
Enter number of buildings: 4
Enter adjacency matrix:
0 1 1 0
1 0 0 1
1 0 0 1
0 1 1 0

Enter starting building (0 to 3): 0
```

**Sample Output**

```text
BFS Traversal: 0 1 2 3
DFS Traversal: 0 1 3 2
```

*Note: Buildings are represented by vertex numbers from 0 to 3. Traversal order depends on the order in which adjacent vertices are checked.*

## 8. Time Complexity

Let `V` be the number of vertices (buildings).

- Building the adjacency matrix: O(V²)
- BFS using an adjacency matrix: O(V²)
- DFS using an adjacency matrix: O(V²)

Both traversals scan the adjacency matrix row for each visited vertex.

## 9. Space Complexity

The space complexity is O(V²) because the adjacency matrix requires V × V storage. The queue and visited array require O(V) additional space.

## 10. Conclusion

The program demonstrates graph representation using an adjacency matrix and implements BFS and DFS to explore campus building connectivity. BFS visits adjacent vertices level by level using a queue, whereas DFS explores paths deeply using recursion. Both techniques are useful for graph traversal and route exploration.

