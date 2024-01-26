// Heap - Smallest Subsequence with sum k.
// Ex. Given an array [1,1,3,2,8] & k = 12
// Subarray: Continuous Block Of Elements.
// Ex. {3,2} {1,3,2,8} {8}
// Subsequence: Not necessarily continuous, but order should remain as in original array
// Ex. {3,8} {1,2,8} {3,2,8}
// "Every subarray is subsequence but not vice versa"
// Possible subsequences which satisfy the condition that sum >= k
// {1,1,3,2,8} {1,3,2,8} {1,3,2,8} {1,3,8} {1,3,8} {3,2,8}
// Subsequences with min. length are {1,3,8} {1,3,8} { 3,2,8}