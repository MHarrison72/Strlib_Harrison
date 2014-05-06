#include <stdlib.h>
#include "strlib_harrison.h"

char *ellipsize(char *s, int nw){
	int i, len, words = 0, x = 0;
	len = str_length(s);
  	char *copy;
	while(isspace(s[x])){x++;}
	for (x;x<len && words<nw;x++){
		if(isspace(s[x])){words++;}
	}
  	if ((copy=(char*)malloc(x+5))==NULL) {return NULL;}
  	for (i=0; i<x; i++) {copy[i]=s[i];}
  	copy[x]='.';
  	copy[x+1]='.';
  	copy[x+2]='.';
  	copy[x+3]='\0';
  	return copy;
}
