#include <stdio.h> 
#include <stdlib.h> 
struct Servitor 
{ 
int number; 
char name[10]; 
int money; 
int time; 
}; 

int main(void) 
{ 
int i,j,sum; 
struct Servitor output[5]; 

for(i=0;i<5;i++) 
{ printf("�п�J��%d����u�s��\n",i+1); 
scanf("%d",&output[i].number); 
printf("�п�J��%d����u�m�W\n",i+1); 
scanf("%s",&output[i].name); 
printf("�п�J��%d��򥻮��~\n",i+1); 
scanf("%d",&output[i].money); 
printf("�п�J��%d��u�@�ɶ�\n",i+1); 
scanf("%d",&output[i].time); 
} 
printf("�s�� �m�W �리�J \n"); 
printf("---------------------------------------------------------\n"); 
for(i=0;i<5;i++) 
{ 
sum=0; 
printf("%2d %6s ",output[i].number,output[i].name); 
sum=output[i].money*output[i].time; 
printf("%2d",sum); 

printf("\n"); 
} 
system("pause"); 
return 0; 
} 
