#pragma once

// #define SERIAL_PIO_USE_PIO1
#define MASTER_RIGHT
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS { F4, F5, F6, F7, B1 }
#define MATRIX_COL_PINS { B3, B2, B6, B5, B4, E6, D7 }
#define MATRIX_ROW_PINS_RIGHT { F4, F5, F6, F7, B1 }
#define MATRIX_COL_PINS_RIGHT { B3, B2, B6, B5, B4, E6, D7 }

#define DIODE_DIRECTION COL2ROW

#define SOFT_SERIAL_PIN D1 

#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 3000
