
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

typedef struct voter_information
{
    char id[10];
    char name[30];
    char birth_date[15];
    char father_name[30];
    char mother_name[30];
    struct voter_information *next;
} node;

node *head;

char t_password[32];
int i;
int cunt1=0,cunt2=0,cunt3=0,cunt4=0,cunt5=0;

int main()
{
    system("COLOR 3f");
    system("cls");

    system("COLOR 3f");
    int a=177;
    int i=0;
    printf("Loading - ");
    for(i=0; i<40; i++)
    {
        printf("%c",a);
        Sleep(100);
    }


    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*******WELCOME TO MY PROJECT*******  \t\t\t\t\t\t\t\t\t\n");
    printf("\t\t\t ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **\n");
    printf("\t\t\t  **************************************************************\n");
    printf("\t\t\t  **\t\t\t\t\t\t\t      **\n");
    printf("\t\t\t  **\t\t\t\t\t\t\t      **\n");
    printf("\t\t\t  **\t\t        _VOTING SYSTEM_ \t\t      **\n");
    printf("\t\t\t  **\t\t     Name - Shakhawat Khan \t\t      **\n");
    printf("\t\t\t  **\t\t         \t\t                      **\n");
    printf("\t\t\t  **\t\t\t\t\t\t\t      **\n");
    printf("\t\t\t  **\t\t\t\t\t\t\t      **\n");
    printf("\t\t\t  **************************************************************\n");
    printf("\t\t\t ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **\n\n");
    printf("         \t\t- - - - - Please Enter One(1) For Logging Vote Main Loges - - - - -\n\n\n");
    int B;
    scanf("%d",&B);
    if(B==1)
    {
        main_loges();
    }


    return 0;
}

void main_loges()
{
    system("cls");

    printf("\n\n\n");
    printf("       \t\t\t\t1. FOR VOTE ENTRY    - - - - - |||\n");
    Sleep(300);
    printf("       \t\t\t\t2. FOR ADMIN PANEL   - - - - - |||\n");
    Sleep(300);
    printf("       \t\t\t\t3. FOR WINNER        - - - - - |||\n");
    Sleep(300);
    printf("       \t\t\t\t4. FOR EXIT          - - - - - |||\n\n\n\n\n");
    printf("    \t         ---------- - - - - BEFORE VOTING YOU HAVE TO BE VOTER- - - - -----------\n\n\n");
    Sleep(500);
    printf("    \t- - - - - - - - - - - - -If You Want To Give Vote Please Enter (1) - - - - - - - - - - - - -\n\n\n");
    int T;
    scanf("%d",&T);
    if(T==1)
    {
        voter_insert();
    }
    if(T==2)
    {
        admin();
    }
    if(T==3)
    {
        winner();
    }
    if(T==4)
    {
        exi();
    }

}


