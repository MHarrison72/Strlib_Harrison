#include "strlib_harrison.h"

int str_length(char *s) {
	int i = 0;
  	while (*s != '\0') {
    		s++;
    		i++;
  	}
  	return i;
}
