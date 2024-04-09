#include<stdio.h>
void printNum(){
    static int a = 10;
    printf("a is: %d\n", a);
    a++;
}

long long getFac(long long n){
	if(n == 1) return 1;
	return n*getFac(n-1);
} 

main(){
//    printNum();
//    printNum();
	long long res = 0;
	for(int i = 1; i < 21; i++){
		res = res + getFac(i);
	}
	printf("%lld", res);
    return 0;
}
