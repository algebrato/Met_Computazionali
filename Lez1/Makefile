VERSION 	= 0
PATHLEVEL	= 0
SUBLEVEL	= 0
EXTRAVERSION 	= 
###############################################################################
ESEGUIBILE	:= mian.x
OBJ		:= main.o
CC		:= g++
FLAGS 		:= -O2 -g 
LIBS		:= 

%.o : %.cpp
	$(CC) ${LIBS} ${FLAGS} -c $< -o $@

${ESEGUIBILE}: ${OBJ}
	$(CC) ${LIBS} ${FLAGS} -o $@ $^	


.PHONY: clean

clean:
	rm -rf *.x *.out *.o