int cunt=0,count=0,R=3;
void voter_insert()
{
    node *temp;

    char name[25],birth_date[15],f_name[25],m_name[25],id[10];
    system("cls");
    printf("\n\n\n\n");
    printf("\tIF NATIONAL ID ,YOUR NAME, BIRTH DATE, YOUR FATHER NAME AND MOTHER NAME MATCH YOU CAN GIVE VOTE OTHERWISE NOT\n\n");
    Sleep(300);
    printf("\t\t\tIF YOU DO WRONG  (%d)  TIMES, THE PROGRAMME WILL BE STOP AUTOMATICALLY\n\n\n",R);
    Sleep(300);
    printf("\t\tPLEASE---,\n");
    Sleep(300);
    printf("\t\t\t\tENTER YOUR NATIONAL ID NUMBER   ");
    gets(id);
    gets(id);
    printf("\t\t\t\tENTER YOUR NAME                 ");
    gets(name);
    printf("\t\t\t\tENTER YOUR BIRTh DATE           ");
    gets(birth_date);
    printf("\t\t\t\tENTER YOUR FATHER NAME          ");
    gets(f_name);
    printf("\t\t\t\tENTER YOUR MOTHER NAME          ");
    gets(m_name);
    temp=(node *)malloc (sizeof(node));
    strcpy(temp->id,id);
    strcpy(temp->name,name);
    strcpy(temp->birth_date,birth_date);
    strcpy(temp->father_name,f_name);
    strcpy(temp->mother_name,m_name);
    temp->next=NULL;
    head=temp;
    while(temp!=NULL)
    {
        if((strcmp(temp->id,"171351901")==0 && strcmp(temp->name,"Tahera Akter")==0 && strcmp(temp->birth_date,"16-05-1997")==0 && strcmp(temp->father_name,"MD. Ismail")==0 && strcmp(temp->mother_name,"Parvin Akter")==0)||

                (strcmp(temp->id,"171351922")==0 && strcmp(temp->name,"Soarnali Islam Mukti")==0 && strcmp(temp->birth_date,"20-02-1998")==0 && strcmp(temp->father_name,"Md.Mohibul Islam")==0 && strcmp(temp->mother_name,"Mrs.Jambia Khatun")==0)||

                (strcmp(temp->id,"171351926")==0 && strcmp(temp->name,"Md.Saif Islam")==0 && strcmp(temp->birth_date,"21-08-1998")==0 && strcmp(temp->father_name,"Md.Anarul Islam")==0 && strcmp(temp->mother_name,"Mst.Bilkis Banu")==0)||

                (strcmp(temp->id,"171351837")==0 && strcmp(temp->name,"Mahadi Islam")==0 && strcmp(temp->birth_date,"23-11-1996")==0 && strcmp(temp->father_name,"MD.Rokib Uddin")==0 && strcmp(temp->mother_name,"MST.Marufa Begum")==0)||

                (strcmp(temp->id,"171351961")==0 && strcmp(temp->name,"Maheen Absar")==0 && strcmp(temp->birth_date,"18-10-1997")==0 && strcmp(temp->father_name,"Mujibur Rahman")==0 && strcmp(temp->mother_name,"Muhaimina Akther")==0)||

                (strcmp(temp->id,"171351799")==0 && strcmp(temp->name,"Md. Afzal Ismail")==0 && strcmp(temp->birth_date,"02-12-1997")==0 && strcmp(temp->father_name,"Md. Ismail Harun")==0 && strcmp(temp->mother_name,"Kamrun Nahar Begum")==0)||

                (strcmp(temp->id,"171351964")==0 && strcmp(temp->name,"Shaharia Chowdhury")==0 && strcmp(temp->birth_date,"31-01-1997")==0 && strcmp(temp->father_name,"Md.Jamal Chowdhury")==0 && strcmp(temp->mother_name,"Rehena Begum")==0)||

                (strcmp(temp->id,"152155712")==0 && strcmp(temp->name,"Shakhawat Khan")==0 && strcmp(temp->birth_date,"16-09-1995")==0 && strcmp(temp->father_name,"Sharif Khan")==0 && strcmp(temp->mother_name,"Mrs.Parveen Jahan")==0)||

                (strcmp(temp->id,"152155754")==0 && strcmp(temp->name,"Israt Jahan")==0 && strcmp(temp->birth_date,"30-08-1995")==0 && strcmp(temp->father_name,"Md.Nur Nabi")==0  && strcmp(temp->mother_name,"Mrs.")==0)||

                (strcmp(temp->id,"171351831")==0 && strcmp(temp->name,"Sajidur Rahman")==0 && strcmp(temp->birth_date,"15-04-1999")==0 && strcmp(temp->father_name,"Lutfor Rahman")==0 && strcmp(temp->mother_name,"Nur Jahan Parvin")==0)||

                (strcmp(temp->id,"171351806")==0 && strcmp(temp->name,"Sabikun Nahar Bristy")==0 && strcmp(temp->birth_date,"13-09-1997")==0 && strcmp(temp->father_name,"Late MD.Humayun Kabir Howlader")==0 && strcmp(temp->mother_name,"Lovely Akhter")==0)||

                (strcmp(temp->id,"171351985")==0 && strcmp(temp->name,"Zubayer Alam")==0 && strcmp(temp->birth_date,"29-09-1998")==0 && strcmp(temp->father_name,"Jahangir Hossain Khan")==0 && strcmp(temp->mother_name,"Kamrun Nahar Shewly")==0)||

                (strcmp(temp->id,"171351838")==0 && strcmp(temp->name,"Ahsanul Hoque Sakib")==0 && strcmp(temp->birth_date,"15-06-1998")==0 && strcmp(temp->father_name,"Akramul Hoque")==0 && strcmp(temp->mother_name,"Asma Begum")==0)||

                (strcmp(temp->id,"171351927")==0 && strcmp(temp->name,"Md. Emon Ali")==0 && strcmp(temp->birth_date,"21-07-1998")==0 && strcmp(temp->father_name,"Md. Mahmudur Rahman")==0 && strcmp(temp->mother_name,"Mst. Momotaj Begom")==0)||

                (strcmp(temp->id,"171351836")==0 && strcmp(temp->name,"Md Ashikur Rahman Khan")==0 && strcmp(temp->birth_date,"15-08-1998")==0 && strcmp(temp->father_name,"Md Saiful Islam Khan")==0 && strcmp(temp->mother_name,"Afroza Khatun")==0)||

                (strcmp(temp->id,"171351826")==0 && strcmp(temp->name,"Tamanna Sultana Eva")==0 && strcmp(temp->birth_date,"13-01-1998")==0 && strcmp(temp->father_name,"Md Abdus Saleque")==0 && strcmp(temp->mother_name,"Rehana Pervin")==0)||

                (strcmp(temp->id,"171351906")==0 && strcmp(temp->name,"Zihadul Islam")==0 && strcmp(temp->birth_date,"18-11-1997")==0 && strcmp(temp->father_name,"Md. Oziullah")==0 && strcmp(temp->mother_name,"Farjana Begum")==0)||

                (strcmp(temp->id,"171351819")==0 && strcmp(temp->name,"MD. Ainun Nishad Rahat")==0 && strcmp(temp->birth_date,"05-08-1997")==0 && strcmp(temp->father_name,"MD. Matiar Rahman")==0 && strcmp(temp->mother_name,"MST. Kajol Rekha")==0)||

                (strcmp(temp->id,"10000019")==0 && strcmp(temp->name,"Md.Sumon")==0 && strcmp(temp->birth_date,"11-12-1992")==0 && strcmp(temp->father_name,"Md.Mostafizur")==0 && strcmp(temp->mother_name,"Mrs.Rajvi")==0)||

                (strcmp(temp->id,"10000020")==0 && strcmp(temp->name,"Md.Tarikul")==0 && strcmp(temp->birth_date,"11-11-1991")==0 && strcmp(temp->father_name,"Md.Delower")==0 && strcmp(temp->mother_name,"Mrs.Sharmin")==0)||

                (strcmp(temp->id,"10000021")==0 && strcmp(temp->name,"Md.Nishan")==0 && strcmp(temp->birth_date,"17-05-1994")==0 && strcmp(temp->father_name,"Md.Juel")==0 && strcmp(temp->mother_name,"Mrs.khusi")==0)||

                (strcmp(temp->id,"10000022")==0 && strcmp(temp->name,"Md.Shamim")==0 && strcmp(temp->birth_date,"19-02-1991")==0 && strcmp(temp->father_name,"Md.Mozibor")==0 && strcmp(temp->mother_name,"Mrs.Layla")==0)||

                (strcmp(temp->id,"10000023")==0 && strcmp(temp->name,"Md.Tamsel")==0 && strcmp(temp->birth_date,"27-07-1987")==0 && strcmp(temp->father_name,"Md.Jamal")==0 && strcmp(temp->mother_name,"Mrs.Tasmin")==0)||

                (strcmp(temp->id,"10000024")==0 && strcmp(temp->name,"Md.Khalid")==0 && strcmp(temp->birth_date,"16-12-1971")==0 && strcmp(temp->father_name,"Md.Khalil")==0 && strcmp(temp->mother_name,"Mrs.Rafiea")==0)||

                (strcmp(temp->id,"10000025")==0 && strcmp(temp->name,"Md.Fahim")==0 && strcmp(temp->birth_date,"30-08-1980")==0 && strcmp(temp->father_name,"Md.Fizur")==0 && strcmp(temp->mother_name,"Mrs.Kajuli")==0)||

                (strcmp(temp->id,"10000026")==0 && strcmp(temp->name,"Md.zahid")==0 && strcmp(temp->birth_date,"03-07-1975")==0 && strcmp(temp->father_name,"Md.Jobbar")==0 && strcmp(temp->mother_name,"Mrs.sherin")==0)||

                (strcmp(temp->id,"10000027")==0 && strcmp(temp->name,"Anjan")==0 && strcmp(temp->birth_date,"13-04-1982")==0 && strcmp(temp->father_name,"Gopal")==0 && strcmp(temp->mother_name,"Mrs.Bithi")==0)||

                (strcmp(temp->id,"10000028")==0 && strcmp(temp->name,"Md.Ahjad")==0 && strcmp(temp->birth_date,"09-09-1978")==0 && strcmp(temp->father_name,"Md.Motin")==0 && strcmp(temp->mother_name,"Mrs.Rabeya")==0)||

                (strcmp(temp->id,"10000029")==0 && strcmp(temp->name,"Md.Saharu")==0 && strcmp(temp->birth_date,"01-07-1978")==0 && strcmp(temp->father_name,"Md.Haydar")==0 && strcmp(temp->mother_name,"Mrs.Ferdu")==0)||

                (strcmp(temp->id,"10000030")==0  && strcmp(temp->name,"Md.Rasel")==0 && strcmp(temp->birth_date,"02-05-1981")==0 && strcmp(temp->father_name,"Md.Bador")==0 && strcmp(temp->mother_name,"Mrs.Shammi")==0)||

                (strcmp(temp->id,"10000031")==0 && strcmp(temp->name,"Md.Suzon")==0 && strcmp(temp->birth_date,"21-01-1989")==0 && strcmp(temp->father_name,"Md.Mohaiminul")==0 && strcmp(temp->mother_name,"Mrs.Fanci")==0)||

                (strcmp(temp->id,"10000032")==0 && strcmp(temp->name,"Md.Rifat")==0 && strcmp(temp->birth_date,"22-02-1988")==0 && strcmp(temp->father_name,"Md.Hasem")==0 && strcmp(temp->mother_name,"Mrs.Jorina")==0)||

                (strcmp(temp->id,"10000033")==0 && strcmp(temp->name,"Mrs.Anu")==0 && strcmp(temp->birth_date,"19-02-1976")==0 && strcmp(temp->father_name,"Md.Taher")==0 && strcmp(temp->mother_name,"Mrs.Rumpa")==0)||

                (strcmp(temp->id,"10000034")==0 && strcmp(temp->name,"Mrs.Rimu")==0 && strcmp(temp->birth_date,"29-21-1977")==0 && strcmp(temp->father_name,"Md.Muktar")==0 && strcmp(temp->mother_name,"Mrs.Jasmin")==0)||

                (strcmp(temp->id,"10000035")==0 && strcmp(temp->name,"Mrs.Khusi")==0 && strcmp(temp->birth_date,"27-23-1997")==0 && strcmp(temp->father_name,"Md.Sajjad")==0 && strcmp(temp->mother_name,"Mrs.Nazmin")==0)||

                (strcmp(temp->id,"10000036")==0 && strcmp(temp->name,"Mrs.Santona")==0 && strcmp(temp->birth_date,"17-10-1978")==0 && strcmp(temp->father_name,"Md.Salek")==0 && strcmp(temp->mother_name,"Mrs.Parul")==0)||

                (strcmp(temp->id,"10000037")==0 && strcmp(temp->name,"Mrs.Nila")==0 && strcmp(temp->birth_date,"12-03-1979")==0 && strcmp(temp->father_name,"Md.Tahidul")==0 && strcmp(temp->mother_name,"Mrs.Monira")==0)||

                (strcmp(temp->id,"10000038")==0 && strcmp(temp->name,"Mrs.Rinki")==0 && strcmp(temp->birth_date,"15-11-1972")==0 && strcmp(temp->father_name,"Md.Anisul")==0 && strcmp(temp->mother_name,"Mrs.Kobita")==0)||

                (strcmp(temp->id,"10000039")==0 && strcmp(temp->name,"Mrs.Antora")==0 && strcmp(temp->birth_date,"11-10-1970")==0 && strcmp(temp->father_name,"Md.Mofiz")==0 && strcmp(temp->mother_name,"Mrs.Simu")==0)||

                (strcmp(temp->id,"10000040")==0 && strcmp(temp->name,"Mrs.Tumpa")==0 && strcmp(temp->birth_date,"12-11-1971")==0 && strcmp(temp->father_name,"Md.Jayonto")==0 && strcmp(temp->mother_name,"Mrs.Nisi")==0)||

                (strcmp(temp->id,"10000041")==0 && strcmp(temp->name,"Md.Titu")==0 && strcmp(temp->birth_date,"02-09-1990")==0 && strcmp(temp->father_name,"Md.Hafiz")==0 && strcmp(temp->mother_name,"Mrs.Munni")==0)||

                (strcmp(temp->id,"10000042")==0 && strcmp(temp->name,"Md.Tipu")==0 && strcmp(temp->birth_date,"03-06-1989")==0 && strcmp(temp->father_name,"Md.Sadek")==0 && strcmp(temp->mother_name,"Mrs.Mouli")==0)||

                (strcmp(temp->id,"10000043")==0 && strcmp(temp->name,"Mrs.Anni")==0 && strcmp(temp->birth_date,"09-13-1992")==0 && strcmp(temp->father_name,"Md.Sohel")==0 && strcmp(temp->mother_name,"Mrs.Rimu")==0)||

                (strcmp(temp->id,"10000044")==0 && strcmp(temp->name,"Mrs.Sudha")==0 && strcmp(temp->birth_date,"14-03-1972")==0 && strcmp(temp->father_name,"Md.Abdul Wahab")==0 && strcmp(temp->mother_name,"Mrs.Ayesa")==0)||

                (strcmp(temp->id,"10000045")==0 && strcmp(temp->name,"Mrs.Mou")==0 && strcmp(temp->birth_date,"17-10-1972")==0 && strcmp(temp->father_name,"Md.Moksed")==0 && strcmp(temp->mother_name,"Mrs.Nowsin")==0)||

                (strcmp(temp->id,"10000046")==0 && strcmp(temp->name,"Md.Sajal")==0 && strcmp(temp->birth_date,"21-11-1983")==0 && strcmp(temp->father_name,"Md.Abul")==0 && strcmp(temp->mother_name,"Mrs.Nila")==0)||

                (strcmp(temp->id,"10000047")==0 && strcmp(temp->name,"Md.Borhan")==0 && strcmp(temp->birth_date,"11-11-1992")==0 && strcmp(temp->father_name,"Md.Mokles")==0 && strcmp(temp->mother_name,"Mrs.Salina")==0)||

                (strcmp(temp->id,"10000048")==0 && strcmp(temp->name,"Md.Rahad")==0 && strcmp(temp->birth_date,"10-03-1995")==0 && strcmp(temp->father_name,"Md.Badsha")==0 && strcmp(temp->mother_name,"Mrs.Tina")==0)||

                (strcmp(temp->id,"10000049")==0 && strcmp(temp->name,"Md.Sorif")==0 && strcmp(temp->birth_date,"31-12-1986")==0 && strcmp(temp->father_name,"Md.Mohir")==0 && strcmp(temp->mother_name,"Mrs.Tamanna")==0)||

                (strcmp(temp->id,"10000050")==0 && strcmp(temp->name,"Md.Nayon")==0 && strcmp(temp->birth_date,"17-01-1993")==0 && strcmp(temp->father_name,"Md.Bakul")==0 && strcmp(temp->mother_name,"Nitu")==0))

        {

            cunt++;
            if(cunt>50)
            {
                not_again();
                break;
            }
            voting();
        }

        else
        {
            R--;
            count++;
            if(count == 3)
            {
                stop();
                break;
            }
            printf("\n\n\n\n");
            printf("\t\tYou voter ID or NAME or DATE OF BIRTH or FATHER'S NAME is wrong\n\n");
            Sleep(300);
            printf("\t\t\t\t\tPlease Re Enter\n\n");
            Sleep(300);
            system("pause");
            Sleep(300);
            main_loges();
        }
        temp=temp->next;
    }

}



