M = {{-m1^2 - k, k}, {k, -k - m2^2}};
eig = Eigenvalues[M];

TH = {th1[t], th2[t]};

m2 = m;
m1 = m;

sol1 = Solve[M.TH == eig[[1]] TH, TH] /. {1/Sqrt[k^2] -> 1/k };
sol2 = Solve[M.TH == eig[[2]] TH, TH] /. {1/Sqrt[k^2] -> 1/k };

eqs = {th1''[t] == -m1^2 th1[t] - k th1[t] + k th2[t], 
       th2''[t] == -m2^2 th2[t] + k th1[t] - k th2[t],
       th1'[0] == 0,
       th2'[0] == 0,
       th1[0]  == th1bar,
       th2[0]  == th2bar 
};

sol = DSolve[eqs, TH, t];

somma[t_] = (th1[t]+th2[t]) /. sol /. {th2bar->th1bar};
differenzia[t_] = (th1[t]-th2[t]) /. sol /. {th2bar->-th1bar};

valori = {th1bar ->0.5, th2bar->0.5, m->1, k->1};
gra2 = Plot[ {somma[t] /. valori, differenzia[t] /. valori}, {t,0,10}];

valori2 = {th2bar ->0, m->1} (*In questo modo tengo sol sempre con la stessa forma poi mano mano scelgo i parametri, applicandoli per assegnazione*)

sol3[t_,k_,th1bar_] = th1[t] /. sol /. valori2;
grafico[k_,th1bar_] = Plot[ sol3[t,k,th1bar], {t,0,100}]


