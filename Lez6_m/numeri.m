Head[2.]
Head[2]
Head[pippo]
Head["pippo"]

Sqrt[2] (*--> è radice di due*)
Sqrt[2.] (*E' il valore*) 

(*Numeri Complessi*)

Head[2+3 I] (*Il comando Head va a vedere la testa del comando*)
FullForm[2 + 3 I] (*Vedere come mathematica legge questa cosa*)

FullForm[x+y+z] (*io vedo x+y+z, mathematica dice Plus[x,y,z]*)

(*
	= assegnazione
	== uguaglianza -> le equazioni. Anche le eq differenziali
*)

x^2 + x y + y^2 == 4

(*
	=== uguaglinza booleana
	=!= disuguaglianza boolenana
*)

x^2 + x y + y^2 === 4 (* è false perchè sono proprio semanticamente differenti, quindi è False*)

if[x^2 + x y + y^2 === 4, a=1, a=0]
a


Clear[a]

lista3 = {a[1,1], pippo, {x[r,s[2]], z} }

(*Maneggiare un po' la lista3*)
lista3[[1]] (*->prende il primo argomento a[1,1]*) 
lista3[[1,2]] (*restituisce 1 ... secondo argomento del primo a[1,1] .. il secondo 1*)
lista3[[3,1,2,1]] (*il tezo elemento .... il primo del tezo ..... il secondo del primo del terzo....il primo del secondo del primo del terzo*)



prod = (x + y) (r + s)

prod[[1]] (*-> (r+s)*)
prod[[2]] (*-> (x+y)*)
prod[[2,2]] (*y*)


x+y+z /. Plus -> Times (*Sostituisci a Plus, Times, e poi valutala --- esempio di manipolazione algebrica*) 













