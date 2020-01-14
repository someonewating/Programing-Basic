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
void mydisplay(struct student* p, int n); /* ��ʾͨѶ¼ */ 
void mysearch(struct student* p, int n); /* ���� */ 
void mymodify(struct student* p, int n); /* �޸�ͨѶ¼ */ 
int myadd(struct student* p, int n); /* ����ͨѶ¼ */ 
int mydelete(struct student* p, int n); /* ɾ�� */ 
void mysort(struct student* p, int n); /* ���� */ 
void sch_num(struct student* p, int n); /* ��ѧ�Ų��� */ 
void sch_name(struct student* p, int n); /* ���������� */ 
void main()

{     char choose, yes_no;
     struct student record[N]; /* ���ͨѶ¼��Ϣ,�� 100 �� */
     int total=0; /* ͨѶ¼���� */
     do 
     { 
         myprint();       /* ��ʾ�˵� */
         printf("       ��ѡ��       ");
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
         default:             printf("\n           %c Ϊ�Ƿ�ѡ��!\n", choose);
         }         
           
         printf("\n                              Ҫ����ѡ����(Y/N)?");
         do 
         {
             yes_no = getchar();
         } 
         while (yes_no != 'Y' && yes_no != 'y' && yes_no != 'N' && yes_no != 'n');
     } 
     while (yes_no != 'Y'&& yes_no != 'y');
}

