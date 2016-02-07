#include<stdio.h>

template<typename T>
void OutPut(T t) {
	return;
}

template<>
void OutPut(int t) {
	printf("%d\n", t);
}