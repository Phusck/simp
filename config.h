#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 2

/* key matrix pins */
#define MATRIX_ROW_PINS               \
    {                                 \
        LINE_PIN0,      /* ROW_EQL */ \
            LINE_PIN1  /* ROW_1 */   \
    }

#define MATRIX_COL_PINS             \
    {                               \
        LINE_PIN2,     /* COL_0 */  \
            LINE_PIN3 /* COL_1 */  \
    }


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5


