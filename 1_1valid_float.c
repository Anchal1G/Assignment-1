#include<stdio.h>
#include<string.h>
int main(){
 char num[10];
 int flag =0;
 int length,i=0;
 printf("Enter a number\n");
 scanf("%s",num);
 while(num[i++]!='\0')
{
    if(num[i]=='.'){
        flag =1;
        break;
    }
}
if(flag==1){
    printf("Your number %s is  valid ",num);
}
else{
    printf("Your number %s is invalid",num);
}
    return 0;
}