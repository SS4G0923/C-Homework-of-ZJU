#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#define ARRAY_SIZE 10
#define ARRAY_LEN 150
#define CLEAR(x)    memset(&(x), 0, sizeof(x))
char* copyStrFromTo(char* source, char* des, int start, int end) {
	int i=0;
	if(!(source+start) || !(source+end) || (start >= end)) return NULL;
	for(i = 0; i <= (end - start); i++) {
		*(des+i) = *(source + start + i);
	}
	return (source+start);
}
int main(int argc, char *argv[]) {
	int i=0, k=0;
	int right_verify = 0;
	char verify[2];                                //record verify hex data, use sprintf to change
	char *s_start, *s_end, s_verify[2], *xor_verify, *pstr;
	char UTC_time[10], *BJ_time = NULL;
	char s_hh[2]= {'\0', '\0'}, s_mm[2]= {'\0', '\0'}, s_ss[2]= {'\0', '\0'};         //hhmmss.sss
	int d_hh, d_mm, d_ss;
	char *res = NULL;
	char *inputs[ARRAY_SIZE];
	while(1) {                                  //read the line context is "END" or not
		inputs[i] = (char *) malloc(ARRAY_LEN * sizeof(char));
		res = fgets(inputs[i], 500, stdin);     //read every line
		if(strstr(inputs[i], "END") == 0) {      //find string "END" from the input
			i++;
			continue;
		} else
			break;
	}
	for(int j=0; j<i; j++) {                      //verify every input
		s_start = strstr(inputs[j], "$");
		s_end = strstr(inputs[j], "*");
		s_verify[0] = *(s_end+1) ;
		s_verify[1] = *(s_end+2) ;
		xor_verify = s_start+1;
		for(pstr = s_start+2; pstr < s_end; pstr++) {
			*xor_verify ^= *pstr;                    //xor the key information
			sprintf(verify, "%x", (int)*xor_verify);     //sprintf hex to char
			if((atoi(verify) == atoi(s_verify)) && (strstr(inputs[j], ",A,"))) {
				while(',' != *(res = inputs[j]++));            //query the first character ','
				for(k=0, pstr = res+1; pstr <= res+10; pstr++) {  //choose the next 10 char
					UTC_time[k++] = *pstr;
				}
				right_verify++;                        //record the right input
			}
		}
		res = copyStrFromTo(UTC_time, s_hh, 0, 1);       //check the result of res
		res = copyStrFromTo(UTC_time, s_mm, 2, 3);
		res = copyStrFromTo(UTC_time, s_ss, 4, 5);
		d_hh = atoi(s_hh) + 8;
		if(d_hh >= 24) d_hh = d_hh - 24;
		if(d_hh < 10)
			sprintf(s_hh, "0%d", d_hh);
		else
			sprintf(s_hh, "%d", d_hh);

		d_mm = atoi(s_mm);
		if(d_mm < 10)
			sprintf(s_mm, "0%d", d_mm);
		else
			sprintf(s_mm, "%d", d_mm);

		d_ss = atoi(s_ss);
		if(d_ss < 10)
			sprintf(s_ss, "0%d", d_ss);
		else
			sprintf(s_ss, "%d", d_ss);
		printf("%s:%s:%s", s_hh, s_mm, s_ss);
		return 0;
	}
}
