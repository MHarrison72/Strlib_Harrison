#include "strlib_harrison.h"

int find_idx(char *s, char c){
	int i, len;
	len = str_length(s);
	for(i=0;i<len;i++){
		if (s[i] == c) {return i;}
	}
	return (-1);
}
