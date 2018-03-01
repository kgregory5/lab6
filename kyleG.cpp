#include "fonts.h"

void showName(const char *name) {
    Rect r;
    r.bot = 100;
    r.left = 100;
    r.center = 0;
    ggprint8b(&r, 16, 0x00ffff00, "kyle");
}
