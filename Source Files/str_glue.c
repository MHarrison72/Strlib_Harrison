#include "strlib_harrison.h"

void str_glue(char *s1, char *s2){
	int i, len1, len2;
	len1 = str_length(s1);
	len2 = str_length(s2);
	for(i=0;i<len2;i++){
		s1[len1+i] = s2[i];
	}
	s1[len1+len2] = '\0';
}
