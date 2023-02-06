clear
rm *.o
gcc -c displayroom.c
gcc -c assignroom.c
gcc -c driver.c
gcc -o run displayroom.o assignroom.o driver.o
./run