rm *.o
gcc -c setA.c
gcc -c quiz.c
gcc -o run quiz.o setA.o
./run
