Plot[ Sin[x], {x,0,2 Pi} ]
Plot[Sin[x], {x,0,2 Pi}, Axes->False]



Plot3D[Sin[x^2+y^2], {x,-3,3}, {y,-3,3}]
Plot3D[Sin[x^2+y^2], {x,-3,3}, {y,-3,3}, PlotPoints->5] (*Ovviamente più il numero di punti è alto maggiore è il costo computazionale*)

CountourPlot[Sin[x^2+y^2], {x,-3,3}, {y,-3,3}, PlotPoints->5] (*Ovviamente più il numero di punti è alto maggiore è il costo computazionale*)

(*Se devo disegnare un cerchio? Parametrizzo o faccio i due semicerchi*)

Plot[{Sqrt[1-x^2], -Sqrt[1-x^2]}, {x,-1,1}, AspectRatio->1] (*Oppure posso parametrizzare*)

ParametricPlot[ {Cos[t], Sin[t]} , {t,0, 2 Pi} ]


ParametricPlot3D[{}] (*Parametrizzare la sp*)
