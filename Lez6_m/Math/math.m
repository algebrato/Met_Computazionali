a=3;
b=5;
c=a+b; (* 3+5 è una espressione che può essere valutata *)
       (* ogni volta che trova un carattere lo valuta. Cerca di associare qualcosa*)
c+x    (* non trova x, lo lascia non valutato e scrive 8+x*)

(*--------------------------*)

??*Writ* 


(*le quadre sono gli argomenti del comando*)

Sin[4.]

(* lo spazio viene visto come moltiplicazione*)

(x+y)*(r+s)
(x+y) (r+s)

(*differenze*)

xy (*la variabili xy*)
x y (*è x*y*)

(* le parentesi tonde sono per la complessità matematica*)

(* le parentesi graffe identificano gli iteratori *)

Plot[Sin[x], {x,0,2 Pi}] 


%2 (* Richiama la riga 2, *) 


%  (* Richiama l'ultima riga *)



(*La fantasia non ha freni*)
(*                --Papà  *)



(*mathematica ragiona per "liste" *)

lista = {x, 5, "pippo" }

lista2 = {x, y, z}
(*li sommo tra loro*)
Apply[Plus, lista2]
(*Li moltiplico tra  loro*)
Apply[Times, lista2]


(* Esempi a caso ... matrici! *)

Table[a[i,j], {i,1,5}, {j,1,2}]
% // MatrixForm






















