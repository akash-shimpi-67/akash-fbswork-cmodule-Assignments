#include<stdio.h>
#include<string.h>
int main(){
const char *text="hello world, welcome to c programming";
const char *sub="welcome";
char *result = strnstr(text,sub,20);

if(result){
printf("substring found : %s\n",result);
}
else{
printf("substing not found");
}
return 0;
}
