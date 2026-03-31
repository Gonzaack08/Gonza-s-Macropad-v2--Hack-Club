#pragma once

#define MATRIX_ROWS 2
#define MATRIX_COLS 2

// Pines de la matriz
#define MATRIX_ROW_PINS { GP29, GP3 }
#define MATRIX_COL_PINS { GP0, GP26 }

// Encoders
#define ENCODERS_PAD_A { GP6, GP4 }
#define ENCODERS_PAD_B { GP28, GP2 }
#define ENCODER_RESOLUTION 4

// Dirección (si va al revés, invertís después)
#define ENCODER_DIRECTION_FLIP { false, false }