#pragma once

#include "quantum.h"

#define LAYOUT_2by2( \
	K00, K01, \
	K10, K11  \
) { \
	{ K00,   K01 }, \
	{ K10,   K11 }  \
}

#define LAYOUT LAYOUT_horizontal