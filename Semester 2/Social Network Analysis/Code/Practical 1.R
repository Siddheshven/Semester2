#install package igraph

library(igraph)

g <- graph.formula(A - B, B - C, C - D)
print(g)

ecount(g)
vcount(g)

E(g)
V(g)

degree(g)

dg <- graph.formula(A -+ B, B +- C, C ++ D)
print(dg)

degree(g,mode = "in")
degree(dg, mode = "in")
degree(dg, mode = "out")

V(g)$name[degree(g) == min(degree(g))]

get.adjlist(g)
get.adjacency(g)

