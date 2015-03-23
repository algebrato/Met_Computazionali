(*x+3y+5z = 7
x+2y+4z = 6
x+y+z=5 *)

(*
m = {{1,3,5},{1,2,4},{1,1,1}}
m.{x,y,z} == {7,6,5}
Solve[%,{x,y,z}]
*)



(*Oppure*)

eq1 = x +3 y + 5 z == 7;
eq2 = x +2 y + 4 z == 6;
eq3 = x + y +  z == 5;

sis1 = {eq1, eq2, eq3};
incognite = {x,y,z};
sol1 = Solve[sis1,incognite]

valori = incognite /. sol1;


(*matriciale*)
m= {{1,3,5},{1,2,4},{1,1,1}};
noto1 = {7,6,5};
sol1bis = Solve[m.incognite == noto1, incognite];
valori1bis = incognite /. sol1bis;




