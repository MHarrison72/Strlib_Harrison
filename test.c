/*
* Author: Michael Harrison
* Test for string library
*/

#include <stdio.h>
#include "strlib_harrison.h"

int main(int argc, char **argv){
	char *s = " \t\b\0";
	printf("Is |%s| blank? %d\n",s,is_blank(s));

	s = "This string was xeroxed.";
	char *x = xerox(s);
	printf("%s\n",x);

	printf("|%s|Five spaces should seperate the bars.\n",make_space(5));

	s = "Centered";
	printf("|%s|\n",center(s,10));

	s = "Prefix";
	x = "Pre";
	printf("Is '%s' a prefix of '%s'? %d\n",x,s,begins_with(s,x));

	s = "Working";
	x = "ing";
	printf("Is '%s' a suffix of '%s'? %d\n",x,s,ends_with(s,x));

	s = "Appendectomy";
	x = "Apple";
	printf("%s and %s have a common prefix of: %s\n",s,x,common_prefix(s,x));

	s = "Appendectomy";
	x = "Apple";
	printf("Index of first difference between %s and %s: %d\n",s,x,index_of_first_difference(s,x));

	char r[] = "     Working     ";
	printf("|%s|\n",r);
	lstrip(r);
	printf("|%s|\n",r);
	rstrip(r);
	printf("|%s|\n",r);

	s = "abcdefgh";
	char z = 'd';
	printf("Index of '%c' in '%s': %d\n",z,s,find_idx(s,z)); 

	s = "abcdefgh";
	z = 'd';
	printf("Pointer to '%c' in '%s': %s\n",z,s,find_ptr(s,z));

	s = "";
	x = "";
	printf("",strcmp_ign_case(s,x));

	s = "Who lives in a pineapple under the sea? Spongebob Squarepants.";
	printf("%s\n",ellipsize(s,5));

	s = "This..should..have..spaces..not..dots!";
	char *pat = "..";
	char *rep = " ";
	printf("%s\n",replace(s,pat,rep));

	s = "I am ready for a nice vacation";
	z = ' ';
	char **array = chop(s,z);
	int i;
	for (i=0; array[i]!=NULL; i++) {
    		printf("word[%d]=%s\n", i, array[i]);
  	}

	return 0;
}
