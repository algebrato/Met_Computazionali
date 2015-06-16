(*Il trucco per gestire espressioni non commutanti è quello di incapsularle dentro ad una funzione*)

(*

Concetto di pattern

x_ -> una sola espressione di mathematica
x_ -> una o più espressioni di math_
x___ -> nessuna, una o più di una espressione di math

*)

(*g[a,adag,a,adag,a,a,adag]
g[a,adag,adag,a,a,a,adag] + g[a,adag,a,a,adag] *)

g[a,adag] = g[adag,a] +1
g[x,y,a,adag,w,z] = g[x,y,adag,a,w,z] + g[x,y,w,z]
g[x__,a,adag,y___] := g[x,adag,a,y] + g[x,y] (** Non capisco bene come usare i pattern **)

g[a,adag,a,adag,a,a,adag]


