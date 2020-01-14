#define  N   100 
#include  <stdio.h> 
#include  <string.h> 
#include  <conio.h> 
struct student 
{     
    char num[10];
    char name[10];
    char tel[10]; 
}; 

void myprint();
int mycreat(struct student* p, int n);
void mydisplay(struct student* p, int n); /* 显示通讯录 */ 
void mysearch(struct student* p, int n); /* 查找 */ 
void mymodify(struct student* p, int n); /* 修改通讯录 */ 
int myadd(struct student* p, int n); /* 增加通讯录 */ 
int mydelete(struct student* p, int n); /* 删除 */ 
void mysort(struct student* p, int n); /* 排序 */ 
void sch_num(struct student* p, int n); /* 按学号查找 */ 
void sch_name(struct student* p, int n); /* 按姓名查找 */ 
void main()

{     char choose, yes_no;
     struct student record[N]; /* 存放通讯录信息,共 100 条 */
     int total=0; /* 通讯录总数 */
     do 
     { 
         myprint();       /* 显示菜单 */
         printf("       请选择：       ");
         choose = getchar();
         switch (choose) 
         {
         case '1':
         total = mycreat(record, N);         break;
         case '2':         mydisplay(record, total);         break;
         case '3':         mysearch(record, total);         break;
         case '4':         mymodify(record, total);         break;
         case '5':         total = myadd(record, total);         break;
         case '6':         total = mydelete(record, total);         break;
         case '7':         mysort(record, total);         break;
         case '0':         break;
         default:             printf("\n           %c 为非法选项!\n", choose);
         }         
           
         printf("\n                              要继续选择吗(Y/N)?");
         do 
         {
             yes_no = getchar();
         } 
         while (yes_no != 'Y' && yes_no != 'y' && yes_no != 'N' && yes_no != 'n');
     } 
     while (yes_no != 'Y'&& yes_no != 'y');
}

