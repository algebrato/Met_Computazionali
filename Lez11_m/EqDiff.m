(*Disegno le curve al variare dei parametri*)
g[beta_,omega_] = y[x] /. DSolve[ {y''[x] + beta*y'[x] + (omega*omega)*y[x] ==0, 
				   y'[0]==0, 
				   y[0] == 1},   y[x],  x];
gra1= Plot [g[0,1] , {x,0, 2 Pi}];
gra2= Plot [g[0.5,1] , {x,0, 2 Pi}];
gra3= Plot [g[3,1] , {x,0, 2 Pi}];


g[omega_] = y[x] /. Dsolve[ {y''[x] + 2 omega y'[x] + omega^2 y[x] ==0,
                                   y'[0] ==0,
                                   y[0]  == 1 },   y[x],  x];

f[beta_, omega_] := If[ beta === 2 omega, g[omega], g[beta,omega]] (*Non funzione con l'uguale, il := se lo salva ma non lo valuta, lo valuterà solo successivamente*)



gra4 = Plot[ Evaluate[ {f[0,1], f[0.5,1], f[2,1]}], {x,0,2 Pi}]; (*Meglio aggiungere un evaluate in più in modo da non aver problemi con la definizione delle funzioni col :=*)




