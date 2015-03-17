(*c'è una differenza tra = e :=, := l'assegnazione primo secondo membro non viene fatta subito, ma memorizzata e viene valutata quando la variabile assume un valore*)

(*Fare derivate  e sviluppi in serie di taylor*)

D[x^3,x] (*Fa la derivata*)

D[Sin[Log[x]],x]


D[Sin[Log[x]], {x,3}] (*Derivata terza della funzione secondo x*)


D[Sin[x Log[y]], {x,2}, {y,3}] (*derivata parziale 2 rispetto a x e 3 rispetto a y*)


(*C'è anche la derivata totale Dt*)

Dt[ Sin[ Log[x^2+y^2+t] ], t ] (*Scrive Dt[x,t] perchè scrive formalmente la possibilità che x dipenda da t, posso specificare io cosa sia*)


g[x_,y_] := Derivative[1,2][f][x,y] (*Derivative [quante volte derivo la prima, .... volte rispetto alla y][applicato a f][dove valuto la funzione f]*)


Integrate[f''[x], x ] (*Calcolo di un integrale indefinito*)


(*Mathematica ha codificati una serie di derivate di funzioni elementari e cose note*)




