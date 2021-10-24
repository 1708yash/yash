#include <stdio.h>

int main(){
    int num,r,sum,temp;
    int first,last;

    printf("Input starting number of range: ");
    scanf("%d",&first);

    printf("Input ending number of range : ");
    scanf("%d",&last);

    printf("Armstrong numbers in given range are: ");
    for(num=first;num<=last;num++){
         temp=num;
         sum = 0;
         while(temp!=0){
             r=temp % 10;
              sum=sum+(r*r*r);
             temp=temp/10;
         }
         if(sum==num)
             printf("%d ",num);
        
    }

printf("\n");

return 0;
}