/*
 * Este programa muestra como leer varias palabras del teclado (stdin)
 * Codigo tomado de: https://www.programiz.com/c-programming/c-strings
 *
 * Modificado por: John Sanabria - john.sanabria@correounivalle.edu.co
 * Fecha: 2021-02-26
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include "leercadena.h"

int main(int argc, char *argv[]) {

	if (argc == 1) {
		printf("Indique el programa que desea que se ejecute\n");
		exit(1);
	}

  char comando[BUFSIZ];
  char *const vector[] = {argv[1], argv[2], argv[3], argv[4], argv[5], NULL};
  int i;
      execvp(vector[0],vector);
      perror("Return from execlp() not expected");
      exit(EXIT_FAILURE);
  
  return 0;
}

