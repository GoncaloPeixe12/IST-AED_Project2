/************
*************
May 8th '18

All Rights Reserved © Daniel Lopes

File: main.c
Project: Tasks management
*************
Known Bugs:
-
Notes:
- Implementacoes da estrutura de dados em dados.c
- Prototipos e structs dessas estruturas de dados em dados.h
- Utilizar abstracao de modo a que independentemente da implementacao
consiga alterar o tipo de dados mas que as funcoes basicas (insert delete, etc)
funcionem na mesma
- Maybe hash table
- Usar head e tail, introduzir elemento sempre no fim da lista
- head aponta para o inicio e tail aponta para o fim
o que impede que tenha de percorrer a lista toda
*************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "task.h"

/* Pre-processed constants and structures*/
#define MAXCOMMAND 10 /*Command won't be bigger than 10 chars*/

/* Function Declaration/Prototype */
void add();
void duration();
void depend();
void removes();
void path();
void exit();

/* Global Variables */

/* Main Function */
int main(){
  int quitProgram = 0;
  char *command;

  do{
    scanf("%s*[" "]", command);
  } while(quitProgram == 0);

  return 0;
}

/* Function Implementation */
