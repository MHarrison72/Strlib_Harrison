#include <stdlib.h>
#include "strlib_harrison.h"

char *make_space(int width){
  	int i;
  	char *copy;
  	if ((copy=(char*)malloc(width+1))==NULL){return NULL;}
  	for (i=0; i<width; i++){copy[i] = ' ';}
  	copy[width] = '\0';
  	return copy;
}
