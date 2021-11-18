// implementar las funciones de libprueba.h aca
#include <stdio.h>
#include <stdlib.h>

void saludar(char *name){
  printf("Hola, %s\n", name);
}

void print_array(int a[], int size){
  for (int i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int potencia_de_dos(int n){
  int res = 1;
  for (int i = 0; i < n; i++) {
    res *= 2;
  }
  return res;
  // printf("%d\n", n * 2);
}


void suma_vectorial(int u[], int v[], int result[], int n){
  for (int i = 0; i < n; i++) {
    result[i] = u[i] + v[i];
  }
  // printf("%d\n",result);
}
