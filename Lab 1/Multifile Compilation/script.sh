rm *.o
gcc -c count_vowels.c 
gcc -c master.c
gcc -o runner count_vowels.o master.o
./runner