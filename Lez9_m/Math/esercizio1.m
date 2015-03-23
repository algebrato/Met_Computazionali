eq1 = x+y-z == -1;
eq2 = x^2 + y^2 -z == 3;


variabili = {z,y};
sistema = {eq1, eq2};
sol1 = Solve[sistema, variabili];

sup1 = z /. Solve[eq1,z];
sup2 = z /. Solve[eq2,z];

gra1 = Plot3D[sup1[[1]], {x,-5,5}, {y,-5,5}];
gra2 = Plot3D[sup2[[1]], {x,-5,5}, {y,-5,5}];

(*Show[gra1,gra2];*)