void myprint() {   // ��ʾ�˵���Ϣ
    printf("\n\n\n\n\n");
    printf("                                             \n");
    printf("        ������ѡ����(0--7)                 \n");
    printf("               1---����ͨѶ¼                \n");
    printf("               2---��ʾͨѶ¼                \n");
    printf("               3---��ѯͨѶ¼                \n");
    printf("               4---�޸�ͨѶ¼                \n");
    printf("               5---���ͨѶ¼              \n");
    printf("               6---ɾ��ͨѶ¼              \n");
    printf("               7---����ͨѶ¼                \n");
    printf("               0---�˳�                      \n");
    printf("                                             \n");
} 

    int mycreat(struct student* p, int n){// ����ѧ����Ϣ
        int i=0 ;
        int m ;
        printf("������Ҫ�����ѧ������(<%d):  ",n);
        scanf("%d",&m);
        while(i<m)
        {         
            printf("\n");
            printf("�������%d ����¼:\n",i+1);
            printf("ѧ��:");
            do
            {
                gets(p->num);
            }         
            while(strcmp(p->num,"")==0);
            printf("����:");
            gets(p->name);
            printf("�绰����:");
            gets(p->tel);
            p++;
            i++;
        }     
        return m ;
    } 
            void mydisplay(struct student* p, int n) {  //   ��ʾѧ����Ϣ
                printf("         ѧ��          ����            �绰����\n");
                while(n>0)
                {
                    printf("%23s%15s%15s\n",p->num,p->name,p->tel);
                    p++;
                    n--;
                }
            } 

            void mymodify(struct student* p, int n) {  // �޸�ѧ����Ϣ
                int i ;
                char nam[10];
                mydisplay(p,n);
                printf("\n ������Ҫ�޸ļ�¼������:");
                gets(nam);
                for(i=0;i<n;i++,p++)
                    if(strcmp(nam,p->name)==0)
                        break ;
                if(i==n)
                    printf("�޴���!\n");
                else
                {
                    printf("��������ȷ��ѧ��:");
                    do
                    {
                        gets(p->num);
                    }
                    while(strcmp(p->num,"")==0);
                    printf("��������ȷ������:");
                    gets(p->name);
                    printf("��������ȷ�ĵ绰����:");
                    gets(p->tel);
                }
            } 

                void mysearch(struct student* p, int n) {  // ����ָ��ѧ��
                    char c ;
                    mydisplay(p,n);
                    printf("\n ��ѧ�Ų�ѯ(h),���ǰ�������ѯ(m)?");
                    c = getchar();
                    if (c == 'h' || c == 'H')
                        sch_num(p, n);
                    else if (c == 'm' || c == 'M')
                        sch_name(p, n);
                    else
                        printf("\n �Ƿ��ַ�!\n");
                }

                void sch_num(struct student* p, int n) {//   ��ѧ�Ų�ѯ
                    int i,flag=0 ;
                    char nm[10];
                    printf("\n ������Ҫ��ѯ��¼��ѧ��:");
                    gets(nm);
                    for(i=0;i<n;i++)
                        if(strcmp(nm,p[i].num)==0)
                        {
                            printf("       ѧ��     ����     �绰����\n");
                            printf("%23s%15s%15s\n",p[i].num,p[i].name,p[i].tel);
                            flag=1 ;
                        }
                    if(flag==0)
                        printf("�޴���!\n");
                } 

                void sch_name(struct student* p, int n) {  // ��������ѯ
                    int i, flag = 0;
                    char nam[10];
                    printf("\n ������Ҫ��ѯ��¼������:");
                    gets(nam);
                    for (i = 0; i < n; i++)
                        if (strcmp(nam, p[i].name) == 0)
                        {
                            printf("     ѧ��     ����        �绰����\n");
                            printf("%23s%15s%15s\n", p[i].num, p[i].name, p[i].tel);
                            flag = 1;
                        }
                    if (flag == 0)
                        printf("�޴���!\n");
                }

                int myadd(struct student* p, int n) {  //  ����ѧ����Ϣ
                    int i=0 ;
                    char c ;
                    struct student t,*q ;
                    printf("���ǰ�ļ�¼��\n");
                    printf("           ѧ��             ����           �绰����\n");
                    i=0 ;/* ��ʾԭ�м�¼��Ϣ */
                    while(i<n)
                    {
                        printf("%23s%15s%15s\n",q->num,q->name,q->tel);
                        i++;
                        q++;
                    }
                    do
                    {
                        printf("�������¼�¼��ѧ�ţ�\n");
                        do
                        {
                            gets(t.num);
                        }
                        while(strcmp(t.num,"")==0);         /* ѧ�Ų���Ϊ�� */
                        printf("�������¼�¼�������� ");
                        gets(t.name);
                        printf("�������¼�¼�ĵ绰���룺 ");
                        gets(t.tel);
                        for(i=0;i<n;i++)
                            if(strcmp(t.num,(p+i)->num)==0||strcmp(t.tel,(p+i)->tel)==0)
                            {
                                printf("ѧ�Ż�绰������,Ҫ����������(Y/N)?");
                                c=getchar();
                                putchar('\n');
                                break ;
                            }                  /* �ҵ����û���ظ� */
                        if(i==n)
                        {

                                * (p + i) = t;
                                printf("��Ӻ�ļ�¼:\n");
                                printf("        ѧ��      ����          �绰����\n");
                                for (i = 0; i < n + 1; i++)
                                    printf("%23s%15s%15s\n", (p + i)->num, (p + i)->name, p[i].tel);
                                break;
                        }
                    }
                    while (c == 'y' || c == 'Y');
                    return n + 1;
                }

                int mydelete(struct student* p, int n) { //   ɾ��ѧ����Ϣ
                    int i,x ;
                    char c,nm[10],nam[10];
                    printf("ɾ��ǰ�ļ�¼��\n");
                    printf("           ѧ��             ����              �绰����\n");
                    for(i=0;i<n;i++)
                        printf("%23s%15s%15s\n",p[i].num,p[i].name,p[i].tel);
                    printf("��ѧ��ɾ��(h)�����ǰ�����ɾ��(m)?");
                    c=getchar();
                    if(c=='h'||c=='H')
                    {
                        printf("\n ������Ҫɾ����¼��ѧ�ţ�");
                        gets(nm);
                        for(x=0;x<n;x++)
                            if(strcmp(nm,p[x].name)==0)
                                break ;         /* ˵����ǰ����ѭ�����ҵ��� */
                        if(x<n)
                        {
                            for(i=x;i<n-1;i++)
                            {
                                p[i]=p[i+1];
                            }
                            printf("ɾ����ļ�¼��\n");
                            printf("        ѧ��          ����           �绰����\n");
                            for(i=0;i<n-1;i++)
                                printf("%23s%15s%15s\n",p[i].num,p[i].name,p[i].tel);
                        }
                        else
                        printf("�޴���\n");
                }
                else if(c == 'm' || c == 'M')
                    {
                        printf("\n ������Ҫɾ����¼��������");
                        gets(nam);
                        for (x = 0; x < n; x++)
                            if (strcmp(nam, p[x].name) == 0)
                                break;
                        if (x < n) { for (i = x; i < N - 1; i++)
                        {
                            p[i] = p[i + 1];
                        }
                        printf("ɾ����ļ�¼��\n");
                        printf("       ѧ��          ����          �绰����\n");
                        for (i = 0; i < n - 1; i++)
                            printf("%23s%15s%15s\n", p[i].num, p[i].name, p[i].tel);
                        }
                        else
                            printf("�޴���\n");
                    }
     else      printf("\n �Ƿ��ַ�\n");
                    return n - 1;
            }

            void mysort(struct student* p, int n) {  // ������
                int j,i,k ;
                char c1,c2 ;
                struct student temp ;
                printf("����ǰ�ļ�¼:\n");
                printf("          ѧ��           ����            �绰����\n");
                for(i=0;i<n;i++)
                    printf("%23s%15s%15s\n",p[i].num,p[i].name,p[i].tel);
                printf("��ѧ������(h)�����ǰ���������(m)?");
                    c1 = getchar();
                    if (c1 == 'h' || c1 == 'H')
                    {
                    printf("\n ����������s�������ǰ���������j��?");
                    c2 = getchar();         /* ���� */
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
                        printf("�����ļ�¼:\n");
                        printf("      ѧ��        ����        �绰����\n");
                        for (i = 0; i < n; i++)
                            printf("%23s%15s%15s\n", p[i].num, p[i].name, p[i].tel);
                    }         /* ���� */
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
                        printf("�����ļ�¼:\n");
                        printf("       ѧ��       ����        �绰����\n");
                        for (i = 0; i < n; i++)
                            printf("%23s%15s%15s\n", p[i].num, p[i].name, p[i].tel);
                    }
                    else printf("\n �Ƿ��ַ�\n");
                }
                    else if (c1 == 'm' || c1 == 'M')   /* ���������� */
                    {
                    printf("\n ����������s�������ǰ���������j��? ");
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
                        printf("�����ļ�¼:\n");
                        printf("     ѧ��        ����         �绰����\n");
                        for (i = 0; i < n; i++)
                            printf("%23s%15s%15s\n", p[i].num, p[i].name, p[i].tel);
                    }/* ���� */
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
                        printf("�����ļ�¼:\n");
                        printf("        ѧ��        ����       �绰����\n");
                        for (i = 0; i < n; i++)
                            printf("%23s%15s%15s\n", p[i].num, p[i].name, p[i].tel);
                    }
                    else printf("\n �Ƿ��ַ���\n");
                }
                    else printf("\n �Ƿ��ַ���\n");
            }