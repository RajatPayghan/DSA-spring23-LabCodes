# ----------------------------
run_iterative: run_itr
				./run_itr
run_itr : driverItr
			gcc -o run_itr driver.o
driverItr : driver.c
			gcc -c driver.c
# ----------------------------
run_recursive: run_rec
				./run_rec
run_rec : driverRec
			gcc -o run_rec driverRecursive.o
driverRec : driverRecursive.c
			gcc -c driverRecursive.c
# ----------------------------


clean :
				rm -f *.o
				rm run_rec
				rm run_itr
