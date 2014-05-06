#include "strlib_harrison.h"

char *center(char *s, int width){
	int len = str_length(s);
	if (width <= len){return xerox(s);}
	else{
		int space = (width-len)/2;
		char *ns;
		ns = make_space(space);
		str_glue(ns,s);
		str_glue(ns,make_space(space));
		return ns;
	}
}
