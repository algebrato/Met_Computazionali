Fun[n_,m_] := Integrate[ HermiteH[n,x] HermiteH[m,x] Exp[-x^2] ,{x,-Infinity, Infinity}];
gra = Plot3D[Evaluate[Fun], {n,-10,10}, {m,-10,10}]

