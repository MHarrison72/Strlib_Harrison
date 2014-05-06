#include <stdlib.h>
#include "strlib_harrison.h"

char **chop(char *s, char c){
	int i, j, k, len, words = 0;
	len = str_length(s);
	for(i=0;i<len+1;i++){
		if(s[i]==c || s[i]=='\0'){words++;}
	}
	char **array, *x;
	//allocate memory for char pointers
	if((array=(char**)malloc((words+1)*sizeof(char*)))==NULL){return NULL;}
	//allocate memory for string
	if((x=(char*)malloc(len+1))==NULL){return NULL;}
	array[0] = &x[0]; 
	i = 0; k = 0;
	for(j=1;j<(words+1);j++,k++,i++){
		while (s[k]!=c && s[k]!='\0'){
			x[i] = s[k];
			i++; k++;
		}
		x[i] = '\0';
		array[j] = &x[i+1];
	}
	array[j] = NULL;
	return array;
}
