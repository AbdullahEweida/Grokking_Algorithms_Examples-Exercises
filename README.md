# Grokking_Algorithms_Examples-Exercises
Summary for Grokking Algorithms And Solves Exercise and also contain Examples from the book.
## Chapter 1
Binary Search: search the index of the element in a sorted array.
- Algorithm: Divide the array into two parts and check the middle element of the array and compare it with the target
if it is equal to the target then return the index of the element 
if the target is greater than the middle element then search in the right half of the array
if the target is less than the middle element then search in the left half of the array
If the target is not found then return -1.
- Time Complexity: $O(log n)$.
- Space Complexity: $O(1)$.
## Chapter 2
### Data Structure
Array: an ordered collection of items (data, objects, numbers) stored together.
- in Searching: if Array is sorted $O(log n)$ else $O(n log n)$, because must be sorted using Quick sort and then use binary search.
- in Insertion: $O(n)$ because in worth-case the size of array is full if it then must be copy the array and paste in another array has greater size.
- in deletion: $O(n)$ because when delete element must be connect the two parts of array.
Linked list: A linked list consists of nodes with some sort of data, and a pointer, or link, to the next node.
- in Searching: $O(n)$ because it using Sequential access means reading the elements one by one.
- in Insertion: $O(1)$ because when add element in linked list can add directed in the first position.
- in Deletion: $O(1)$ because you just need to change what the previous element points to.
### Algorithm
Selection Sort: sort an array from smallest to largest.
- Algorithm: search for the smallest element in the data structure and add it in the new array then delete this element from array and repeat this process n (size of the array).
- Time complexity: $O(n^2)$.
## Chapter 3
### Algorithm
Recursion: when function call itself.
- The recursion has two parts:
    1. **The base case**: is when the function doesn’t call itself again … so it doesn’t go into an infinite loop.
    2. **The recursive case** is when the function calls itself.
### Data Structure
- **Stack**: pile of objects placed on top of each other.
- **Call Stack**: memory structure holding details of active function calls.
- **operation** in the stack is three operations:
    1. **Push:** adding the element into the top of the stack.
    2. **Pop:** deleting the element from the top of the stack.
    3. **Peek:** Demonstrate the top element in the pile.
### Notes
1. using recursion is dangerous for memory because the all info of the functions are stored in the memory
2. the error of the recursion is (stack overloading) this means the stack is overflowing and can't call any function again
3. The link between stack and recursion is that recursion is implemented using the call stack.
## Chapter 4
### Algorithm
1. **Divide & Conquer Algorithms** are recursive algorithms.
    to solve it, there are two steps:
        1. Figure out the base case. his should be the simplest possible case.
        2. Divide or decrease your problem until it becomes the base case.
2. **Quicksort** Remember, you’re using D&C. So you want to break down this array until you’re at the base case. Here’s how quicksort works. 
        1. Pick an element from the array. his element is called the pivot.
        2. Now find the elements smaller than the pivot and the elements larger
            than the pivot. this is called partitioning.
        3. Call quicksort recursively the two sub-arrays
    - $O(n^2)$ in the worst-case
    - $O(n \log n)$ in the best-case(average case)
3. **Merge sort vs quicksort**

| Feature | Merge Sort | Quick Sort |
| :--- | :--- | :--- |
| **Average Time Complexity** | $O(n \log n)$ | $O(n \log n)$ |
| **Worst Time Complexity** | $O(n \log n)$ | $O(n^2)$ |
| **Space Complexity** | $O(n)$ (External) | $O(\log n)$ (In-place) |
| **Stability** | **Stable** | **Unstable** |
| **Sorting Method** | Out-of-place | In-place |
| **Preferred for...** | Linked Lists / External Sorting | Arrays / General Purpose |

### Notes
1. Functional programming: don’t have loops, so you have to use recursion to write functions.
2. The link between the Quicksort and Divide & conquer: Quicksort is implemented using the divide & conquer approach.
3. Quicksort is unique because its speed depends on the pivot you choose.
## Chapter 5 (Hash Tables)
### Hash Function
A hash function is a function where you put in a string and you get back a number.
**requirements for a hash function:**
1. It needs to be consistent.
2. It should map different words to different numbers.
**Put a hash function and an array together, and you get a data structure called a *hash table*.**
### Hash Tables
A hash table is the is the first data structure you’ll learn that has some extra logic behind it.
Arrays and lists map straight to memory, but hash tables are smarter. 
they use a hash function to intelligently figure out where to store elements.
- **Use cases**
    1. Using hash tables for lookups: to find element from large elements *like IP Address in web*.
        For any website you go to, the address has to be translated to an IP address.
    2. Preventing duplicate entries: and a hash table instantly tells you whether this element is in the hash table or not.
    3. Using hash tables as a cache: memorizing data instead of making your server do work
- **Collisions**: two keys have been assigned the same slot.
    he simplest one is this: if multiple keys map to the same
    slot, start a linked list at that slot.
    - note: A good hash function will give you very few collisions.
    - To avoid collisions, you need to:
        • *A low load factor*: you count the number of occupied slots in an array / sum of all slots in array.
                            resize hash table when your load factor is greater than 0.7.
        • *A good hash function*: A good hash function distributes values in the array evenly.
- **Performance** 
    In the average case, hash tables take $O(1)$ for everything (insertion, deletion, updating, searching).
    In the worst case (high load factor and bad hash function), hash tables take $O(n)$ for everything.
## Chapter 6 (Breadth-First Search)
### Data Structure
#### Graph
A graph models a set of connection and made up of nodes and edges.
- **Node**: can be directly connected to many other nodes and may be *city, person*, and those nodes called its *neighbors*.
- **Edge**: is the line connect between two nodes.
<p aling = "center">
<img src = "/images/Graph.png" title = "graph components" width = "250px">
</p>

**Implementation**
    1. Adjacency Matrix
    2. Jagged Array
**Graphs are way to model how different things are connected to one another**
#### Queue
A Queue works like it does in real life.
like *stack*, you can't access random elements in the queue.
- **Operations**
    1. enqueue(): add to the end of the queue.
    2. dequeue(): delete first element in the queue.
    <p aling = "center">
    <img src = "/images/Queue.jpeg" title = "Queue representation">
    </p>

### Algorithms
#### Breadth-First Search (BFS)
This algorithm runs on graphs. it can help answer two types of questions
    1. Is there path from node *A* to node *B*?
    2. What is the shortest path from node *A* to node *B*?
**Implementation**
1. create a queue *Q* (FIFO), hash map to keep track of visited nodes *M*
2. add source vertex to *Q* and mark it visited in *M*
3. while *Q* is not emptys
	1. dequeue a vertex *v* from *Q*
	4. dequeue a vertex *v* from *Q*
	5. if *v* is the destination vertex, return the path from source to *v*
	6. for each neighbor n of *v*
	7. if n is not visited in *M*
	8. mark n as visited in *M*
	9. enqueue n to *Q*

- Time Complexity: $O(|V|+|E|)$
- Space Complexity: $O(|V|)$