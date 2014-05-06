#include "strlib_harrison.h"

int begins_with(char *s, char *pre){
	int i, lens, lenp;
	lens = str_length(s);
	lenp = str_length(pre);
	if (lenp > lens) {return 0;}
	for (i=0;i<lenp;i++){
		if (s[i] != pre[i]) {return 0;}
	}
	return 1;
}
