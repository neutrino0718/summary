#include <stdio.h>
int addnumbers(int a, int b);
/*
gcc -shared -o libdynamicshared.so libdynamicshared.c
gcc -o libdynamicshared_test.o libdynamicshared_test.c -L. -ldynamicshared
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.
./libdynamicshared_test.o
ldd ./libdynamicshared_test.o
*/
int main(int argc, char *argv[])
{
  int total;
  total = addnumbers(7, 17);
  printf("total = %d\n", total);

  return 0;
}