void voting()
{
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t        * * * * *  List of the Candidates * * * * *     \n\n\n");
    Sleep(300);
    printf("\t\t\t NAME - - - - - - - - - - - - - - - SYMBOL\n\n");
    Sleep(300);
    printf("\t\t\t 1. Sheikh Hasina       -->            1. Boat\n");
    Sleep(300);
    printf("\t\t\t 2. Begum Khaleda Zia   -->            2. Paddy\n");
    Sleep(300);
    printf("\t\t\t 3. Sajib Wazed joy     -->            3. Jack_fruit\n");
    Sleep(300);
    printf("\t\t\t 4. Tarek Rahman        -->            4. Mango\n");
    Sleep(300);
    printf("\t\t\t 5. Ershad              -->            5. Langol\n\n\n");


    int B,j;
    printf("\t\t\t Please--,\n");
    printf("\t\t\t\t   Enter Your Choice    ");
    for(j=1; j<=1; j++)
    {
        scanf("%d",&B);

        if(B==1)
        {
            cunt1++;
        }
        if(B==2)
        {
            cunt2++;
        }
        if(B==3)
        {
            cunt3++;
        }
        if(B==4)
        {
            cunt4++;
        }
        if(B==5)
        {
            cunt5++;
        }
        if(B!=1 && B!=2 && B!=3 && B!=4 && B!=5)
        {
            printf("\t\t\t Your vote is Invalid\n");
            main_loges();
        }
    }
    int R;
    system("cls");

    printf("\n\n\n\n");
    printf("\t\t\t If You Want To See Present Winner Enter One (1) OR\n\n\n \t\t\t\t\tZero(0) For Main Loges\n\n\n");
    scanf("%d",&R);
    if(R==1)
    {
        winner();
    }
    if(R!=1)
    {
        main_loges();
    }

}


