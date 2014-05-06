#include <stdlib.h>
#include "strlib_harrison.h"

char *xerox(char *s) {
	int i, len;
	char *copy;
  	len = str_length(s);
  	if ((copy=(char*)malloc(len+1))==NULL) {
    		return NULL;
  	}
  	for (i=0; i<len; i++) {
    		copy[i] = s[i];
  	}
  	copy[len] = '\0';
  	return copy;
}
