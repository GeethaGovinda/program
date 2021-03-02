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
		int flag=0,sindex;
        fp=fopen("empdb","rb+");
		printf("enter empid to search");
		scanf("%s",&search);
        for(int i=0;i<3;i++)
        {
				fread(&e1[i],sizeof(e1[i]),1,fp);
				if(strcmp(e1[i].empid,search)==0)
				{
					flag=1,sindex=i;
					printf("enter the new id ");
					scanf("%s",e1[sindex].empid);
					printf("enter the new name");
					scanf("%s",e1[sindex].ename);
					printf("enter the new company ");
					scanf("%s",e1[sindex].comp);
					fwrite(&e1[i],sizeof(e1[i],1,fp);
					break;
				}
		}
		if(flag==1)
		{
			printf("emp data is updated",);
			
		}
		else{
			printf("empid is not found");
		}
		fclose(fp);
}
