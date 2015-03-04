hello.exe: main.o calcul.o
	gcc -o software_projet_robot.exe main.o calcul.o 

main.o: main.c
	gcc -c main.c header.h

calcul.o: calcul.c
	gcc -c calcul.c header.h
	 
     
clean:
	del *.o *.h.gch