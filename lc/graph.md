







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
