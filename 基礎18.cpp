#include<stdio.h> 

#include<string.h> 

int main()

{

    char str[20]; 

    int i,num[256]={0}; 

	printf("              衡–计瞷Ω计               \n");

	printf("-------------------------------------------------\n");    

    printf("块硈﹃俱计");  

    scanf("%s",str);  

    for(i=0;i<strlen(str);i++) 

        num[(int)str[i]]++; 

    for(i=0;i<256;i++) 

        if(num[i]!=0)

            printf("才%c瞷%dΩ\n",(char)i,num[i]);

}
