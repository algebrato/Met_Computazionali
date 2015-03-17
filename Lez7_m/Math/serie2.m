espansione[n_] := Normal[ Series[Log[1+x], {x,0,n}]];  (*Con l'= darebbe errore, in questo modo*)

esatto = Log[0.1];

Do[

if[ Abs[ (espansione[i] /. x->-0.9)/esatto -1 ] < 0.0001, 
	Print["Trovato i=",i];
	Break[]
	],
	
	{i,1,100}
]
