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
        fp=fopen("empdb","r+b");
                printf("\nenter empid to search\n");
                scanf("%s",search);
        fseek(fp,0,SEEK_SET);
        for(int i=0;i<3;i++)
        {
                                fread(&e1[i],sizeof(e1[i]),1,fp);
                                if(strcmp(e1[i].empid,search)==0)
                                {
                                        flag=1;
                                        printf("\n employee found\n ");
                                        strcpy(e1[i].empid,"\0");
					  strcpy(e1[i].ename,"\0");
					    strcpy(e1[i].comp,"\0");
					 fseek(fp,sizeof(e1[i]*(i),SEEK_SET);
                                        fwrite(&e1[i],sizeof(e1[i]),1,fp);
                                        break;
                                }
               
                }
		
        if(flag==1)
		{
			printf("emp data is deleted");
			
		}
		else{
			printf("empid is not found");
		}
		fclose(fp);
}
