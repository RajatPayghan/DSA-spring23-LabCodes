
# Utility
clear
rm *.o
rm run

# Object Files
gcc -c driverRecursive.c


#Exe files
gcc -o run driverRecursive.o 


#Run
rm *.o
./run 
rm run