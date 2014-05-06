#include <ctype.h>
#include "strlib_harrison.h"

void lstrip(char *s){
	char *b = s;
	while (isspace(*b)){b++;}
	while (*b != '\0'){*s=*b; s++; b++;}
}
