#include <stdio.h>
int main ()
{
  char *ap, c, d, e;
  c = 'x';
  d = 'z';
  e = '\t';

  // Escribe el código para imprimir las direcciones de c, d y e
  printf("Dirección de c: %p\n", &c);
  printf("Dirección de d: %p\n", &d);
  printf("Dirección de e: %p\n", &e);

  ap = &c; // imprime el carácter de la localidad a la que apunta
  printf("Carácter: %c\n", *ap); // imprime el código ASCII de la localidad a la que apunta
  printf("Código ASCII: %d\n", *ap); // imprime la dirección de memoria de la localidad a la que apunta
  printf("Dirección de memoria: %p\n", ap);

  ap = &d; // imprime el carácter de la localidad a la que apunta
  printf("Carácter: %c\n", *ap); // imprime el código ASCII de la localidad a la que apunta
  printf("Código ASCII: %d\n", *ap); // imprime la dirección de memoria de la localidad a la que apunta
  printf("Dirección de memoria: %p\n", ap);

  ap = &e; // imprime el carácter de la localidad a la que apunta
  printf("Carácter: %c\n", *ap); // imprime el código ASCII de la localidad a la que apunta
  printf("Código ASCII: %d\n", *ap); // imprime la dirección de memoria de la localidad a la que apunta
  printf("Dirección de memoria: %p\n", ap);

  return 0;
}