void admin()
{

    printf("\n\n\n\n");
    printf("\t\t\tEnter Password To Unlock Admin Panel\n\n");
    getpass();
    if(strcmp("19735555",t_password)==0)
    {
        show();
    }
    else
    {
        printf("Wrong Password\n");
    }
}

void show()
{
    system("cls");

    printf("\n\n\n");
    printf("\t\t\t   How Many Votes Who Got\n\n\n");
    Sleep(500);
    printf("\t\t\t   Sheikh Hasina got      %d  votes\n",cunt1);
    Sleep(500);
    printf("\t\t\t   Begum Khaleda Zia got  %d  votes\n",cunt2);
    Sleep(500);
    printf("\t\t\t   Sajib Wazed Joy got    %d  votes\n",cunt3);
    Sleep(500);
    printf("\t\t\t   Tarek Rahman got       %d  votes\n",cunt4);
    Sleep(500);
    printf("\t\t\t   Ershad got             %d  votes\n\n\n",cunt5);
    Sleep(500);

    int R;
    printf("\t\t\t Enter One(1) For Main Loges OR\n\n\n \t\t\t\tZero(0) For Exit\n");
    scanf("%d",&R);
    if(R==1)
    {
        main_loges();
    }
    else
    {
        exi();
    }


}


void winner()
{
    FILE *fpt;
    fpt=fopen("winner.txt","w+");

    system("cls");

    printf("\n\n\n\n");


    if(cunt1>cunt2 && cunt1>cunt3 && cunt1>cunt4 && cunt1>cunt5 )
    {
        printf("\t\t\tThe present Winner Person Is Sheikh Hasina and got %d votes\n\n\n\n\n",cunt1);
        fprintf(fpt,"The present Winner Person Is Hasina and got %d votes",cunt1);
    }


    if(cunt1==cunt2 && cunt1>cunt3 && cunt1>cunt4 && cunt1>cunt5 )
    {
        printf("\t\t\tThe present situation is draw and Sheikh Hasina got %d votes also Khaleda Zia got %d votes.By toss Sheikh Hasina wins\n\n\n\n\n",cunt1,cunt2);
        fprintf(fpt,"The present situation is draw and Sheikh Hasina got %d votes also Khaleda Zia got %d votes.By toss Sheikh Hasina wins",cunt1,cunt2);
    }



    if(cunt1>cunt2 && cunt1==cunt3 && cunt1>cunt4 && cunt1>cunt5 )
    {
        printf("\t\t\tThe present situation is draw and Sheikh Hasina got %d votes also Joy got %d votes.By toss Sheikh Hasina wins\n\n\n\n\n",cunt1,cunt3);
        fprintf(fpt,"The present situation is draw and Sheikh Hasina got %d votes also Joy got %d votes.By toss Sheikh Hasina wins",cunt1,cunt3);
    }


    if(cunt1>cunt2 && cunt1>cunt3 && cunt1==cunt4 && cunt1>cunt5 )
    {
        printf("\t\t\tThe present situation is draw and Sheikh Hasina got %d votes also Tarek Zia got %d votes.By toss Sheikh Hasina wins\n\n\n\n\n",cunt1,cunt4);
        fprintf(fpt,"The present situation is draw and Sheikh Hasina got %d votes also Tarek Zia got %d votes.By toss Sheikh Hasina wins",cunt1,cunt4);
    }


    if(cunt1>cunt2 && cunt1>cunt3 && cunt>cunt4 && cunt1==cunt5 )
    {
        printf("\t\t\tThe present situation is draw and Sheikh Hasina got %d votes also Ershad got %d votes.By toss Sheikh Hasina wins\n\n\n\n\n",cunt1,cunt5);
        fprintf(fpt,"The present situation is draw and Sheikh Hasina got %d votes also Ershad got %d votes.By toss Sheikh Hasina wins",cunt1,cunt5);
    }


    if(cunt1==cunt2 && cunt1==cunt3 && cunt1>cunt4 && cunt1>cunt5 )
    {
        printf("\t\t\tThe present situation is draw and Sheikh Hasina got %d votes, Khaleda zia got %d votes also Joy got %d votes.By toss Sheikh Hasina wins\n\n\n\n\n",cunt1,cunt2,cunt3);
        fprintf(fpt,"The present situation is draw and Sheikh Hasina got %d votes, Khaleda zia got %d votes also Joy got %d votes.By toss Sheikh Hasina wins",cunt1,cunt2,cunt3);
    }


    if(cunt1==cunt2 && cunt1==cunt3 && cunt1==cunt4 && cunt1>cunt5 )
    {
        printf("\t\t\tThe present situation is draw and Sheikh Hasina got %d votes, Khaleda zia got %d votes, Joy got %d votes also tarek got %d votes.By toss Sheikh Hasina wins\n\n\n\n\n",cunt1,cunt2,cunt3,cunt4);
        fprintf(fpt,"The present situation is draw and Sheikh Hasina got %d votes, Khaleda zia got %d votes, Joy got %d votes also tarek got %d votes.By toss Sheikh Hasina wins",cunt1,cunt2,cunt3,cunt4);
    }


    if(cunt1==cunt2 && cunt1==cunt3 && cunt1==cunt4 && cunt1==cunt5 )
    {
        printf("\t\t\tThe present situation is draw and Sheikh Hasina got %d votes, Khaleda zia got %d votes, Joy got %d votes, tarek got %d votes also Ershad got %d votes.By toss Sheikh Hasina wins\n\n\n\n\n",cunt1,cunt2,cunt3,cunt4,cunt5);
        fprintf(fpt,"The present situation is draw and Sheikh Hasina got %d votes, Khaleda zia got %d votes, Joy got %d votes, tarek got %d votes also Ershad got %d votes.By toss Sheikh Hasina wins",cunt1,cunt2,cunt3,cunt4,5);
    }


    if(cunt2>cunt1 && cunt2>cunt3 && cunt2>cunt4 && cunt2>cunt5 )
    {
        printf("\t\t\tThe present Winner Person Is Khaleda zia and got %d votes\n\n\n\n\n",cunt2);
        fprintf(fpt,"The present Winner Person Is Khaleda Zia and got %d votes",cunt2);
    }


    if(cunt2==cunt1 && cunt2>cunt3 && cunt2>cunt4 && cunt2>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and Khaleda zia got %d votes also Sheikh Hasina got %d votes. By toss khaleda zia wins\n\n\n\n\n",cunt2,cunt1);
        fprintf(fpt,"The present situation Is draw and Khaleda zia got %d votes also Sheikh Hasina got %d votes.By toss khaleda zia wins",cunt2,cunt1);
    }



    if(cunt2>cunt1 && cunt2==cunt3 && cunt2>cunt4 && cunt2>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and Khaleda zia got %d votes also joy got %d votes. By toss khaleda zia wins\n\n\n\n\n",cunt2,cunt3);
        fprintf(fpt,"The present situation Is draw and Khaleda zia got %d votes also joy got %d votes.By toss khaleda zia wins",cunt2,cunt3);
    }


    if(cunt2>cunt1 && cunt2>cunt3 && cunt2==cunt4 && cunt2>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and Khaleda zia got %d votes also Tarek got %d votes. By toss khaleda zia wins\n\n\n\n\n",cunt2,cunt4);
        fprintf(fpt,"The present situation Is draw and Khaleda zia got %d votes also Tarek got %d votes.By toss khaleda zia wins",cunt2,cunt4);
    }


    if(cunt2>cunt1 && cunt2>cunt3 && cunt2>cunt4 && cunt2==cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and Khaleda zia got %d votes also Ershad got %d votes. By toss khaleda zia wins\n\n\n\n\n",cunt2,cunt5);
        fprintf(fpt,"The present situation Is draw and Khaleda zia got %d votes also Ershad got %d votes.By toss khaleda zia wins",cunt2,cunt5);
    }


    if(cunt2==cunt1 && cunt2==cunt3 && cunt2>cunt4 && cunt2>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and Khaleda zia got %d votes, Sheikh Hasina got %d votes also joy got %d votes. By toss khaleda zia wins\n\n\n\n\n",cunt2,cunt1,cunt3);
        fprintf(fpt,"The present situation Is draw and Khaleda zia got %d votes, Sheikh Hasina got %d votes also joy got %d votes.By toss khaleda zia wins",cunt2,cunt1,cunt3);
    }



    if(cunt2==cunt1 && cunt2==cunt3 && cunt2==cunt4 && cunt2>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and Khaleda zia got %d votes, Sheikh Hasina got %d votes, joy got %d votes also tarek got %d votes. By toss khaleda zia wins\n\n\n\n\n",cunt2,cunt1,cunt3,cunt4);
        fprintf(fpt,"The present situation Is draw and Khaleda zia got %d votes, Sheikh Hasina got %d votes, joy got %d votes also tarek got %d votes.By toss khaleda zia wins",cunt2,cunt1,cunt3,cunt4);
    }




    if(cunt2==cunt1 && cunt2==cunt3 && cunt2==cunt4 && cunt2==cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and Khaleda zia got %d votes, Sheikh Hasina got %d votes, joy got %d votes, tarek got %d votes also Ershad got %d votes. By toss khaleda zia wins\n\n\n\n\n",cunt2,cunt1,cunt3,cunt4,cunt5);
        fprintf(fpt,"The present situation Is draw and Khaleda zia got %d votes, Sheikh Hasina got %d votes, joy got %d votes tarek got %d votes also Ershad got %d votes.By toss khaleda zia wins",cunt2,cunt1,cunt3,cunt4,cunt5);
    }


    if(cunt3>cunt1 && cunt3>cunt2 && cunt3>cunt4 && cunt3>cunt5 )
    {
        printf("\t\t\tThe present Winner Person Is joy and got %d votes\n\n\n\n\n",cunt3);
        fprintf(fpt,"The present Winner Person Is joy and got %d votes",cunt3);
    }


    if(cunt3==cunt1 && cunt3>cunt2 && cunt3>cunt4 && cunt3>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and joy got %d votes also Sheikh Hasina got %d votes. By toss joy wins.\n\n\n\n\n",cunt3,cunt1);
        fprintf(fpt,"The present situation Is draw and joy got %d votes also Sheikh Hasina got %d votes.By toss joy wins",cunt3,cunt1);
    }


    if(cunt3>cunt1 && cunt3==cunt2 && cunt3>cunt4 && cunt3>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and joy got %d votes also Khaleda Zia got %d votes.By toss joy wins\n\n\n\n\n",cunt3,cunt2);
        fprintf(fpt,"The present situation Is draw and joy got %d votes also Khaleda Zia got %d votes.By toss joy wins",cunt3,cunt2);
    }


    if(cunt3>cunt1 && cunt3>cunt2 && cunt3==cunt4 && cunt3>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and joy got %d votes also Tarek got %d votes.By toss joy wins\n\n\n\n\n",cunt3,cunt4);
        fprintf(fpt,"The present situation Is draw and joy got %d votes also Tarek got %d votes.By toss joy wins",cunt3,cunt4);
    }


    if(cunt3>cunt1 && cunt3>cunt2 && cunt3>cunt4 && cunt3==cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and joy got %d votes also Ershad got %d votes.By toss joy wins\n\n\n\n\n",cunt3,cunt5);
        fprintf(fpt,"The present situation Is draw and joy got %d votes also Ershad got %d votes.By toss joy wins",cunt3,cunt5);
    }


    if(cunt3==cunt1 && cunt3==cunt2 && cunt3>cunt4 && cunt3>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and joy got %d votes, Sheikh Hasina got %d votes also Khaleda got %d votes.By toss joy wins\n\n\n\n\n",cunt3,cunt1,cunt2);
        fprintf(fpt,"The present situation Is draw and joy got %d votes, Sheikh Hasina got %d votes also Khaleda got %d votes.By toss joy wins",cunt3,cunt1,cunt2);
    }


    if(cunt3==cunt1 && cunt3==cunt2 && cunt3==cunt4 && cunt3>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and joy got %d votes, Sheikh Hasina got %d votes, Khaleda zia  got %d votes also tarek got %d votes.By toss joy wins\n\n\n\n\n",cunt3,cunt1,cunt2,cunt4);
        fprintf(fpt,"The present situation Is draw and joy got %d votes, Sheikh Hasina got %d votes, Khaleda zia  got %d votes also tarek got %d votes.By toss joy wins",cunt3,cunt1,cunt2,cunt4);
    }



    if(cunt3==cunt1 && cunt3==cunt2 && cunt3==cunt4 && cunt3==cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and joy got %d votes, Sheikh Hasina got %d votes, Khaleda zia  got %d votes, tarek got %d votes also Ershad got %d votes.By toss joy wins\n\n\n\n\n",cunt3,cunt1,cunt2,cunt4,cunt5);
        fprintf(fpt,"The present situation Is draw and joy got %d votes, Sheikh Hasina got %d votes, Khaleda zia  got %d votes, tarek got %d votes also Ershad got %d votes.By toss joy wins",cunt3,cunt1,cunt2,cunt4,cunt5);
    }


    if(cunt4>cunt1 && cunt4>cunt2 && cunt4>cunt3 && cunt4>cunt5 )
    {
        printf("\t\t\tThe present Winner Person Is tarek and got %d votes\n\n\n\n\n",cunt4);
        fprintf(fpt,"The present Winner Person Is tarek and got %d votes",cunt4);
    }


    if(cunt4==cunt1 && cunt4>cunt2 && cunt4>cunt3 && cunt4>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and tarek and got %d votes also sheikh hasina got %d votes. By toss tarek wins.\n\n\n\n\n",cunt4,cunt1);
        fprintf(fpt,"The present situation Is draw and tarek and got %d votes also sheikh hasina got %d votes. By toss tarek wins",cunt4,cunt1);
    }


    if(cunt4>cunt1 && cunt4==cunt2 && cunt4>cunt3 && cunt4>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and tarek and got %d votes also Khaleda Zia got %d votes. By toss tarek wins.\n\n\n\n\n",cunt4,cunt2);
        fprintf(fpt,"The present situation Is draw and tarek and got %d votes also Khaleda zia got %d votes. By toss tarek wins",cunt4,cunt2);
    }

    if(cunt4>cunt1 && cunt4>cunt2 && cunt4==cunt3 && cunt4>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and tarek and got %d votes also joy got %d votes. By toss tarek wins.\n\n\n\n\n",cunt4,cunt3);
        fprintf(fpt,"The present situation Is draw and tarek and got %d votes also joy got %d votes. By toss tarek wins",cunt4,cunt3);
    }


    if(cunt4>cunt1 && cunt4>cunt2 && cunt4>cunt3 && cunt4==cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and tarek and got %d votes also Ershad got %d votes. By toss tarek wins.\n\n\n\n\n",cunt4,cunt5);
        fprintf(fpt,"The present situation Is draw and tarek and got %d votes also Ershad got %d votes. By toss tarek wins",cunt4,cunt5);
    }


    if(cunt4==cunt1 && cunt4==cunt2 && cunt4>cunt3 && cunt4>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and tarek and got %d votes, Sheikh Hasina got %d votes also Khaleda zia got %d votes.By toss tarek wins.\n\n\n\n\n",cunt4,cunt1,cunt2);
        fprintf(fpt,"The present situation Is draw and tarek and got %d votes, Sheikh Hasina got %d votes also Khaleda zia got %d votes.By toss tarek wins",cunt4,cunt1,cunt2);
    }


    if(cunt4==cunt1 && cunt4==cunt2 && cunt4==cunt3 && cunt4>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and tarek and got %d votes, Sheikh Hasina got %d votes,Khaleda zia got %d votes also joy got %d votes.By toss tarek wins.\n\n\n\n\n",cunt4,cunt1,cunt2,cunt3);
        fprintf(fpt,"The present situation Is draw and tarek and got %d votes, Sheikh Hasina got %d votes,Khaleda zia got %d votes also joy got %d votes.By toss tarek wins",cunt4,cunt1,cunt2,cunt3);
    }


    if(cunt4==cunt1 && cunt4==cunt2 && cunt4==cunt3 && cunt4>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and tarek and got %d votes, Sheikh Hasina got %d votes,Khaleda zia got %d votes also joy got %d votes.By toss tarek wins.\n\n\n\n\n",cunt4,cunt1,cunt2,cunt3);
        fprintf(fpt,"The present situation Is draw and tarek and got %d votes, Sheikh Hasina got %d votes,Khaleda zia got %d votes also joy got %d votes.By toss tarek wins",cunt4,cunt1,cunt2,cunt3);
    }

    if(cunt4==cunt1 && cunt4==cunt2 && cunt4==cunt3 && cunt4==cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and tarek and got %d votes, Sheikh Hasina got %d votes,Khaleda zia got %d votes, joy got %d votes also ershad got %d votes.By toss tarek wins.\n\n\n\n\n",cunt4,cunt1,cunt2,cunt3,cunt5);
        fprintf(fpt,"The present situation Is draw and tarek and got %d votes, Sheikh Hasina got %d votes,Khaleda zia got %d votes, joy got %d votes also ershad got %d votes.By toss tarek wins",cunt4,cunt1,cunt2,cunt3,cunt5);
    }


    if(cunt5>cunt1 && cunt5>cunt2 && cunt5>cunt3 && cunt5>cunt4)
    {
        printf("\t\t\tThe present Winner Person Is Ershad got %d votes\n\n\n\n\n",cunt5);
        fprintf(fpt,"The present Winner Person Is Ershad got %d votes",cunt5);
    }

    if(cunt5==cunt1 && cunt5>cunt2 && cunt5>cunt3 && cunt5>cunt4)
    {
        printf("\t\t\tThe present situation Is draw and Ershad got %d votes also sheikh Hasina got %d votes.By toss ershad wins\n\n\n\n\n",cunt5,cunt1);
        fprintf(fpt,"The present situation Is draw and Ershad got %d votes also sheikh Hasina got %d votes.By toss ershad wins",cunt5,cunt1);
    }


    if(cunt5>cunt1 && cunt5==cunt2 && cunt5>cunt3 && cunt5>cunt4)
    {
        printf("\t\t\tThe present situation Is draw and Ershad got %d votes also Khaleda Zia got %d votes.By toss ershad wins\n\n\n\n\n",cunt5,cunt2);
        fprintf(fpt,"The present situation Is draw and Ershad got %d votes also Khaleda Zia got %d votes.By toss ershad wins",cunt5,cunt2);
    }

    if(cunt5>cunt1 && cunt5>cunt2 && cunt5==cunt3 && cunt5>cunt4)
    {
        printf("\t\t\tThe present situation Is draw and Ershad got %d votes also Joy got %d votes.By toss ershad wins\n\n\n\n\n",cunt5,cunt3);
        fprintf(fpt,"The present situation Is draw and Ershad got %d votes also joy got %d votes.By toss ershad wins",cunt5,cunt3);
    }

    if(cunt5>cunt1 && cunt5>cunt2 && cunt5>cunt3 && cunt5==cunt4)
    {
        printf("\t\t\tThe present situation Is draw and Ershad got %d votes also tarek got %d votesBy toss ershad wins\n\n\n\n\n",cunt5,cunt4);
        fprintf(fpt,"The present situation Is draw and Ershad got %d votes also Tarek got %d votes.By toss ershad wins",cunt5,cunt4);
    }


    if(cunt5==cunt1 && cunt5==cunt2 && cunt5>cunt3 && cunt5>cunt4)
    {
        printf("\t\t\tThe present situation Is draw and Ershad got %d votes,sheikh Hasina got %d votes also khaleda zia got %d votes.By toss Ershad wins\n\n\n\n\n",cunt5,cunt1,cunt2);
        fprintf(fpt,"The present situation Is draw and Ershad got %d votes,sheikh Hasina got %d votes also khaleda zia got %d votes.By toss Ershad wins",cunt5,cunt1,cunt2);
    }


    if(cunt5==cunt1 && cunt5==cunt2 && cunt5==cunt3 && cunt5>cunt4)
    {
        printf("\t\t\tThe present situation Is draw and Ershad got %d votes,sheikh Hasina got %d votes, khaleda zia got %d votes also joy got %d votes.By toss Ershad wins\n\n\n\n\n",cunt5,cunt1,cunt2,cunt3);
        fprintf(fpt,"The present situation Is draw and Ershad got %d votes,sheikh Hasina got %d votes, khaleda zia got %d votes also joy got %d votes.By toss Ershad wins",cunt5,cunt1,cunt2,cunt3);
    }


    if(cunt5==cunt1 && cunt5==cunt2 && cunt5==cunt3 && cunt5==cunt4)
    {
        printf("\t\t\tThe present situation Is draw and Ershad got %d votes,sheikh Hasina got %d votes, khaleda zia got %d votes,joy got %d votes also tarek got %d votes.By toss Ershad wins\n\n\n\n\n",cunt5,cunt1,cunt2,cunt3,cunt4);
        fprintf(fpt,"The present situation Is draw and Ershad got %d votes,sheikh Hasina got %d votes, khaleda zia got %d votes,joy got %d votes also tarek got %d votes.By toss Ershad wins",cunt5,cunt1,cunt2,cunt4);
    }


    fclose(fpt);
    int T;
    printf("\t\t\t\t Enter One(1) For Main Loges OR\n\n\t\t\t\t\tZero(0) For Exit\n");
    scanf("%d",&T);
    if(T==1)
    {
        main_loges();
    }
    if(T!=1)
    {
        exi();
    }

}

