(*'*)
(*Esercizio1*)
eq1 = x^2 + y^2 - z == 1
eq2 = z - 2 x^2 - 2 y^2  == 4

sis1 = {eq1,eq2};
incognite = {y,z};
sol1 = Solve[sis1,incognite];

(*Esercizio2*)
sup1 = z /. Solve[eq1,z];
sup2 = z /. Solve[eq2,z];

(*gra1 = Plot3D[sup1[[1]], {x,-5,5}, {y,-5,5}];
gra2 = Plot3D[sup2[[1]], {x,-5,5}, {y,-5,5}];
Show[gra1,gra2]*)

(*Esercizio3*)
g[x_,l_] := y[x] /. DSolve[ { y'[x] + y[x]==E^(-l*x) + 3 Sin[x], y[1]==2}, y[x], x];

(*Esercizio4*)
gra3 = Plot3D[ Evaluate[ g[w,z] ], {w,-2,2}, {z,-0.5,0.5}];

(*Esercizio5*)
INER[m_,x_,y_,z_] :=m {{y^2 + z^2, -x y, -x z},{ -x y, x^2+z^2, -y z },{-x z, -y z, x^2 + y^2}};

I1=INER[1,4,1,3];
I2=INER[2,-1,-1,1];
I3=INER[4,1,0,-2];

TII=I1+I2+I3;

(*Esercizio6*)
eigval = Eigenvalues[TII];
eigvec = Eigenvectors[TII];

(*Esercizio7*)
DIAG = eigvec.TII.Inverse[eigvec];
aaa=Table[If[ N[DIAG[[i]][[j]]] < 10^(-10), 0, N[DIAG[[i]][[j]]]],  {i,1,3}, {j,1,3}]
Print[aaa//MatrixForm]
(*Esercizio8*)
asum = eigvec[[1]]+eigvec[[2]]+eigvec[[3]];
eqell = (eigvec[[1]]/asum)*x^2 + (eigvec[[2]]/asum)*y^2 + (eigvec[[3]]/asum)*z^2 == 1;
graell = ParametricPlot3D[{1 Sin[th] Sin[phi] , 2 Sin[th] Cos[phi], 3 Cos [th]}, {th, 0, Pi}, {phi, 0 , 2 Pi}] 


(*Esercizio9*)
XX[0,r_] = 0.8;
XX[n_,r_]:= XX[n,r] = r*XX[n-1,r]*(1-XX[n-1,r]);
(**---------**)
(*
fac[n_] := fac[n] = n fac[n-1] (** Si ricorda i vari step **) 
fac[0] = 1
*)

