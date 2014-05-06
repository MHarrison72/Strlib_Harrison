#include <stdlib.h>
#include "strlib_harrison.h"

char *common_prefix(char *s1, char *s2){
	int i, count = 0;
	while (s1[count] == s2[count]) {count++;}
	char *c;
	if((c=(char*)malloc(count)) == NULL){return NULL;}
	for (i=0;i<count;i++){c[i] = s1[i];}
	c[i] = '\0';
	return c;
}
