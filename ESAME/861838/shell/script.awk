#!/usr/bin/awk -f  

  BEGIN {
         OFS = "\t";
  }                                                   
    { 
      a += $2; b += $3;
      tot = ($2+$3); 
      print "   " $1,$2,$3,"|  "tot;
    }
  END { 
       print "_______________________________________________\n";
       print "                " a, b, "-> "(a+b)" (Totale)","\n";
 } 
