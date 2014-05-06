#include "strlib_harrison.h"

int index_of_first_difference(char *s1, char *s2){
	int i, len1, len2;
	len1 = str_length(s1);
	len2 = str_length(s2);
	if (len1>len2){
		for(i=0;i<len2;i++){
			if (s1[i] != s2[i]){return i;}
		}
	}
	else if (len2>len1){
		for(i=0;i<len1;i++){
			if (s2[i] != s1[i]){return i;}
		}
	}
	else if(len1 == len2) {
		for (i=0;i<len1;i++){
			if (s1[i] != s2[i]){return i;}
		}
		return (-1);
	}
}
