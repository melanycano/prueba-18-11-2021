// escribir un programa que diga "Hola, x" donde x
// es un argumento (string)
// usar la funcion saludar de libprueba.h
#include <stdio.h>
#include <stdlib.h>
#include "libprueba.h"

int main(int argc, char *argv[]) {
  char *nombre = argv[1];
  saludar(nombre);
  return 0;
}
