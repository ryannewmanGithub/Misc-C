#include <stdlib.h>
#include <string.h>
char *strdup(const char* s) {
  char* p;

  p = (char*) malloc(strlen(s) + 1);  // +1 for null terminator
  if (p != NULL) {
    strcpy(p, s);
  }
  return p;
  
}

int main() {
    return 0;
}