#ifndef JPG2PNG_H
#define JPG2PNG_H

#ifdef JPG2PNG_STANDALONE
#include <stdio.h>

int main() {
  puts("TODO");
  return 0;
}

#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#endif

#ifdef JPG2PNG_IMPLEMENTATION
#include "stb_image.h"
#include "stb_image_write.h"

#endif
#endif
