run : run_exe
			./run_exe
run_exe : main.o readdata.o
					gcc -o run_exe main.o readdata.o
main.o : main.c
					gcc -c main.c
readdata.o : readdata.c
							gcc -c readdata.c

clean :
				rm *.o
				rm run_exe