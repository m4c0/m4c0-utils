#ifndef IMG2PNG_H
#define IMG2PNG_H

int img2png(const char * in_file, const char * out_file);

#ifdef IMG2PNG_STANDALONE
#include <stdio.h>

int main(int argc, char ** argv) {
  if (argc != 3) return (fprintf(stderr,
        "Usage: %s <in> <out.png>\n\n"
        "Supports input as JPG, PNG, TGA, BMP, PSD, GIF, HDR, PIC and PNM.\n",
        argv[0]), 1);
  return img2png(argv[1], argv[2]);
}

#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#endif

#ifdef IMG2PNG_IMPLEMENTATION
#include "stb_image.h"
#include "stb_image_write.h"

int img2png(const char * in_file, const char * out_file) {
  int x, y, n;
  unsigned char * data = stbi_load(in_file, &x, &y, &n, 0);
  if (!data) return 1;
  if (!stbi_write_png(out_file, x, y, n, data, x * n)) return 2;
  stbi_image_free(data);
  return 0;
}

#endif
#endif