void myprint() {   // 显示菜单信息
    printf("\n\n\n\n\n");
    printf("                                             \n");
    printf("        请输入选项编号(0--7)                 \n");
    printf("               1---创建通讯录                \n");
    printf("               2---显示通讯录                \n");
    printf("               3---查询通讯录                \n");
    printf("               4---修改通讯录                \n");
    printf("               5---添加通讯录              \n");
    printf("               6---删除通讯录              \n");
    printf("               7---排序通讯录                \n");
    printf("               0---退出                      \n");
    printf("                                             \n");
} 

    int mycreat(struct student* p, int n){// 输入学生信息
        int i=0 ;
        int m ;
        printf("请输入要输入的学生人数(<%d):  ",n);
        scanf("%d",&m);
        while(i<m)
        {         
            printf("\n");
            printf("请输入第%d 个记录:\n",i+1);
            printf("学号:");
            do
            {
                gets(p->num);
            }         
            while(strcmp(p->num,"")==0);
            printf("姓名:");
            gets(p->name);
            printf("电话号码:");
            gets(p->tel);
            p++;
            i++;
        }     
        return m ;
    } 
            void mydisplay(struct student* p, int n) {  //   显示学生信息
                printf("         学号          姓名            电话号码\n");
                while(n>0)
                {
                    printf("%23s%15s%15s\n",p->num,p->name,p->tel);
                    p++;
                    n--;
                }
            } 

            void mymodify(struct student* p, int n) {  // 修改学生信息
                int i ;
                char nam[10];
                mydisplay(p,n);
                printf("\n 请输入要修改记录的姓名:");
                gets(nam);
                for(i=0;i<n;i++,p++)
                    if(strcmp(nam,p->name)==0)
                        break ;
                if(i==n)
                    printf("无此人!\n");
                else
                {
                    printf("请输入正确的学号:");
                    do
                    {
                        gets(p->num);
                    }
                    while(strcmp(p->num,"")==0);
                    printf("请输入正确的姓名:");
                    gets(p->name);
                    printf("请输入正确的电话号码:");
                    gets(p->tel);
                }
            } 

                void mysearch(struct student* p, int n) {  // 查找指定学生
                    char c ;
                    mydisplay(p,n);
                    printf("\n 按学号查询(h),还是按姓名查询(m)?");
                    c = getchar();
                    if (c == 'h' || c == 'H')
                        sch_num(p, n);
                    else if (c == 'm' || c == 'M')
                        sch_name(p, n);
                    else
                        printf("\n 非法字符!\n");
                }

                void sch_num(struct student* p, int n) {//   按学号查询
                    int i,flag=0 ;
                    char nm[10];
                    printf("\n 请输入要查询记录的学号:");
                    gets(nm);
                    for(i=0;i<n;i++)
                        if(strcmp(nm,p[i].num)==0)
                        {
                            printf("       学号     姓名     电话号码\n");
                            printf("%23s%15s%15s\n",p[i].num,p[i].name,p[i].tel);
                            flag=1 ;
                        }
                    if(flag==0)
                        printf("无此人!\n");
                } 

                void sch_name(struct student* p, int n) {  // 按姓名查询
                    int i, flag = 0;
                    char nam[10];
                    printf("\n 请输入要查询记录的姓名:");
                    gets(nam);
                    for (i = 0; i < n; i++)
                        if (strcmp(nam, p[i].name) == 0)
                        {
                            printf("     学号     姓名        电话号码\n");
                            printf("%23s%15s%15s\n", p[i].num, p[i].name, p[i].tel);
                            flag = 1;
                        }
                    if (flag == 0)
                        printf("无此人!\n");
                }

                int myadd(struct student* p, int n) {  //  增加学生信息
                    int i=0 ;
                    char c ;
                    struct student t,*q ;
                    printf("添加前的记录：\n");
                    printf("           学号             姓名           电话号码\n");
                    i=0 ;/* 显示原有记录信息 */
                    while(i<n)
                    {
                        printf("%23s%15s%15s\n",q->num,q->name,q->tel);
                        i++;
                        q++;
                    }
                    do
                    {
                        printf("请输入新记录的学号：\n");
                        do
                        {
                            gets(t.num);
                        }
                        while(strcmp(t.num,"")==0);         /* 学号不能为空 */
                        printf("请输入新记录的姓名： ");
                        gets(t.name);
                        printf("请输入新记录的电话号码： ");
                        gets(t.tel);
                        for(i=0;i<n;i++)
                            if(strcmp(t.num,(p+i)->num)==0||strcmp(t.tel,(p+i)->tel)==0)
                            {
                                printf("学号或电话号码重,要重新输入吗(Y/N)?");
                                c=getchar();
                                putchar('\n');
                                break ;
                            }                  /* 找到最后，没有重复 */
                        if(i==n)
                        {

                                * (p + i) = t;
                                printf("添加后的记录:\n");
                                printf("        学号      姓名          电话号码\n");
                                for (i = 0; i < n + 1; i++)
                                    printf("%23s%15s%15s\n", (p + i)->num, (p + i)->name, p[i].tel);
                                break;
                        }
                    }
                    while (c == 'y' || c == 'Y');
                    return n + 1;
                }

                int mydelete(struct student* p, int n) { //   删除学生信息
                    int i,x ;
                    char c,nm[10],nam[10];
                    printf("删除前的记录：\n");
                    printf("           学号             姓名              电话号码\n");
                    for(i=0;i<n;i++)
                        printf("%23s%15s%15s\n",p[i].num,p[i].name,p[i].tel);
                    printf("按学号删除(h)，还是按姓名删除(m)?");
                    c=getchar();
                    if(c=='h'||c=='H')
                    {
                        printf("\n 请输入要删除记录的学号：");
                        gets(nm);
                        for(x=0;x<n;x++)
                            if(strcmp(nm,p[x].name)==0)
                                break ;         /* 说明提前结束循环，找到人 */
                        if(x<n)
                        {
                            for(i=x;i<n-1;i++)
                            {
                                p[i]=p[i+1];
                            }
                            printf("删除后的记录：\n");
                            printf("        学号          姓名           电话号码\n");
                            for(i=0;i<n-1;i++)
                                printf("%23s%15s%15s\n",p[i].num,p[i].name,p[i].tel);
                        }
                        else
                        printf("无此人\n");
                }
                else if(c == 'm' || c == 'M')
                    {
                        printf("\n 请输入要删除记录的姓名：");
                        gets(nam);
                        for (x = 0; x < n; x++)
                            if (strcmp(nam, p[x].name) == 0)
                                break;
                        if (x < n) { for (i = x; i < N - 1; i++)
                        {
                            p[i] = p[i + 1];
                        }
                        printf("删除后的记录：\n");
                        printf("       学号          姓名          电话号码\n");
                        for (i = 0; i < n - 1; i++)
                            printf("%23s%15s%15s\n", p[i].num, p[i].name, p[i].tel);
                        }
                        else
                            printf("无此人\n");
                    }
     else      printf("\n 非法字符\n");
                    return n - 1;
            }

            void mysort(struct student* p, int n) {  // 排序函数
                int j,i,k ;
                char c1,c2 ;
                struct student temp ;
                printf("排序前的记录:\n");
                printf("          学号           姓名            电话号码\n");
                for(i=0;i<n;i++)
                    printf("%23s%15s%15s\n",p[i].num,p[i].name,p[i].tel);
                printf("按学号排序(h)，还是按姓名排序(m)?");
                    c1 = getchar();
                    if (c1 == 'h' || c1 == 'H')
                    {
                    printf("\n 按升序排序（s），还是按降序排序（j）?");
                    c2 = getchar();         /* 升序 */
                    if (c2 == 's' || c2 == 'S')
                    {
                        for (i = 0; i < n - 1; i++)
                        {
                            k = i;
                            for (j = i; j < n; j++)
                                if (strcmp(p[k].name, p[j].name) < 0)
                                    k = j;
                            temp = p[k];
                            p[k] = p[i];
                            p[i] = temp;
                        }
                        printf("排序后的记录:\n");
                        printf("      学号        姓名        电话号码\n");
                        for (i = 0; i < n; i++)
                            printf("%23s%15s%15s\n", p[i].num, p[i].name, p[i].tel);
                    }         /* 降序 */
                    else if (c2 == 'j' || c2 == 'J')
                    {
                        for (i = 0; i < n - 1; i++)
                        {
                            k = i;
                            for (j = 0; j < n; j++)
                                if (strcmp(p[k].name, p[j].name) < 0)
                                    k = j;
                            temp = p[k];
                            p[k] = p[i];
                            p[i] = temp;
                        }
                        printf("排序后的记录:\n");
                        printf("       学号       姓名        电话号码\n");
                        for (i = 0; i < n; i++)
                            printf("%23s%15s%15s\n", p[i].num, p[i].name, p[i].tel);
                    }
                    else printf("\n 非法字符\n");
                }
                    else if (c1 == 'm' || c1 == 'M')   /* 按姓名排序 */
                    {
                    printf("\n 按升序排序（s），还是按降序排序（j）? ");
                    c2 = getchar();
                    if (c2 == 's' || c2 == 'S')
                    {
                        for (i = 0; i < n - 1; i++)
                        {
                            k = i;
                            for (j = 0; j < n; j++)
                                if (strcmp(p[k].name, p[j].name) < 0)
                                    k = j;
                            temp = p[k];
                            p[k] = p[i];
                            p[i] = temp;
                        }
                        printf("排序后的记录:\n");
                        printf("     学号        姓名         电话号码\n");
                        for (i = 0; i < n; i++)
                            printf("%23s%15s%15s\n", p[i].num, p[i].name, p[i].tel);
                    }/* 降序 */
                    else if (c2 == 'j' || c2 == 'J')
                    {
                        for (i = 0; i < n - 1; i++)
                        {
                            k = i;
                            for (j = i; j < n; j++)
                                if (strcmp(p[k].name, p[j].name) < 0)
                                    k = j;
                            temp = p[k];
                            p[k] = p[i];
                            p[i] = temp;
                        }
                        printf("排序后的记录:\n");
                        printf("        学号        姓名       电话号码\n");
                        for (i = 0; i < n; i++)
                            printf("%23s%15s%15s\n", p[i].num, p[i].name, p[i].tel);
                    }
                    else printf("\n 非法字符！\n");
                }
                    else printf("\n 非法字符！\n");
            }