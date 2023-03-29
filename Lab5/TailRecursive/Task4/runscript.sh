
# Utility
# clear
rm *.o
rm run

# Object Files
gcc -c LL_reader.c


#Exe files
gcc -o run LL_reader.o 


#Run
rm *.o
./run 
rm run