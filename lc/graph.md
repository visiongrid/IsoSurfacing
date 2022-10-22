Important Graph Algorithm Notes for Interview
https://leetcode.com/discuss/general-discussion/1122034/important-graph-algorithm-notes-for-interview

Hi All,

I have created this post to share my notes on graph. I always faced problem in understanding graph problem and even if I understand the problem then next worry is which data strucutre and algorithm is used to solve this problem.

This post does not have any shortcut to remember templates or code. This post has important graph algorithms and resources to learn these algorithms.

After solving problem related to each topic, I am confident to implement the required algorithm quickly. These building blocks also help me to revise the concept of graph just before the interview.

Please upvote the posts so that it will reach max folks and everyone will get benefit out of it.

How to declare data structure for storing graph?

Unweighted Graph
List[] graph = new List[n];

Weighted Graph
List<int[]>[] graph = new List[n];

Tree vs Graph
Visited array is used in graph to avoid processing of the same node again.

Algorithm used to traverse/search in graph

BFS

    Used for finding shortest path
    Time Complexity is O(V+ E)

DFS

    Used for finding if path exists/possible
    Time Complexity is O(V+ E)

Check if cycle exist in graph

Directed
Use color array with value 0, 1 and 2

Undirected

    Use union find
    use parent pointer and visited array ( DFS or BFS)

Topological Sort (Directed Acyclic Graph)
https://www.interviewcake.com/concept/java/topological-sort

BFS

    InDegree Array and start with indegree 0
    Important to check for length of topo sort array with total number of vertices to detect cycle.
    Time Complexity is O(V+ E).
    It is easier to check cycles in BFS.

DFS

    Add current node at start of list only after processing all child nodes.
    No need for indegree nodes. Just do dfs until all nodes are visited
    Time Complexity is O(V+ E)

Single Source Shortest Path

1. Topological Sort

    Perform Topo Sort
    Traverse graph in topo sort order. ie. Pick start vertex from top sort and explore its neighbours and keep maintaining shortest distance.
    Time Complexity is O(V + E).
    https://www.youtube.com/watch?v=TXkDpqjDMHA&list=PLDV1Zeh2NRsDGO4--qE8yH72HFL1Km93P&index=17

2. Dijkstra Algorithm

    Used only if weights are non-negative
    Similar to BFS but has below difference
    Used Priority Queue with Integer Array instead of Queue with Integer
    Used Distance array instead of boolean visited array.
    Time Complexity is O(Elog E) -> O(Elog V^2) -> O(E*2 log v) -> O(ElogV)
    https://leetcode.com/problems/network-delay-time
    https://leetcode.com/problems/cheapest-flights-within-k-stops/ - Imp as slight variation

Bellman Ford

    Used with negative weights also.
    Able to find whether graph has negative cycle
    Not preferred over Dijkstra as time complexity of bellman ford is O(VE)
    Implemented Bellman ford for this problem to see its working code. https://leetcode.com/problems/network-delay-time
    Run this algo one more time if a negative cycle check is required. If the shortest distance of a vertex is reduced, then the graph has a negative cycle.

All Pair Shortest Path Algorithm

Floyd Warshall Algorithm

    It prefers adjacency matrix over adjacency list
    Time Complexity is O(V^3)
    Run this algo one more time if a negative cycle check is required. If the shortest distance of a vertex is reduced, then the graph has a negative cycle.
    https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/

Strongly Connected Components(SCC)

Simple DFS and visited array is used to find scc in an undirected graph.

Tarjan algo and kosaraju algo are used to find scc in directed graphs.

Tarjan’s Algorithm

    Used to find scc, articulation point, bridge in graph.
    Time complexity is O(V+E)
    https://www.youtube.com/watch?v=aZXi1unBdJA&ab_channel=WilliamFiset - scc
    Implemented both bridge and articulation points in this leetcode problem
    https://leetcode.com/problems/critical-connections-in-a-network
    https://www.youtube.com/watch?v=aZXi1unBdJA&ab_channel=WilliamFiset - Bridge and Articulation Point

Kosaraju’s Algorithm

    Time Complexity is O(V+E)
    https://www.youtube.com/watch?v=RpgcYiky7uw&ab_channel=TusharRoy-CodingMadeSimple
    Implemented on HackerEarth by me
    https://www.hackerearth.com/practice/algorithms/graphs/strongly-connected-components/practice-problems/algorithm/a-walk-to-remember-qualifier2/submissions/
    Implementation: https://leetcode.com/problems/course-schedule/discuss/249688/Different-O(V%2BE)-solution-using-Kosaraju's-algorithm

Minimum Spanning Tree

