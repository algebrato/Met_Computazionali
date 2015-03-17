Table[Print["i=",i]; tmp=i^2; tmp, {i,1,5}] (*L'ultimo elemento prima della virgola viene inserito nella lista*)


(*Sono sempre liste di liste*)

M = {{a,b},{c,d}}
M//MatrixForm

Det[M] (*-->Determinante*)

Eigenvalues[ M ]
Eigenvectors[ M ]

(*Prodotti Matriciali*)

Inversa = Inverse[ M ]

Inversa.M


