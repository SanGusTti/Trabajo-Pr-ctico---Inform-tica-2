
/* REALIZADO CON SWITCH CASE
#include "mylib.h"

int main() {
    temperatura_t config;
    estados_t estado = espera; // primer estado

    config = inicio();
    while(1){
      switch (estado) {
        case espera: estado = f_espera(config);
                     break;
        case calentar: estado = f_calentar(config);
                       break;
      }
    }
  return 0;
}
*/

/* REALIZADO CON PUNTEROS A FUNCIONES*/

#include "mylib.h"

int main() 
{
    condiciones_t config;
    estados_t estado = carga; // primer estado
    estados_t (*fsm[])(tempertura_t) = {f_cargar, f_dosificar, f_vaciar}
    config = inicio();
    while(1) estado = (*fsm[estado])(config);

    return 0;
}