Prims Algo

    Start with any vertex. Use Priority Queue to process the smallest edge.
    Use visited array or distance array.
    Difference between Prims and Dijkstra is “Don’t add current vertex distance to calculate neighbour distance”.
    Example : u, v
    Dijkstra - dis[v] = dis[u] + graph[u][v];
    Prims - dis[v] = graph[u][v]
    Time Complexity is O(ElogV)
    https://www.youtube.com/watch?v=oP2-8ysT3QQ&t=430s&ab_channel=TusharRoy-CodingMadeSimple
    Implementation: https://leetcode.com/problems/min-cost-to-connect-all-points

Kruskal Algo

    Sort all the edges by their weights and use union find to avoid cycle
    Time Complexity is O(ElogE)
    https://www.youtube.com/watch?v=fAuF0EuZVCk&t=261s&ab_channel=TusharRoy-CodingMadeSimple
    Implementation: https://leetcode.com/problems/min-cost-to-connect-all-points

Travelling Salesman Problem (TSP)

    It is a hamiltonian circuit. It is a hamiltonian path if returning to the start vertex is not needed.
    Time Complexity is O(N^2 * 2 ^N)
    Implemented using dp with bit masking as dp[1<<N][N] where N is number of vertices.
    Easiest Implementation: https://www.hackerearth.com/practice/notes/codemonk-dynamic-programming-ii-1/
    https://leetcode.com/problems/find-the-shortest-superstring

Hamiltonian Path or TSP

    Path which traverses each vertex exactly once.
    Simple way: DFS + backtracking
    https://www.hackerearth.com/practice/algorithms/graphs/hamiltonian-path/tutorial/

Euler Path

    Path which traverses each edge exactly once.
    https://www.youtube.com/watch?v=8MpoO2zA2l4&ab_channel=WilliamFiset
    Implementation: https://leetcode.com/problems/reconstruct-itinerary/

Graph beginner problems:
https://leetcode.com/discuss/general-discussion/655708/graph-for-beginners-problems-pattern-sample-solutions/

If I missed anything or written wrongly, please let me know. I will keep updating the post.
Next: I will be writing the same for Dynamic Programming.


https://leetcode.com/discuss/interview-question/753236/List-of-graph-algorithms-for-coding-interview


I am trying to list down all of the commonly used/asked graph algorithms that are asked on coding interviews.
Here is what I found so far.

    DFS: Tonnes of problems on Leetcode
    BFS: Tonnes of problems on Leetcode
    Union Find: Tonnes of problems on Leetcode
    Topological Sorting:
        https://leetcode.com/problems/course-schedule/
    Single/Multi-source Shortest Path: Dijkstra, Bellman, Floyd-Warshall algorithm. Leetcode has good amount of problems on this topic. Few are following
        https://leetcode.com/problems/network-delay-time/
    Minimum Spanning Trees: Prim's and Kruskal's algorithm.
        https://leetcode.com/problems/optimize-water-distribution-in-a-village/
    Strongly Connected Components: Tarjan's Algorithm
        https://leetcode.com/problems/critical-connections-in-a-network/
    Hierholzer's algorithm for Eulerian circuits.
        https://leetcode.com/problems/reconstruct-itinerary/
    A* Search
        https://leetcode.com/problems/sliding-puzzle/
    Max-Flow, Min-Cut
        https://leetcode.com/problems/maximum-students-taking-exam/
    Articulation points and bridges
        https://leetcode.com/problems/critical-connections-in-a-network/

Those are the main concepts and algorithms that I found after solving around 500 LC. But I am sure there's more. Can you please help me to list down all of the important graph algorithms and concepts that someone needs to know to handle any graph related problem gracefully?
Please put a comment mentioning the algorithms and concepts along with a link of any LC (at least one LC problem link) that can be solved with that. I will update the post accordingly.




Amazon SDE I || Graph |

You are given an integer n which is the numbers of nodes in the graph. The weight of the edge will be:

    weight of edge between u->v = 1 if (u is divisible by v or v is divisible by u)
    weight of edge between v->u = n+1 if( u is not divisible by v)

You are given q queries and we need to find the shortest distance between them.

I tried the problem but the only problem I am facing is how am I suppose to construct the weighted graph using the given condition because N <= 10^5 I can't traverse the whole graph again and again and make edge if they are dividable by each other on the other hand if I try to find the shorted path for each query still that doesn't seems to be feasible because Q <= 10^3.

Here is an example for better explanation

N=6
Q=2 {(1,3),(3,4)}

Here is how the graph would look like
    |U -> V = weight|
    |---------------|
    1->2=7
    1->3=7
    1->4=7
    1->5=7
    1->6=7
    2->4=1
    2->6=1
    3->6=1

So the answer for the query will be
for (1->3) = 7
for (3->4) = 3->6->2->4 = 3
shortest-pathamazon sde 1graph traversal
