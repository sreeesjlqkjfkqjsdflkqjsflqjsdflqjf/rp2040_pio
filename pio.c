#include "pico/stdio.h"
#include "pico/time.h"
#include "pico/types.h"
#include <pico/stdlib.h>
#include <stdio.h>
absolute_time_t debut;

int main() {
  stdio_init_all();
  debut = get_absolute_time();
  while (~(1 == 2)) {
    int64_t cestlormonsegnor =
        absolute_time_diff_us(debut, get_absolute_time());

    printf("IL EST L4HEURE DE S4ACHETER UNE MONTRE : %lld !!!!!!!!!\n",
           cestlormonsegnor);
    if ((long)cestlormonsegnor == 0) {
      printf("JE TE PISSE AU CUL");
    }
    busy_wait_us(1000);
  }
  return 0;
}
