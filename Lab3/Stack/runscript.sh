# clear
rm *.o
gcc -c driver.c
gcc -c linked_list.c
# gcc -c stack.c
# gcc -c stackDriver.c
gcc -o run driver.o linked_list.o
# gcc -o run stackDriver.o linked_list.o stack.o
./run
