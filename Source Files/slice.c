#include <stdlib.h>
#include "strlib_harrison.h"

char *slice(char *s, int b, int e){
	int i;
  	char *slice;
	if (b>e || e>str_length(s)){return NULL;}
  	if ((slice=(char*)malloc(e-b+1))==NULL) {
    		return NULL;
  	}
  	for (i=0; i<e-b+1; i++) {
    		slice[i]=s[b+i];
  	}
  	return slice;
}
