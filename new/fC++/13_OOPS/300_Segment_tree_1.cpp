// Segment Trees
// Need of segment trees: Let us take an example of returning and updating sum ofthe subarray a[i .. j] of size n.
// Ex: [5, 3, 2, 4, 7, 8, 6, 10]
//      0  1  2  3  4  5  6  7
// Query: Output the sum from i = 1 to i = 5
// Approach - 1: Iterate from i = 1 to i = 5 and calculate the sum. (Time Complexity: O(n))

// Update: Update the element at i'th index.
// Simply put, a[i] = update element

// TIME COMPLEXITY
// QUERY = O(n)
// UPDATE = O(1)

// Approach - 2: Prefix sum approach.
//               Build the prefix sum array.
// Given Array: [5, 3, 2, 4, 1, 8, 6, 10]
// Prefix Sum: [5, 8, 10, 14, 15, 23, 29, 39]
// OUERY: Output the sum from i to j (0 <= i <= j < n)
// Pref[]: [5, 8, 10, 14, 15, 23, 29, 39]
//          0  1  2   3    4   5   6   7
// i = 1 to i = 5

// Sum[i .. j] = {pref[j] - pref[i-1]} (if i != 0)
//               pref[j] (if i = 0)
// Time Complexity: O(1)

// Update: Put a[i] = updates value.
// To update in the prefix array, we need to change all pref[i1] (i1 >= i).
// Given Array: [5, 3, 2, 4, 1, 8, 6, 10]  i = 4
//               0  1  2  3  4  5  6   7
// Prefix Sum: [5, 8, 10, 14, 15, 23, 29, 39]

//UPDATE the 4'th indexed element to 13.
// Original Array becomes: [5, 3, 2, 4, 13, 8, 6, 10]
//                          0  1  2  3   4  5  6   7
// Prefix Sum Array: [5, 8, 10, 14, 27, 35, 41, 51]     (Here the 4, 5, 6 and 7'th elements have changed)
//                    0  1   2   3   4   5   6   7
// Time Complexity: O(n)

// TIME COMPLEXITY
// QUERY = O(1)
// UPDATE = O(n)

// If we want both the operations to be in reasonable time, we use segment trees.

//              |  Query    |  Update
// Approach - 1 |   O(n)    |    O(1)
// Approach - 2 |   O(1)    |    O(n)
// Segment Tree | O{log(n)} |   O{log(n)}

// Segment Tree Construction
// Given array: [5, 3, 2, 4, 1, 8, 6, 10]
//               0  1  2  3  4  5  6   7

// Power of Number 2 in programming 
// -> Binary Representation of numbers -> All operation be it sum/ subtraction/ product, all are accomplished in O(1).

// -> Division of Array (Divide and conquer)


