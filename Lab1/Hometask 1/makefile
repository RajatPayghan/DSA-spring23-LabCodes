runcommand : run_exe
						./run_exe
run_exe : quiz.o setA.o
					gcc -o run_exe quiz.o setA.o
quiz.o : quiz.c
					gcc -c quiz.c
setA.o : setA.c
					gcc -c setA.c
clean :
				rm -f *.o
				rm run_exe