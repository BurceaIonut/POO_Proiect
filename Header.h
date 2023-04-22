#pragma once
#include<string.h>
const char* fctTestInOut(char* buf) {
	if (strcmp(buf, "salut\r\n") == 0) return "Am primit SALUT!\n";
	if (strcmp(buf, "merge\r\n") == 0) return "Am primit MERGE!\n";
	
	return "eroare fct\n";
}