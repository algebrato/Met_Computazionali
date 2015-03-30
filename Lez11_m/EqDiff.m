(*Sol[B_,O_]=NDSolve[{f''[t] + B*x'[t] + O^2*x[t] ==0, f'[0]==0, f[0] == 1},f[t],t]*)


f[beta_,omega_] = y[x] /. DSolve[ {y''[t] + beta * y'[t] + O^2*y[t] ==0, 
				   y'[0]==0, 
				   f[0] == 1},   y[t],  t];
