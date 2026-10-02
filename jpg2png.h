#ifndef JPG2PNG_H
#define JPG2PNG_H

int jpg2png(const char * in_file, const char * out_file);

#ifdef JPG2PNG_STANDALONE
#include <stdio.h>

int main(int argc, char ** argv) {
  if (argc != 3) return (fprintf(stderr, "Usage: %s <in.jpg> <out.png>\n", argv[0]), 1);
  return jpg2png(argv[1], argv[2]);
}

#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#endif

#ifdef JPG2PNG_IMPLEMENTATION
#include "stb_image.h"
#include "stb_image_write.h"

int jpg2png(const char * in_file, const char * out_file) {
  return 1;
}

#endif
#endif