void stop()
{
    system("cls");

    printf("\n\n\n");
    printf("\t- - - - - - - (:- SORRY YOU CAN NOT GIVE YOUR VOTE FOR YOUR WRONG ENTRY THREE(3) TIMES -:) - - - - - - -\n\n\n");
    Sleep(500);
    printf("\t\t\t* * * * * ~~~~~ PLEASE TRY AGAIN AFTER A FEW MOMENT ~~~~~~ * * * * *\n\n\n");
    Sleep(800);
    printf("\t\t\t\t* * * * * ~~~~~ THANK YOU ~~~~~ * * * * *\n\n\n");
    Sleep(500);
}

void not_again()
{
    system("cls");

    printf("\n\n\n");
    printf("\t\t- - - - - - - - - - YOU HAVE GIVE YOUR VOTE SUCCESSFULLY - - - - - - - - - - \n\n");
    Sleep(300);
    printf("         \t\t- - - - - SO, YOU CAN NOT GIVE VOTE MORE THEN ONE(1) TIME - - - - - \n\n\n");
    Sleep(300);
    printf("\t\t\t    If You Want To See Present Winner Enter One (1) OR\n\t\t\t\t\tTwo(2) For Main Loges\n");
    Sleep(300);
    printf("\t\t\t\t\t  Zero(0) For Exit\n\n");
    scanf("%d",&R);
    if(R==1)
    {
        winner();
    }
    if(R==2)
    {
        main_loges();
    }
    if((R!=1) || (R!=2))
    {
        exi();
    }
}

void getpass()
{
    i=0;
    t_password[32]="0";
    t_password[0]=getch();//getting password using * start here
    while(t_password[i]!='\r')

    {

        if(t_password[i]=='\b')

        {

            i--;

            printf("\b");

            printf(" ");

            printf("\b");

            t_password[i]=getch();

        }

        else

        {

            printf("*");

            i++;

            t_password[i]=getch();

        }

    }
    t_password[i]='\0';//getting password stop here

}
void exi()

{
    system("cls");

    printf("\n\n\n");
    printf("\t\t\22- - - - - - - - - - @ YOU HAVE GIVE YOUR VOTE SUCCESSFULLY @ - - - - - - - - - - \22\n\n\n");
    Sleep(500);
    printf("\t\t\t\t\22    * * * * * ~~~ THANK YOU ~~~ * * * * *\22\n\n\n");
    Sleep(500);
}
