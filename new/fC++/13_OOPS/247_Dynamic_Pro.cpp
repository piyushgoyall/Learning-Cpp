// Dynamic Programming
// If we can handle smaller problems then we use their learnings to solve a bigger problem.
// Similar understanding is applied in Dynamic Programming.
//         Properties of Dynamic Programming
//       /                                   \
// Optimal Substructure           |    Overlapping Subproblem
//                                |                    
// If we can write a recurrence   | If our subproblems repeat,                
//  relation, then a problem      | then a problem is said to
//  is said to have optimal       | have overlapping subproblem
//  substructure.                 |

//      Ways to handle Overlapping Subproblem
//      /                                \
// Memoization(Top - Down)         |    Tabulation(Bottom - Up)
//                                 |
// A lookup table is maintained    | Solution is built from base.
//  and checked before computation | It is an iterative process.
// of any state. Recursion is      | 
// involved.                       |

// Memoization (Top - Down)
