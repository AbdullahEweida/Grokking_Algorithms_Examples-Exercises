# Grokking_Algorithms_Examples-Exercises
Summary for Grokking Algorithms And Solves Exercise and also contain Examples from the book.
## Chapter 1:
Binary Search: search the index of the element in a sorted array.
- Algorithm: Divide the array into two parts and check the middle element of the array and compare it with the target
if it is equal to the target then return the index of the element 
if the target is greater than the middle element then search in the right half of the array
if the target is less than the middle element then search in the left half of the array
If the target is not found then return -1.
- Time Complexity: O(log n).
- Space Complexity: O(1).
## Chapter 2:
### Data Structure
Array: an ordered collection of items (data, objects, numbers) stored together.
- in Searching: if Array is sorted O(log n) else O(n log n), because must be sorted using Quick sort and then use binary search.
- in Insertion: O(n) because in worth-case the size of array is full if it then must be copy the array and paste in another array has greater size.
- in deletion: O(n) because when delete element must be connect the two parts of array.
Linked list: A linked list consists of nodes with some sort of data, and a pointer, or link, to the next node.
- in Searching: O(n) because it using Sequential access means reading the elements one by one.
- in Insertion: O(1) because when add element in linked list can add directed in the first position.
- in Deletion: O(1) because you just need to change what the previous element points to.
### Algorithm
Selection Sort: sort an array from smallest to largest.
- Algorithm: search for the smallest element in the data structure and add it in the new array then delete this element from array and repeat this process n (size of the array).
- Time complexity: $O(n^2)$.
## Chapter 3:
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
## Chapter 4:
### Algorithm:
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
