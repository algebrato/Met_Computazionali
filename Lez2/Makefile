VERSION 	= 0
PATHLEVEL	= 0
SUBLEVEL	= 0
EXTRAVERSION 	= 
###############################################################################
ESEGUIBILE	:= esercizio1.x
OBJ		:= esercizio1.o
CC		:= g++
FLAGS 		:= -O2 -g -Wall
LIBS		:= 

%.o : %.cpp
	$(CC) ${LIBS} ${FLAGS} -c $< -o $@

${ESEGUIBILE}: ${OBJ}
	$(CC) ${LIBS} ${FLAGS} -o $@ $^	


.PHONY: clean

clean:
	rm -rf *.x *.out *.o
