eq1 = -(1/Sin[th] D[ Sin[th] D[ TH[th] PHI[phi], th ], th] + 1/Sin[th]^2 D[ TH[th] PHI[phi] ,{phi,2}]) == l (l+1) TH[th] PHI[phi];
eq2 = -D[TH[th] PHI[phi],{phi,2} ] == m^2 TH[th] PHI[phi];
(*Ora devo risolverle imponendo le giuste condizioni al contorno*)
sol2 = DSolve[eq2, PHI[phi], phi];

(*Assegno delle condizioni al bordo per scrivere la soluzione in forma di esponenziale oscullante*)
sol2 = sol2 /. {C[2]->1, C[1]->I};

sol22 = D[sol2, {phi,2} ]; (*Ottengo una regola di sostituzione per la derivata seconda*)
eq1 = eq1 /. sol2 /. sol22; 

(*Ricorsione*)
Derivative[1][f_][th] := -Sqrt[1-x^2] Derivative[1][f][x];
Derivative[n_][f_][th]:= -Sqrt[1-x^2] D[Derivative[n-1][f][th],x];

eq1 = eq1 /. {TH[th] -> TH[x], Sin[th] -> Sqrt[1-x^2], Cos[th]->x, Csc[th]-> 1/Sqrt[1-x^2]};

eq1 = Simplify[eq1];

sol1 = DSolve[ eq1[[1,1]], TH[x],x];
sol1 = sol1 /. {C[1]->1, C[2]->0};

soluzione[x_,phi_,l_,m_] = TH[x] PHI[phi] /. sol2[[1]] /. sol1[[1]];

norm[l_,m_] := Integrate[Abs[soluzione[x, phi, l, m]]^2, {x,-1, 1}, {phi, 0, 2 Pi}];

psi[x_,phi_,l_,m_] := soluzione[x, phi, l, m]/Sqrt[ norm[l,m] ];


(*Plottare con ParametricPlot3D*)

(*
	sfera = ParametricPlot3D[r=1; {r Sin[th] Sin[phi] , r Sin[th] Cos[phi], r Cos[th]}, {th, 0, Pi}, {phi, 0 , 2 Pi}]
*)

grafico[l_,m_] := ParametricPlot3D[ r=Abs[psi[xx,pp,ll,mm]]; { r Sqrt[1-xx^2] Sin[pp], r Sqrt[1-xx^2] Cos[pp] , r xx}, { xx,-1,1 }, {pp,0, 2 Pi}];





(*
Voglio fare un cambio di variabili del tipo
x= Cos[th] 
D[TH[th] ,th ] -> D[ TH[x] ,x] * D[x,th] 

D[x,th] = -Sqrt[1-x^2] 

*)




