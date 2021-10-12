#include <string.h>
#include "util.h"

void remove_newline(char *s) {
  s[strlen(s)-1] = '\0';
}
