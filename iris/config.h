#pragma once

#define SERIAL_PIO_USE_PIO1
#define MASTER_LEFT
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { GP15, GP14, GP13, GP12, GP11 }
#define MATRIX_COL_PINS { GP0, GP1, GP2, GP3, GP4, GP5 }
#define MATRIX_ROW_PINS_RIGHT { GP15, GP14, GP13, GP12, GP11 }
#define MATRIX_COL_PINS_RIGHT { GP0, GP1, GP2, GP3, GP4, GP5 }

#define DIODE_DIRECTION COL2ROW

#define SOFT_SERIAL_PIN GP22

// #define COMBO_VARIABLE_LEN
// #define COMBO_TERM 40
