#!/bin/bash

lettera=$(echo "Caro utente
le è stato addebitato qualcosa
Staff di qualcosa")



for i in pippo pluto paperino; do
	echo  $lettera | sed s/utente/$i/g > lettera_per_$i.txt 
done

exit 0

