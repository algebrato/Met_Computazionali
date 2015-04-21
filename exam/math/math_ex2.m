(*'*)
CC[0,x_,lam] = 1;
CC[1,x_,lam] = 2 lam x;
CC[n,x_,lam] := ( 2 (n+lam-1) x CC[n-1,x,lam] - (n + 2 lam -2) CC[] )

y[x_] := GegenbauerC

..

eq2 = Det[A- lam IdentityMatrix[3] ] == 0;
autoval = lambda /. Solve[eq2,lam];

....

sviluppi = Table[Normal[Series[ArcSin[x],{x,0,i}]],{i,3,11,4}];
sviluppi = Append[ sviluppi, ArcSin[x]];

graarcsin = Plot[ Evaluate[sviluppi], {x,-1,1}, PlotRange->{-2,2}];


