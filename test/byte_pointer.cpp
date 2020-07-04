#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;

typedef unsigned char *byte_pointer;

void show_bytes(std::string ty, byte_pointer start, size_t len){
	size_t i;
	 printf("类型:%s ", ty.c_str());
	for(i = 0;i<len;i++){
		printf(" %.2x",start[i]);
	}
	printf("\n");
}

void show_int(int x){
	show_bytes("int", (byte_pointer) &x, sizeof(int));
}

void show_float(float x){
	show_bytes("float", (byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x){
	show_bytes("pointer", (byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val){
	int ival = val;
	float fval = (float) ival;
	int *pval = &ival;
	show_int(ival);
	show_float(fval);
	show_pointer(pval);
}

int main(int argc, char **argv){
	if(argc <2){
		printf("命令行空格带上数值，eg: ./byte_pointer 12345 \n");
		return 0;
	}
	int ival = atoi(argv[1]);
	test_show_bytes(ival);
}
