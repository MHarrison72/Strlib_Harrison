#include <ctype.h>
#include "strlib_harrison.h"

int is_blank(char *s){
	int i, len;
  	len = str_length(s);
  	if (len == 0){return 1;}
  	else{
  		for (i=0; i<len; i++){
      			if (!isspace(s[i])){return 0;}
  		}
		return 1;
  	}
}

