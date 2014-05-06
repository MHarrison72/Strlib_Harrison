#include <ctype.h>
#include "strlib_harrison.h"

int strcmp_ign_case(char *s1, char *s2){
	int i = 0;
	int len1 = str_length(s1);
	int len2 = str_length(s2);
		
	if(len1>len2){
		for(i=0;i<len1;i++){
			if(tolower(s1[i])!=tolower(s2[i])){
				unsigned char c1 = tolower(s1[i]);
				unsigned char c2 = tolower(s2[i]);
				return (c1-c2);			
			}
		}
	}	
	else{
		for(i=0;i<len2;i++){	
			if(tolower(s1[i])!=tolower(s2[i])){
				unsigned char c1 = tolower(s1[i]);
				unsigned char c2 = tolower(s2[i]);
				return (c1-c2);			
			}
		}
		return 0;	
	}
}

