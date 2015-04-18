(*Il trucco per gestire espressioni non commutanti è quello di incapsularle dentro ad una funzione*)

f[a,adag,a,a,adag,a]

(*

Concetto di pattern

x_ -> una sola espressione di mathematica
x_ -> una o più espressioni di math_
x___ -> nessuna, una o più di una espressione di math

*)


g[a,adag] = g[adag,a]+1 (*Regola di riordino...voglio qualcosa di più generale*)

g[x,y,a,adag,w,z] = g[x,y,adag,a,w,z] + g[x,y,w,z] 

g[x__,a,adag,y___] := g[x___,adag,a,y___] + g[x___,y___] (** Non capisco bene come usare i pattern **)

