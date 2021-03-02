
#include<stdio.h>
#include<string.h>
struct employee
{
char empid[10];
char ename[20];
char comp[20];
};
typedef struct employee emp;
 main()
{
        emp e1[10];
        FILE *fp;
        fp=fopen("empdb","r");
        for(int i=0;i<3;i++)
        {
				fread(&e1[i],sizeof(e1[i]),1,fp);
				printf("\n%s",e1[i].empid);
                printf("\t%s",e1[i].ename);
                printf("\t%s",e1[i].comp);
                
        }
 
fclose(fp);
}
 
