#include "strlib_harrison.h"

char *find_ptr(char *s, char c){
	char *p = s;
	while (*p != c){
		p++;
	}
	return p;
}
