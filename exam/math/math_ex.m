(*Esercizio1*)
eq1 = x + y + z == 4
eq2 = x^2 - y^2 - z == 2
eq3 = -x + 6 y -z == -2

sis1 = {eq1,eq2,eq3};
incognite = {x,y,z};
sol1 = Solve[sis1,incognite]

valori = incognite /. sol1;

(*Esercizio2*)
sup1 = z /. Solve[eq1,z];
sup2 = z /. Solve[eq2,z];
sup3 = z /. Solve[eq3,z];

(*
gra1 = Plot3D[sup1[[1]], {x,-5,5}, {y,-5,5}];
gra2 = Plot3D[sup2[[1]], {x,-5,5}, {y,-5,5}];
gra3 = Plot3D[sup3[[1]], {x,-5,5}, {y,-5,5}];

Show[gra1,gra2,gra3]
*)
(*Esercizio3*)

Delta[a_,b_] := If[ a===b, 1, 0];

Lp[i_,j_] := (Sqrt[2] Delta[i,j+1])
Lm[i_,j_] := (Sqrt[2] Delta[i,j-1])

LX[i_,j_] := (Lp[i,j] + Lm[i,j])/2;
LY[i_,j_] := (Lp[i,j] - Lm[i,j])/(2 I);

lx = Table[ LX[i,j], {i,-1,1}, {j,-1,1}];
ly = Table[ LY[i,j], {i,-1,1}, {j,-1,1}]; 


(*Esercizio4*)
g[x_,n_] := y[x] /. DSolve[ {(1-x^2)*y''[x] - x*y'[x] + n^2 y[x] ==0},   y[x],  x] /. {C[1]->1,C[2]->0};
gra4 = Plot[ Evaluate[Table[ g[x,i] , {i,1,5}] ], {x,-1,1}]

T[0,x_] = 1;
T[1,x_] = x;

(*finire la ricorsione*)






