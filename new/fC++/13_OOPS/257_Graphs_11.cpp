// Disjoint Set Union (Union Find)
// Sets
// S = { 1, 2, 3, 4}
// P = { 4, 5, 6, 9}
// Which set element 6 belongs to?
// Set - P

// Leading Element/Parent
// Element which can be regarded as the leader element for that set.
// S = { 1, 2, 3, 4}
// Leader = 2
// Parent[1] = Parent[2] = Parent[3] = Parent[4] = 2
//           = used to identify the set

// Naive implementation

// void make(int v)
// {
//     parent[v] = v;
// }
// int find_set(int v)
// {
//     if (v == parent[v])
//         return v;
//     return find_set(parent[v]);
// }
// void union_sets(int a, int b)
// {
//     a = find_set(a);
//     b = find_set(b);
//     if (a != b)
//         parent[b] = 1;
// }

// Union by Size/Rank :-
// final time complexity will be O(alpha(n))  (Where alpha is "inverse Ackermann function")
// This makes the time complexity O(1)

void make(int v)
{
    parnet[v] = v;
    size[v] = 1;
}
void union_sets(int a, int b)
{
    a = find_sets(a);
    b = find_sets(b);
    if (a != b)
    {
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}

// CONCLUSION
// Disjoint Set Union
// in O(1) time complexity
// and O(n) space complexity

// APPLICATIONS:
// 1) MST (Minimum Spanning Tree)
// 2) Connected components in agraph
// 3) Cycle detection and many more
