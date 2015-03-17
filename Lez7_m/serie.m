(*Series[ f[x], {x, x0, 5}] (*Serie di Taylor centrata su x0*)


Normal[Series[ Sin[x], {x, 0, 7}]]

Normal[Series[ Log[1+x], {x, 0, 7}]]
*)

espansione[n_] := Normal[Series[Log[1+t], {t,0,n}]]
f[i_] := Abs[ (espansione[i] /. t->-0.9) - Log[0.1] ]
Write[pippo,Do[Print[i," ",f[i]],{i,1,100}]]




(*Provare a fare lo studio di funzione della gamma nel piano complesso*)

(*D[f[i],i]=0*)






