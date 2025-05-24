#include "Mino.h"

Mino::Mino(int mri) : rotate_index(0), max_ri(mri) {}  // 加上 rotate_index(0)

Mino& Mino::turn() {
    rotate_index = (rotate_index >= max_ri) ? 0 : rotate_index + 1;
    return *this;
}
