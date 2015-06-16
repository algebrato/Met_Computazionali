#!/bin/bash

cat modello.txt | sed  s/nome/stefano/ | sed s/cognome/mandelli/ | sed /*/d > modello_sostituzione.txt

exit 0
