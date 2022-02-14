#include <stdio.h>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

typedef unsigned char *byte_pointer;


int main(int argc, char **argv){
	if(argc <2){
		printf("命令行空格带上数值，eg: ./op_pointer 12345 \n");
		return 0;
	}
	int ival = atoi(argv[1]);
	std::cout << "hello, world " << ival << std::endl;
	int *p = &ival;
	std::cout << &ival << std::endl;

	cout << *p << endl;

	//int *pp = 0x7ffee8c719ec;
	//cout << *pp << endl;
}
