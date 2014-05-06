#include "strlib_harrison.h"

int ends_with(char *s, char *suff){
	int i, x, lens, lenx;
	lens = str_length(s);
	lenx = str_length(suff);
	if (lenx>lens) {return 0;}
	x = lens-lenx;
	for (i=0;i<lenx;i++){
		if (s[x+i] != suff[i]) {return 0;}
	}
	return 1;
}
