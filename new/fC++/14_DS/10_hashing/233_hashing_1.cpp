// Hashing 

// Why hashing: To play with element's indices
// Two options to do it: 1) Traverse the whole array 
//                       2) By mapping the elements and indices by using some extra memory.

// Problem : storing indices of such large elements cuz array's limit is only 10^8 (that too global)

// Solution : Hashing : Converting elements into smaller elements using some function (hash functions)
// 123456787 -> 5                           7 -> 5
// 123456788 -> 3 ====> h(x) = x % 10 ====> 8 -> 3
// 123456789 -> 2                           9 -> 2
// Collision : After applying hash function we get same keys.
// Collision Handling : 1) Seperate Chaining
//                      2) Open Addressing

// Seperate Chaining : if collision, create chain of values at same key using linked list (Worst time complexity O(n))
// Load Factor : n/b (n elements, b number of keys)(if we have to put n elements on b keys then load on each key is n/b)
// Array: [9053805, 9438590, 74634728, 82734283, 87528435, 8473289], No. of keys: 3 ==> Load Factor: 6/3 = 2

// Open Addressing => If collision, do probing (probing = using a second argument called probe number in the hash function.)
// Probe number depends on key, hence given by P(k).
// Linear Probing: P(k) = a * k + b
// Quadratic Probing: P(k) = a * k^2 + b * k + c.
// Double Hashing: P(k,x) = k * h (base 2) (x), h (base 2) (x) is a secondary hash function.