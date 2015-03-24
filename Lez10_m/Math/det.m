(*Per il determinante esiste Det[M], però se volessi costruirlo io conoscendo l'espressione del det della 2x2?*)

(*
myDet[ {{a_,b_},{c_,d_}} ] := a d - b c;
P = {{l,m},{n,o}};



M33 = { {a,b,c}, {d,e,f}, {g,h,i} }
M[[1]][[1]];


A=Delete[M33,1]
T=Transpose[A]
M1=Delete[T,1]

A=Delete[M33,1]
T=Transpose[A]
M2=Delete[T,2]

A=Delete[M33,1]
T=Transpose[A]
M3=Delete[T,3]


*)
M33 = { {a,b,c,l}, {d,e,f,m}, {g,h,i,n}, {o,p,q,r} }
myDet[ {{a_,b_},{c_,d_}} ] := a d - b c;
myDet[ M_List ] := 
Sum[
	noprima = Delete[M, 1];
	trasposta = Transpose[ noprima ]; (*Dovuto al fatto che mathematica ragiona per righe. E' facile togliere una riga , difficle una colonna*)
	minore = Delete[trasposta,j];
	addendo = myDet[minore]*M[[1]][[j]]*(-1)^(1+j), (*L'ultimo elemento prima della virgola è quello che viene sommato dalla Sum*) (*E' uguale scrivere M[[i,j]] o M[[i]][[j]]*)
	
	{j, 1, Length[M] } (*Gran casino per le matrici superiori a 3x3....andrebbe richiamo ricorsivamente myDet[M_List] ma ci sarebbe ambiguità con j*)
]






(*Det+=M[[1]][[i]] * myDet[];
S=Delete[M,1];*)
	
	





