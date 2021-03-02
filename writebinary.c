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
        fp=fopen("empdb","wb");
        for(int i=0;i<3;i++)
        {
                printf("\nenter emp id\n");
				scanf("%s",e1[i].empid);
                printf("\nenter ename\n");
                scanf("%s",e1[i].ename);
                printf("\nenter comp\n");
                scanf("%s",e1[i].comp);
                fwrite(&e1[i],sizeof(e1[i]),1,fp);
        }
 
fclose(fp);
}
 
