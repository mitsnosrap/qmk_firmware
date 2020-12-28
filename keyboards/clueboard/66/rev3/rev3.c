#include "rev3.h"
#include <avr/io.h>
#include "print.h"

void matrix_init_kb(void) {
    // put your keyboard start-up code here
    // runs once when the firmware starts up
    matrix_init_user();
}


void matrix_scan_kb(void) {
    matrix_scan_user();
}

