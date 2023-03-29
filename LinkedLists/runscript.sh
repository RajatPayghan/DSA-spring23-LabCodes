clear
rm *.o
gcc -c createnode.c
gcc -c appendnode.c
gcc -c createlist.c
gcc -c printlist.c
gcc -c main.c
gcc -o hello main.o createnode.o appendnode.o createlist.o printlist.o
