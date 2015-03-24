(*Da errore per il recursionLimit*)

fat[n_] :=  n fat[n-1];
fat[0] = 1;
fat[1] = 1;

fat[4]

(*ma n_ non ha una costrizione sul tipo, se metto un reale?*)

(*questo perchè lui raggiunge fat[1.] che è diverso dalla definizione messa prima di fat[1] Metto il constrain Integer*)

fat2[n_Integer] := n fat2[n];
fat[1] = 1;

fat3[n_] := If [Head[n] === Integer && n>0, n fat3[n-1], Print["Argomento Sbagliato"]];
fat3[0] = 1;
fat3[1] = 1;



(*sapendo che fat[4] *)

