#include<stdio.h>
#include<string.h>
struct ad
{
    char name[30];
    char disease[30];
    int cabin,phone,age;
} x[200];
int n,i,j=0,a=0,sum=0,g,flag,num;
char username[30];
char password[12];
void read();
void add();
void view();
void search();
void edit();
int main()
{
   void read();
    int c,i,q;
    printf("Hospital Management System\n");
    int m,n;
    //making out the pattern
    for(m=1; m<=4; m++)
    {
        for(n=1; n<=5; n++)
            printf(" ");
        for(n=1; n<=m-1; n++)
        {
            printf(" ");
        }
        for(n=1; n<=4-m+1; n++)
        {
            if(n==4-m+1 || m==1 || m==4)
                printf("*");
            else
                printf(" ");
        }
        for(n=1; n<=4-m+1; n++)
        {
            if(n==1 ||m==1 || m==4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
printf("Enter your username:");
scanf("%s", &username);
printf("Enter your password:");
scanf("%s",&password);
if(strcmp(username, "Hms")==0){

if(strcmp(password,"123")==0){
          printf("\n welcome .Login Success!");
}else{
 printf("\n wrong password");
}
} else{
    printf(" \n user doesnt exist");
}
    while(c!=5)
    {
        printf("\n\n**Enter your choice**\n\n1. Add Information\n2. View Information\n3. Search\n4. Edit Information\n5. Exit\n\nOption=");
        scanf("%d",&c);//choice for option
        if(c==1)//add
        {
            system("cls");
            add();
        }
        else if(c==2)//view
        {
            system("cls");
            view();
        }
        else if(c==3)//search
        {
            system("cls");
            search();
        }
        else if(c==4)//edit
        {
            system("cls");
            edit();
        }
        else if(c==5)//exit
        {
            system("cls");
            printf("\n\n Thankyou For Visiting");
        }
        else
        {
            printf("\n\nInvalid input , try again by using valid inputs");
        }
        printf("\n\n");
    }
}
void add()
{
printf("\n\n");
printf("Already data inputed on the database =%d\n\n",num);//how many inputs
printf("How many entry do you want to add=\n");
scanf("%d",&n);
    sum=n+num;
for(i=num,j=0; i<sum; i++)
    {
    printf("\n");
   fflush(stdin);//making clear
    printf("Enter patient's Name = ");
        gets(x[i].name);
    printf("Enter disease = ");
        gets(x[i].disease);
    printf("Enter the age = ");
    scanf("%d",&x[i].age);
    printf("Enter cabin no = ");
    scanf("%d",&x[i].cabin);
    printf("Enter phone number = ");
   scanf("%d",&x[i].phone);
   printf("\n");
   j++;
   a++;
  num++;
    }
}
void view()
{
    for(i=0; i<num;i++)
    {
        printf("\n");
        printf("Serial Number=%d\n",i);
        printf("Name = ");
        puts(x[i].name);
        printf("Disease = ");
        puts(x[i].disease);
        printf("Cabin no = %d\nPhone number = %d\nAge=%d",x[i].cabin,x[i].phone,x[i].age);
        printf("\n\n");
    }
}
void edit()
{
    int q,p;
    printf("What do you want to edit ?\n");
    printf("Enter your option\n");
    printf("1.Name\n2.Disease\n3.Age\n4.Cabin\n5.Phone no.\n");
    printf("Option=");
    scanf("%d",&q);//option
    if(q<=5)
    {
        printf("Enter the serial no of that patient=(0-%d)=",num-1);
        scanf("%d",&p);//serial number
        if(p<num)
        {
            if(q==1)
            {
                printf("Enter the new name=");
                gets(x[p].name);
            }
            else if(q==2)
            {
                printf("Enter the new Disease=");
                gets(x[p].disease);
            }
            else if(q==3)
            {
                printf("Enter the new Age=");
                scanf("%d",&x[p].age);
            }
            else if(q==4)
            {
                printf("Enter the new Cabin no=");
                scanf("%d",&x[p].cabin);
            }
            else if(q==5)
            {
                printf("Enter the new Phone no =");
                scanf("%d",&x[p].phone);
            }
        }
        else
        {
            printf("\n\nInvalid Serial \nTry Again !!\n\n");
        }
    }
}
void search()
{
    int s,h,f;
    char u[100];
    printf("By what do you want to search ?\n");
    printf("1.Serial no.\n2.Name\n3.Disease\n4.Cabin no.\n5.Phone no.\n6.Age\n\nOption = ");
    scanf("%d",&h);
    if(h==1)
    {
        printf("Enter Serial number of the patient=");
        scanf("%d",&s);
        if(s<num)
        {
            printf("\n");
            printf("Serial Number=%d\n",s);
            printf("Name = ");
            puts(x[s].name);
            printf("Disease = ");
            puts(x[s].disease);
            printf("Cabin no = %d\nPhone number = %d\nAge = %d",x[s].cabin,x[s].phone,x[s].age);
            printf("\n\n");
        }
        else
            printf("\n\nNot Found\n\n");
    }
    else if(h==2)
    {
        int f=1;
        printf("Enter your name=");
        gets(u);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].name)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("\nName = ");
                puts(x[g].name);
                printf("\nDisease = ");
                puts(x[g].disease);
                printf("Cabin no = %d\nPhone number = %d\nAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }
        }
        if(f==1)
            printf("\nNot Found\n");
    }
    else if(h==3)
    {
        int f=1;
        printf("Enter Disease = ");
        gets(u);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].disease)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Disease = ");
                puts(x[g].disease);
                printf("Cabin no = %d\nPhone number = %d\nAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }
        }
        if(f==1)
            printf("\nNot Found\n");
    }
    else if(h==4)
    {
        int f=1;
        printf("Enter Cabin number = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].cabin)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Disease = ");
                puts(x[g].disease);
                printf("Cabin no = %d\nPhone number = %d\nAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }
        }
        if(f==1)
        printf("Not Found\n\n");
    }
    else if(h==5)
    {
        int f=1;
        printf("Enter Phone number = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].phone)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Disease = ");
                puts(x[g].disease);
                printf("Cabin no =%d\nPhone number =%d\nAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }
        }
        if(f==1)
            printf("Not Found");
    }
    else if(h==6)
    {
        int f=1;
        printf("Enter Age = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].age)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("\nDisease = ");
                puts(x[g].disease);
                printf("\nCabin no = %d\nPhone number = %d\nAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }
        }
        if(f==1)
            printf("Not Found\n\n");
    }
    else
   printf("\n\nInvalid input\n\n");
}

