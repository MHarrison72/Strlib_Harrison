#include <stdlib.h>
#include "strlib_harrison.h"

char *replace(char *s, char *pat, char *rep){
	int i, b, x, count = 0, lens, lenp, lenr, lent;
	char *new;
	lens = str_length(s);
	lenp = str_length(pat);
	lenr = str_length(rep);
	//find number of pat in string
	for(i=0;i<lens;i++){
		if(s[i]==pat[0]){
			for(b=0;b<lenp && s[b+i]==pat[b];b++){}
			if(b==lenp){count++;}
		}
	}
	//determine length of new string and allocate memory
	lent = (lens - (lenp*count) + (lenr*count));
	if((new=(char*)malloc(lent+1))==NULL){return NULL;}
	//write new string with pat replaced with rep
	for(i=0, x=0;i<lent && x<lens;i++, x++){
		if(s[x]==pat[0]){
			for(b=0;b<lenp && s[x]==pat[b];b++, x++){}
			if(b==lenp){
				for(b=0;b<lenr;b++,i++){
					new[i] = rep[b];
				}
			}
			x--;
			i--;
		}
		else{
			new[i] = s[x];
		}
	}
	new[lent] = '\0';
	return new;
}
