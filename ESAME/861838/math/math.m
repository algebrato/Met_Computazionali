(*'*)
(*Esercizio1*)
eq1 = z == x^2 + y^2;
eq2 = z == -(x^2+y^2)^(3/2) + 30;
eq3 = z == -40*x-40*y;

sist = {eq1,eq2,eq3};
incognite = {x,y,z};
sol = Solve[sist,incognite];
Print["Soluzioni"]
Print[ N[sol]//MatrixForm];
(*Disegno superfici*)
sup1 = z /. Solve[eq1,z];
sup2 = z /. Solve[eq2,z];
sup3 = z /. Solve[eq3,z];


gra1 = Plot3D[sup1[[1]], {x,-3,3}, {y,-3,3}];
gra2 = Plot3D[sup2[[1]], {x,-3,3}, {y,-3,3}];
gra3 = Plot3D[sup3[[1]], {x,-3,3}, {y,-3,3}];


(*Esercizio2*)
(*g[t_,aa_,b_,k_] := y[t] /. ParametricNDSolve[ { y'[t]==aa*( 1-y[t])*y[t] + b , y[0]==k}, y[t], {t,0,10}, {aa,b,k}];*)

(*Esercizio3*)
total = 0;
acc = 0;
p = {}
Table[ x = Random[Real,{-5,5}] ; y = Random[]; If[y<E^(-x^2), AppendTo[p,{x,y}]; acc++]; total++, {i,1,100000}  ];
(*Calcolo l'integrale*)
int = Integrate[E^(-xx^2),{xx,-5,5}]/10;
ratio = acc/total;
Print["Integrale MC - Integralevero =", Abs[N[int]-N[ratio]]]
ListPlot[p]

(*Esercizio 4*)
M = Table[Table[Random[],{i,1,1000}], {j,1,1000}];
eigval = Eigenvalues[M];
tabella = Table[{Re[eigval[[i]]], Im[eigval[[i]]]}, {i,1,1000}];
ListPlot[tabella];




