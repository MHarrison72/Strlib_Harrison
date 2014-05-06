#include <ctype.h>
#include "strlib_harrison.h"

void rstrip(char *s){
	int i = str_length(s)-1;
	while(isspace(s[i])){
		s[i] = '\0';
		i--;
	}
}
