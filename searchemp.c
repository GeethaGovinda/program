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
		char search[10];
		int flag=0;
        fp=fopen("empdb","wb");
		printf("enter empid to search");
		scanf("%s",&search);
        for(int i=0;i<3;i++)
        {
				fread(&e1[i],sizeof(e1[i]),1,fp);
				if(e1[i].empid==search)
				{
					flag=1;
					break;
				}
		}
		if(flag==1)
		{
			printf("emp id is found %s\n",e1[i].ename);
		}
		else{
			printf("not found");
		}
		fclose(fp);
}
