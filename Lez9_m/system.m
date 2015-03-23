(*x+3y+5z = 7
x+2y+4z = 6
x+y+z=5 *)

m = {{1,3,5},{1,2,4},{1,1,1}}
m.{x,y,z} == {7,6,5}
Solve[%,{x,y,z}]
LinearSolve[m,{7,6,5}]

