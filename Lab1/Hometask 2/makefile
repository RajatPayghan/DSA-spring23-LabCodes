Main : run
				./run

run : assignroom.o driver.o
			gcc -o run assignroom.o driver.o 

driver.o : driver.c
						gcc -c driver.c

assignroom.o : assignroom.c
						gcc -c assignroom.c

clean :
				rm -f *.o
				rm run