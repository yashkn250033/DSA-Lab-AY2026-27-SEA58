# Train Ticket Booking System Using Queue in C

## 1. Practical Title

Implementation of a Train Ticket Booking System Using Queues in C.

## 2. Problem Statement

Implement a train ticket booking system using queues. Confirm passenger bookings when seats are available; otherwise, add passengers to a waiting list. When a confirmed booking is cancelled, promote the first waiting passenger to confirmed status. The system follows the FIFO (First In, First Out) principle.

## 3. Objective

- To implement a queue using arrays in C.
- To manage confirmed and waiting-list bookings.
- To perform booking and cancellation operations.
- To understand the FIFO principle of a queue.

## 4. Algorithm or Approach

1. Start the program.
2. Initialize a queue for waiting passengers and a list for confirmed passengers.
3. Set the maximum number of confirmed seats.
4. When a passenger books a ticket:
   - If a seat is available, confirm the booking.
   - Otherwise, add the passenger to the waiting queue.
5. When a confirmed passenger cancels:
   - Remove the passenger from confirmed bookings.
   - If the waiting queue is not empty, confirm the first waiting passenger.
6. Display confirmed bookings and waiting-list passengers when requested.
7. Repeat operations until the user chooses to exit.
8. Stop the program.

## 5. Data Structure or Concept Used

- **Queue:** Stores waiting passengers in FIFO order.
- **Array:** Stores confirmed bookings and waiting-list entries.
- **Enqueue:** Adds a passenger to the waiting queue.
- **Dequeue:** Removes the first passenger from the waiting queue.
- **FIFO:** The first passenger added to the waiting list receives the next available seat first.

## 6. Test Cases

| Test Case | Operation                                 | Expected Result                            |
| --------- | ----------------------------------------- | ------------------------------------------ |
| 1         | Book a ticket when seats are available    | Booking confirmed                          |
| 2         | Book a ticket when all seats are occupied | Passenger added to waiting list            |
| 3         | Cancel a confirmed booking                | Booking cancelled                          |
| 4         | Cancel when the waiting list is non-empty | First waiting passenger gets confirmed     |
| 5         | Cancel a nonexistent booking              | Booking not found                          |
| 6         | Display bookings                          | Confirmed and waiting passengers displayed |

## 7. Sample Input and Output

**Sample Input**


1
101
1
102
1
103
3
2
101
3
5


**Sample Output**


Enter maximum seats: 2

1. Book Ticket
2. Cancel Ticket
3. Display Bookings
4. Display Waiting List
5. Exit

Enter choice: 1
Enter passenger ID: 101
Ticket confirmed.

Enter choice: 1
Enter passenger ID: 102
Ticket confirmed.

Enter choice: 1
Enter passenger ID: 103
All seats occupied. Passenger added to waiting list.

Enter choice: 3
Confirmed Passengers: 101 102

Enter choice: 2
Enter passenger ID to cancel: 101
Booking cancelled for passenger 101.
Passenger 103 promoted from waiting list to confirmed.

Enter choice: 3
Confirmed Passengers: 102 103


## 8. Time Complexity

Let `n` be the number of passengers.

- Book ticket: O(1) under normal conditions.
- Add to waiting queue: O(1).
- Cancel confirmed booking: O(n) when searching by passenger ID.
- Promote waiting passenger: O(1).
- Display bookings: O(n).

## 9. Space Complexity

The space complexity is O(n), where `n` is the total capacity reserved for confirmed and waiting-list passenger records.

## 10. Conclusion

The program demonstrates a train ticket booking system using queues and arrays. It manages confirmed bookings, maintains a waiting list, and promotes the earliest waiting passenger when a confirmed booking is cancelled. It illustrates the FIFO principle in a real-world application.

