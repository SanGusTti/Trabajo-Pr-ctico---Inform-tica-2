#ifndef MY_LIB
#define MY_LIB
#include <stdio.h>

typedef enum {
  carga = 0,
  dosifica = 1,
  vacia = 2
}estados_t;

typedef struct {
  char Nivel;          // Nivel actual
  char SP_Nivel;       // Nivel seteado
  char Ph;             // Ph Actual
  char SP_Ph;          // Ph Seteado
}condiciones_t;

condiciones_t f_inicio(void); // lee el archivo de configuración y carga las variables.
estados_t f_cargar(condiciones_t);
estados_t f_dosificar(condiciones_t);
estados_t f_vaciar(condiciones_t);

#endif