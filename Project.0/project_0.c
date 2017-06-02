#include<stdio.h>
#include<string.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
 char *email,*pass,*firstname,*lastname,*password,*renter,*signupemail,*windowname,*selectfriend,*msg,*text,*fileSpec2;
 int lines=10,put=0,pushmsg=0,calleftside=0,calrightside=0,formenusake=0,lftwrgt=0,rgtwrgt=0,game;
 int age,get,pwdcheck=0;
 char s[3][3];
 char player1='X',player2='O';
 int positionT,player1TURN=1,player2turn=1,countTictimes=0,checkplayer=0;
 int a[9][9]={0};
int getSUDOKU;
int posSUDOKU[66]={0,1,0,2,1,1,2,0,0,3,1,5,2,5,0,7,1,7,1,8,2,8,2,6,3,0,3,2,3,5,4,3,4,4,4,5,5,3,5,6,5,8,6,0,7,0,7,1,8,1,6,2,6,3,7,3,8,5,6,8,7,7,8,7,8,6};
int main()
{
    int i;
    system("color 03");
  printf("\t\t\t\t\t\t\t=========================================\n\t\t\t\t");
  printf("\n\t\t\t\t\t\t\t*****************************************\n\n\t\t\t\t");
  //printf("\n\t\t\t\t\t\t\t------------------------------------------\n\n\t\t\t\t");
  printf("                        =     WELCOME TO CHAT APPLICATION    \t=");
  //printf("\n\t\t\t\t\t\t\t-------------------------------------------\n\n\t\t\t\t");
  printf("\n\n\n\t\t\t\t\t\t\t*****************************************\n\t\t\t\t");
  printf("\n\t\t\t\t\t\t\t=========================================\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
  for(i=0;i<6;i++)
  {
      //Sleep(100);
      if(i==1)
     system("color 01");
     if(i==2)
           system("color 02");
     if(i==3)
           system("color 05");
     if(i==4)
           system("color 06");
    if(i==5)
           system("color 09");
     Sleep(1000);
  }
  system("pause");
  system("cls");
  play();
 // Beep(1500,500);
}


void play()
{

          Beep(1300,200);
         system("cls");
         printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
         int choice,k=0,once=0;
         char c;
         system("color  F5");
         printf("----->ALREADY A MEMBER : 1) LOG IN\n");
         printf("\n\n\n\t\t\t\t\t\t\t\t\t");
         printf("----->JOIN US<-------  : 2) SIGN UP\n");
         printf("\n\n\n\t\t\t\t\t\t\t\t\t");
         printf("                         3.ABOUT THIS\n");
         printf("\n\n\n\t\t\t\t\t\t\t\t\t");
         printf("                         4.EXIT\n");
         printf("                   Enter your choice:");
         //printf("\t\t\t\t\t\t\t\t\t");
         scanf("%d",&choice);
         system("cls");
         email=(char*)malloc(30*sizeof(char));
         pass=(char*)malloc(30*sizeof(char));


    switch(choice)
    {
          case 1:
                       Beep(1500,200);
                       system("color 0B");
                       login();
                       break;

    case 2:
                            Beep(1700,200);
                            system("color 6e");
                            getsignupinfo();
                            printf("\n");
                            printf("\t\t\t\t\t\t\t");
                            printf("CONGRAGULATIONS YOU HAVE BEEN SIGNED UP:: NOW LOGIN.\n");
                            printf("\t\t\t\t\t\t\t\t\t");
                            system("pause");
                            system("cls");
                            //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
                            login();
                            break;

    case 3:                  Beep(1900,200);
                            system("color 03");
                            printf("THIS APPLICATION CONSISTS OF LOG-IN PAGE AND SIGN-UP PAGE\n\n");
                            printf("\t1)G-MAIL AND PASSWORD OF THE USER ARE ENCRYPTED\n\n");
                            printf("\t\t-->IF YOU HAVE SIGNED UP ONCE YOU KNOW NEED TO SIGNUP AGAIN WHEN YOU RUN IT.\n\n");
                             printf("\t\t-->YOU HAVE TO LOG-IN WHEN YOU RUN IT AGAIN(IF SIGNED-UP)\n\n");
                            printf("\t\t2)ANY USER WHO WANT TO ENTER INTO THE APPLICATION HAS TO SIGN-UP FIRST\n\n");
                            printf("\t\t3)WHEN THE USER LOG-IN MAIN MENU APPEARS\n\n");
                           printf("\ti)CHAT\n\n");
                           printf("\t\t\tIT CONSISTS OF YOUR FRIENDS LIST (IF NO ONE EMPTY) YOU NEED TO ADD FRIENDS\n");
                           printf("\t\t\tEVERY MESSAGE YOU TEXTED WITH A FRIEND WILL BE SAVED AND CAN BE VIEWED NEW LOG-IN\n");
                           printf("\t\t\tEVERY MESSAGE IS ENCRYPTED\n\n");
                        printf("\tii)GAMES\n\n");
                        printf("\t\t\tIT CONSISTS OF FOUR GAMES\n");
                        printf("\t\t\tHOPE SO YOU ENJOY THEM\n\n\n");
                        printf("\tiii)DETAILS\n");
                        printf("\t\t\tWHEN YOU HAVE SIGNED UP WHAT DETAILS YOU YOU ENTERED THAT WILL BE DISPLAYED THEIR\n");
                        printf("\t\t\t\t\t------>DEVELOPED BY<--------\n");
                        printf("\t\t\t\t\t\t**TEAM 6**\n");
                        system("pause");
                        play();


    case 4:                  Beep(1300,200);
                            system("color 1e");
                            exit(0);
                            break;

    default:
                             Beep(1300,200);
                            system("color c1");
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
                            printf("enter correct choice \n");
                            printf("\n\t\t\t\t\t\t\t\t\t");
                            system("pause");
                            system("cls");
                            fflush(stdin);
                            play();
                            break;
          }
    }

void  login()
{
     int choice,k=0,once=0;
         char c;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
                       printf("===================\n\t\t\t\t\t\t\t\t\t");
                       printf("=     E-MAIL      =\n\t\t\t\t\t\t\t\t\t");
                       printf("===================\n\n\t\t\t\t\t\t\t\t\t");
                       fflush(stdin);
                       gets(email);
                       printf("\t\t\t\t\t\t                         --------------------");
                       get=check(1);
                       get=checkloginEmailinfo();

                       printf("\t\t\t\t\t\t\t\t\t");
                       printf("================\n");
                       printf("\t\t\t\t\t\t\t\t\t");
                       printf("=   PASSWORD   = \n");
                       printf("\t\t\t\t\t\t\t\t\t");
                       printf("================\n");
                       printf("\n\t\t\t\t\t\t\t\t\t");
  //                     printf("\t\t\t\t\t\t                         --------------------");
                 while(c!=13)
                 {

                     if(once)
                        {

                                       if(c==8)
                                         {

                                           printf("\b \b");
                                           k=k-1;

                                                      if(k<0)
                                                      {
                                                        k++;
                                                       }
                                           }

                                       else
                                        {
                                            pass[k]=c;
                                            printf("*");
                                            k++;
                                        }
                           }
                    once=1;
                    c=getch();
                  }

                          pass[k]='\0';
                          fflush(stdin);
                          get=checkinfo();
                          printf("\t\t\t\t\t\t                         --------------------");

               if(get==1)
              {
                            system("cls");
                            chatmainmenu();
              }
}


void  getsignupinfo()
{

       int c=0,once=0,k=0,i;
       signupemail=(char*)malloc(30*sizeof(char));
       firstname=(char*)malloc(30*sizeof(char));
       lastname=(char*)malloc(30*sizeof(char));
       password=(char*)malloc(30*sizeof(char));
       renter=(char*)malloc(30*sizeof(char));
       pass=(char*)malloc(30*sizeof(char));;
       printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
       system("cls");
       system("color 06");

       printf("\n\n\t\t\t\t     ===============\n");
       printf("   \t\t\t\t      =   SIGN-IN   =\n");
       printf("   \t\t\t\t      ===============\n\n");
         for(i=0;i<4;i++)
        {
      //Sleep(100);
             if(i==1)
                system("color 01");
             if(i==2)
                system("color 03");
             if(i==3)
                system("color 09");
              Sleep(100);
        }
        system("color  0a");
       printf("\n\n\n\t\t\t\t");
       printf("\t\tFIRST  NAME:- ");
       fflush(stdin);
       gets(firstname);
       printf("\t\t\t\t\t\t\t      ----------------\n\n\t\t\t");
       printf("\t\t\tSECOND  NAME:- ");
       fflush(stdin);
       gets(lastname);
       printf("\t\t\t\t\t\t\t      ----------------\n\n\t\t\t");
       printf("\t\t\tE-MAIL-ID:-   ");
       //printf("\t\t\t\t\t\t\t\t\t");
       fflush(stdin);
       gets(signupemail);
       printf("\t\t\t\t\t\t\t      ----------------\n\n\t\t\t");
       check(2);
       CheckSignupEmailExists();
       printf("\t\t\tCREATE A PASSWORD:-");
       c=0;
       once=0;
       k=0;

               while(c!=13)
               {
                         if(once)
                           {
                                     if(c==8)
                                     {
                                                 printf("\b \b");
                                                  k=k-1;
                                                             if(k<0)
                                                              {
                                                                      k++;
                                                              }
                                      }
                                      else
                                      {
                                                     password[k]=c;
                                                     printf("*");
                                                     k++;
                                       }
                               }
                       once=1;
                       c=getch();
                }

        password[k]='\0';
        //printf("----------------\n\n\t\t\t");
        printf("\n\n\n\t\t");
        printf("\t\t\t\tRE-ENTER YOUR PASSWORD:-");
        c=0;
        //printf("\t\t\t\t\t\t\t\t\t");
        once=0;
        k=0;
              while(c!=13)
              {
                        if(once)
                        {
                                    if(c==8)
                                    {
                                        printf("\b \b");
                                        k=k-1;
                                                 if(k<0)
                                                 {
                                                      k++;
                                                 }
                                    }

                                    else
                                    {
                                          renter[k]=c;
                                          printf("*");
                                          k++;
                                     }

                        }

                   once=1;
                   c=getch();
                }
         renter[k]='\0';
         printf("\n");
         fflush(stdin);
         passwordmatch();
         printf("\n\n\t\t\t\t\t\tENTER YOUR AGE:");
         scanf("%d",&age);
         fflush(stdin);
        // play();
         storesignupdetails();
}


int check(int which)
{
       int size,i=0,count=0,k=0;
       if(which==2)
       {
         size=strlen(signupemail);
             for(i=0;i<size;i++)
             {
                        if(signupemail[i]=='@')
                        {
                             count++;
                        }

                        if(signupemail[i]=='.')
                        {
                              count++;
                        }
               }
       }

        if(which==1)
        {
            size=strlen(email);
                 for(i=0;i<size;i++)
                 {
                        if(email[i]=='@')
                        {
                            count++;
                        }

                        if(email[i]=='.')
                        {
                             count++;
                        }
                 }
        }

        if(!(count>=2))
        {
              printf("\a\n\t\t\t\t\t\t\t\t\t");
              printf("ENTER A VALID E-MAIL ADDRESS:\n");
              printf("\t\t\t\t\t\t\t\t\t");
              k=1;
         }

        if(k==1&&which==1)
         {
              system("pause");
              system("cls");
              fflush(stdin);
              play();
         }
         else
         {
                 if(which==1)
                {
                    return 1;
                }
         }

         if(k==1&&which==2)
         {
                printf("\n\n\t\t\t\t\t");
                system("pause");
                system("cls");
                play();
         }
         else
         {
                 if(which==2)
                {
                   return 1;
                }
         }
}


void passwordmatch()
{
      int i=0;
      i=strcmp(password,renter);
      if(i)
      {
              printf("\a\n");
              printf("\t\t\t\t\t\t\t\t\t");
              printf("PASSWORD DIDN'T MATCH EACH OTHER\n");
              printf("\t\t\t\t\t\t\t\t\t");
              system("pause");
              getsignupinfo();
      }
}


int checkloginEmailinfo()
{
        FILE *fp;
        char *copy;
        copy=(char*)malloc(30*sizeof(char));
        int point,i,tempE;
        pwdcheck=0;
        fp=fopen("database.txt","a+");
        if(fp==NULL)
        {
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t");
                printf("USER DATA DOSENT EXISTS SIGNUP FIRST!");
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t");
                fclose(fp);
                system("pause");
                system("cls");
                play();
        }
        else
        {
             while(!feof(fp))
             {
                    pwdcheck++;
                    fgets(copy,30,fp);
                    copy[strlen(copy)-1]='\0';

                          for(i=0;copy[i]!='\0';i++)
                          {
                                   tempE=(int)copy[i];
                                   tempE=tempE-3;
                                   copy[i]=(char)tempE;
                           }
                     point=strcmp(email,copy);
                     printf("\n");
                        if(!point)
                        {
                                   fclose(fp);
                                   return 1;
                         }
              }
       printf("\a\n");
       printf("\t\t\t\t\t\t\t\t\t");
       printf("USER DATA DOSENT EXISTS SIGNUP FIRST");
       printf("\n");
       printf("\t\t\t\t\t\t\t\t\t");
       system("pause");
       fclose(fp);
       system("cls");
       play();
     }
}


void storesignupdetails()
{
       char *a;
       int i=0,tempE;
       a=(char*)malloc(30*sizeof(char));
          while(signupemail[i]!='@')
         {
                     a[i]=signupemail[i];
                      i++;
         }

       a[i]='\0';
       char *extension = ".txt";
       char fileSpec[strlen(a)+strlen(extension)+1];
       FILE *out,*fp;
       snprintf(fileSpec,sizeof(fileSpec),"%s%s",a,extension);
       out=fopen(fileSpec,"w");
       fp=fopen("database.txt","a");
           for(i=0;signupemail[i]!='\0';i++)
           {
               tempE=(int)signupemail[i];
               tempE=tempE+3;
               signupemail[i]=(char)tempE;
           }

           for(i=0;password[i]!='\0';i++)
          {
               tempE=(int)password[i];
               tempE=tempE+3;
               password[i]=(char)tempE;
          }

          fprintf(fp,"%s\n%s\n",signupemail,password);
          for(i=0;signupemail[i]!='\0';i++)
          {
              tempE=(int)signupemail[i];
              tempE=tempE-3;
              signupemail[i]=(char)tempE;
          }

      fprintf(out,"%s\n%s\n%s\n%d\n",firstname,lastname,signupemail,age);
      fclose(out);
      fclose(fp);
}


void CheckSignupEmailExists()
{
      FILE *fp;
      int k,i,tempE;
      char *checkemail;
      checkemail=(char*)malloc(30*sizeof(char));
      fp=fopen("database.txt","r");
      if(fp==NULL)
      {
         fclose(fp);
      }
      else
      {
            while(!feof(fp))
            {
                 fgets(checkemail,30,fp);
                 checkemail[strlen(checkemail)-1]='\0';
                       for(i=0;checkemail[i]!='\0';i++)
                      {
                                    tempE=(int)checkemail[i];
                                    tempE=tempE-3;
                                    checkemail[i]=(char)tempE;
                      }
                 k=strcmp(checkemail,signupemail);
                 if(k==0)
                 {

                         printf("\a\n\t\tTRY LOG-IN OR SIGN UP WITH ANOTHER E-MAIL\n\t\t");
                         system("pause");
                         fclose(fp);
                         system("cls");
                         play();
                  }
            }
       }
}


int checkinfo()
{
      int pwdcheck2=0,forpwdcheck,i,tempE;
      pwdcheck2=pwdcheck+1;
      FILE *fp;
      char *pwd;
      pwd=(char*)malloc(30*sizeof(char));
      fp=fopen("database.txt","r");
      pwdcheck=0;
       while(!feof(fp))
          {
                  pwdcheck++;
                  fgets(pwd,30,fp);
                    for(i=0;pwd[i]!='\0';i++)
                    {
                           tempE=(int)pwd[i];
                           tempE=tempE-3;
                           pwd[i]=(char)tempE;
                     }

                   if(pwdcheck==pwdcheck2)
                    {
                           pwd[strlen(pwd)-1]='\0';
                           forpwdcheck=strcmp(pwd,pass);
                                    if(forpwdcheck==0)
                                     {
                                          fclose(fp);
                                          return 1;
                                      }
                    }
        }

     fclose(fp);
     printf("\a\n\t\t\t\t\t\t\t\t\t");
     printf("WRONG PASSWORD\n");
     printf("\n\t\t\t\t\t\t\t\t\t");
     printf("PLEASE TRY AGAIN!\n");
     printf("\n\t\t\t\t\t\t\t\t\t");
     system("pause");
     play();
     return 0;
}


void chatmainmenu()
{
    int mainmenuchoice;
    system("cls");
    system("color F2");
    Beep(2000,200);
    //printf("\nn\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t=========================================\n\t\t\t\t\t\t\t\t=");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t1..CHAT\n");
    printf("\n\t\t\t\t\t\t\t\t");
    printf("2..YOUR DETAILS\n");
    printf("\n\t\t\t\t\t\t\t\t");
    printf("3..GAMES\n");
    printf("\n\t\t\t\t\t\t\t\t");
    printf("4.. NOTES\n");
    printf("\n\t\t\t\t\t\t\t\t");
    printf("5..LOG-OUT\n");
    printf("\n\t\t\t\t\t\t\t\t");
    printf("ENTER YOUR CHOICE::\n");
    printf("\n\t\t\t\t\t\t\t\t");
    scanf("%d",&mainmenuchoice);
      switch(mainmenuchoice)
      {
          case 1:
                            system("cls");
                            system("color  03");
                            Beep(2500,100);
                            openchatmenu();
                            break;

          case 2:
                            system("cls");
                            system("color  01");
                            Beep(1500,200);
                            userinfofromfiles();
                            break;

          case 3:
                            system("cls");
                            system("color 02");
                            Beep(1200,150);
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
                            printf("1.SUDOKU");
                            printf("\n\n\t\t\t\t\t\t\t\t\t");
                            //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t");
                            printf("2.FOCUS");
                            printf("\n\n\t\t\t\t\t\t\t\t\t");
                            //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t");
                            printf("3.TIC-TAC");
                            printf("\n\n\t\t\t\t\t\t\t\t\t");
                            //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t");
                            printf("4.QUIZ");
                            printf("\n\n\t\t\t\t\t\t\t\t\t");
                            printf("5.BACK");
                            printf("\n\n\t\t\t\t\t\t\t\t\t");
                            //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t");
                             //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t");
                            printf("Enter ur choice:");
                            scanf("%d",&game);
                            if(game==2)
                            {
                                system("color F9");
                                focus();
                            }
                            else if(game==4)
                            {
                                quiz();
                            }
                            else if(game==3)
                            {
                                mainTICTACTOE();
                            }
                            else if(game==1)
                            {
                                system("color F1");
                                mainfunctionsudoku();
                            }
                            else if(game==5)
                            {
                                chatmainmenu();
                            }
                            else{

                            printf("\n\t\t\t\t\t\t\t\t\t Wrong choice entered\n\n");
                            system("pause");
                            chatmainmenu();
                            }
                            //system("pause");
                            //chatmainmenu();
                            break;

          case 4:
                            Beep(1000,100);
                            notes();
                            break;
          case 5:
                           printf("\a");
                           play();
                           break;

         default:
                           printf("\aENTER CORRECT CHOICE::");
                           system("pause");
                           fflush(stdin);
                           chatmainmenu();
                           break;

         }
}


void userinfofromfiles()
{
        char *foruserdetails;
        char *extension = ".txt";
        char *displaytext;
        displaytext=(char*)malloc(50*sizeof(char));
        FILE *out;
        int i,upto=0,next=0;
        foruserdetails=(char*)malloc(50*sizeof(char));
          for(i=0;email[i]!='@';i++)
         {
             foruserdetails[upto]=email[i];
             upto++;
         }
        foruserdetails[upto]='\0';
        char fileSpec[strlen(foruserdetails)+strlen(extension)+1];
        snprintf(fileSpec,sizeof(fileSpec),"%s%s",foruserdetails,extension);
        out=fopen(fileSpec,"r");
             while(fgets(displaytext,50,out)!=NULL)
            {
                    next++;
                    if(next==1)
                    {
                         printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
                         printf("FIRST NAME::\n");
                         printf("\n\t\t\t\t\t\t\t\t\t");
                         puts(displaytext);
                    }

                    else if(next==2)
                    {
                         printf("\n\t\t\t\t\t\t\t\t\t");
                         printf("SECOND NAME::\n");
                         printf("\n\t\t\t\t\t\t\t\t\t");
                         puts(displaytext);
                     }

                   else if(next==3)
                    {
                          printf("\n\t\t\t\t\t\t\t\t\t");
                          printf("G-MAIL::\n");
                          printf("\n\t\t\t\t\t\t\t\t\t");
                          puts(displaytext);
                     }
                   else if(next==4)
                   {
                        printf("\n\t\t\t\t\t\t\t\t\t");
                          printf("AGE::\n");
                          printf("\n\t\t\t\t\t\t\t\t\t");
                          puts(displaytext);

                    }
                    else if(next==5)
                    {
                         printf("\n\t\t\t\t\t\t\t\t\t");
                          printf("MOBILE.NO::\n");
                          printf("\n\t\t\t\t\t\t\t\t\t");
                          puts(displaytext);
                    }
                 }
       printf("\n\t\t\t\t\t\t\t\t\t");
       system("pause");
       chatmainmenu();
 }


void openchatmenu()
{
       int openchatmenuchoice;
       system("cls");
       system("color 03");
       printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t");
       printf("1..CHAT\n");
       printf("\n\t\t\t\t\t\t\t\t\t\t");
       printf("2..ADD FRIENDS\n");
       printf("\n\t\t\t\t\t\t\t\t\t\t");
       printf("3..BACK\n");
       printf("\n\t\t\t\t\t\t\t\t\t\t");
       scanf("%d",&openchatmenuchoice);
       printf("\n\t\t\t\t\t\t\t\t\t\t");
         switch(openchatmenuchoice)
         {
                 case 1:
                          showchat();
                          break;

                case 2:
                          addfriends();
                          break;

                case 3:
                          chatmainmenu();
                          break;
               default:
                          printf("\n\t\t\t\t\t\t\t\t\t");
                          printf("ENTER CORRECT CHOICE::\n");
                          system("pause");
                          openchatmenu();
                          break;
        }
}


void addfriends()
{
      system("cls");
      char *foraddfriends,*z,*friendsname,*duplicatefriend;
      duplicatefriend=(char*)malloc(50*sizeof(char));
      friendsname=(char*)malloc(50*sizeof(char));
      z=(char*)malloc(50*sizeof(char));
      z="@chat";
      int i,j=0,addfriendschoice,justonce=1;
      foraddfriends=(char*)malloc(50*sizeof(char));
      for(i=0;email[i]!='@';i++)
     {
           foraddfriends[j]=email[i];
           j++;
     }
     for(i=0;z[i]!='\0';i++)
     {
            foraddfriends[j]=z[i];
            j++;
     }
     foraddfriends[j]='\0';
     char *extension = ".txt";
     char fileSpec[strlen(foraddfriends)+strlen(extension)+1];
     FILE *out;
     snprintf(fileSpec,sizeof(fileSpec),"%s%s",foraddfriends,extension);
     out=fopen(fileSpec,"r");
     if(out==NULL)
     {
             printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
             printf("YOUR FRIENDS LIST WAS EMPTY\n");
    }
    else
    {
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
            printf("THESE ARE YOUR FRIENDS\n");
                while(fgets(friendsname,50,out)!=NULL)
                 {
                       if(justonce==1)
                      {
                           printf("\n\t\t\t\t\t\t\t\t\t");
                           friendsname[strlen(friendsname)-1]='\0';
                           fflush(stdin);
                           printf("%s",friendsname);
                       }
                       else
                       {
                            friendsname[strlen(friendsname)-1]='\0';
                            printf("\n\t\t\t\t\t\t\t\t\t");
                            fflush(stdin);
                            printf("%s",friendsname);
                        }
                 justonce=0;
                }
       }
    fclose(out);
    printf("\n\n\t\t\t\t\t\t\t\t\t");
    printf("1..ADD FREIND\n");
    printf("\n\t\t\t\t\t\t\t\t\t");
    printf("2..BACK\n");
    printf("\n\t\t\t\t\t\t\t\t\t");
    scanf("%d",&addfriendschoice);
        switch(addfriendschoice)
        {
            case 1:
                     out=fopen(fileSpec,"r");
                     printf("\n\t\t\t\t\t\t\t\t\t");
                     printf("ENTER FRIEND's NAME\n");
                     printf("\n\t\t\t\t\t\t\t\t\t");
                     scanf("%s",friendsname);
                         while(fgets(duplicatefriend,50,out))
                          {
                                        duplicatefriend[strlen(duplicatefriend)-1]='\0';
                                              if(strcmp(duplicatefriend,friendsname)==0)
                                               {
                                                    printf("\n\t\t\t\t\t\t\t\t\t");
                                                    printf("THIS NAME ALREADY EXISTS\n");
                                                    printf("\n\t\t\t\t\t\t\t\t\t");
                                                    system("pause");
                                                    fclose(out);
                                                    addfriends();
                                                 }
                         }
                    fclose(out);
                    out=fopen(fileSpec,"a");
                    fprintf(out,"%s\n",friendsname);
                    fclose(out);
                    addfriends();
                    break;

     case 2:
                                openchatmenu();
                                break;
     default:
                            printf("\n\t\t\t\t\t\t\t\t\t");
                            printf("ENTER CORRECT CHOICE::\n");
                            addfriends();
                            break;
        }
}

void showchat()
{
       char *fordisplaypurpose,*forchatlistpurpose,*copyfriend;
       int selelctfriendstatus=0,i,j=0;
       forchatlistpurpose=(char*)malloc(50*sizeof(char));
       selectfriend=(char*)malloc(50*sizeof(char));
       windowname=(char*)malloc(50*sizeof(char));
       copyfriend=(char*)malloc(50*sizeof(char));
       fordisplaypurpose=(char*)malloc(50*sizeof(char));
       fordisplaypurpose="@chat";
       char *extension = ".txt";
       char *emailspoof;
       emailspoof=(char*)malloc(50*sizeof(char));
       for(i=0;email[i]!='@';i++)
       {
            forchatlistpurpose[j]=email[i];
            j++;
       }
       for(i=0;fordisplaypurpose[i]!='\0';i++)
       {
            forchatlistpurpose[j]=fordisplaypurpose[i];
            j++;
       }
       forchatlistpurpose[j]='\0';
       char fileSpec[strlen(forchatlistpurpose)+strlen(extension)+1];
       FILE *out;
       snprintf(fileSpec,sizeof(fileSpec),"%s%s",forchatlistpurpose,extension);
       out=fopen(fileSpec,"r");
        if(out==NULL)
        {
                  system("cls");
                  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
                  printf("NO FRIENDS IN YOUR CONTACT LIST TRY ADDING THEM ADN COME BACK AGAIN\n");
                  printf("\n\t\t\t\t\t\t\t\t\t");
                  system("pause");
                  chatmainmenu();
       }
      else
        {
                   system("cls");
                   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
                          while(fgets(copyfriend,50,out)!=NULL)
                         {
                                     copyfriend[strlen(copyfriend)-1]='\0';
                                     printf("\n\t\t\t\t\t\t\t\t\t");
                                     puts(copyfriend);
                        }
                  printf("\n\t\t\t\t\t\t\t\t\t");
                  printf("WITH WHOME DO YOU WANT TO CHAT\n");
                  fflush(stdin);
                  printf("\n\t\t\t\t\t\t\t\t\t");
                  gets(selectfriend);
                  fclose(out);
                  out=fopen(fileSpec,"r");
                            while(fgets(copyfriend,50,out)!=NULL)
                            {
                                        copyfriend[strlen(copyfriend)-1]='\0';
                                                if(strcmp(copyfriend,selectfriend)==0)
                                                  {
                                                              selelctfriendstatus=1;
                                                  }
                            }
                if(selelctfriendstatus==1)
                {
                      fclose(out);
                      j=0;
                         for(i=0;email[i]!='@';i++)
                         {
                                    emailspoof[j]=email[i];
                                    j++;
                         }
                      emailspoof[j]='\0';
                      char fileSpec[strlen(emailspoof)+strlen(extension)+1];
                      snprintf(fileSpec,sizeof(fileSpec),"%s%s",emailspoof,extension);
                      out=fopen(fileSpec,"r");
                          while(fgets(windowname,50,out))
                         {
                                  windowname[strlen(windowname)-1]='\0';
                                  break;
                         }
                      puts(windowname);
                      puts(selectfriend);
                      fclose(out);
                      print();
        }
        else
        {
                      printf("THE NAME YOU HAVE ENTERED DOSENT EXISTS IN THE LIST\n");
                      system("pause");
                      openchatmenu();
        }
    fclose(out);
    }
}


void notes()
{
    system("cls");
    system("color 5F");
    FILE *fp4;
      char *foraddfriends,*z,*friendsname,*duplicatefriend,ch2;
      duplicatefriend=(char*)malloc(50*sizeof(char));
      friendsname=(char*)malloc(50*sizeof(char));
      fileSpec2=(char*)malloc(50*sizeof(char));
      z=(char*)malloc(50*sizeof(char));
      z="@chat";
      int i,j=0,addfriendschoice,justonce=1;
      foraddfriends=(char*)malloc(50*sizeof(char));
      for(i=0;email[i]!='@';i++)
     {
           foraddfriends[j]=email[i];
           j++;
     }
     for(i=0;z[i]!='\0';i++)
     {
            foraddfriends[j]=z[i];
            j++;
     }
     foraddfriends[j]='\0';
     char *extension = ".txt";
      fileSpec2[strlen(foraddfriends)+strlen(extension)+1];
     snprintf(fileSpec2,sizeof(fileSpec2),"%s%s",foraddfriends,extension);
     //fp4=fopen(fileSpec2,"r");
     notesmenu();
}
void notesmenu()
{
    system("cls");
    int chi;
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t");
    printf("1..Add notes\n\t\t\t\t\t\t\t");
    printf("2..View notes\n\t\t\t\t\t\t\t");
    printf("3..Exit\n\t\t\t\t\t\t\t");
    printf("     Enter your choice :");
    scanf("%d",&chi);
    switch(chi)
    {
    case 1:
        addnotes();
        break;
    case 2:
        viewnotes();
        break;
    case 3:
          chatmainmenu();
    default:
        printf("Enter correct choice\n");
        system("pause");
        fflush(stdin);
        main();
        break;
    }
}
void addnotes()
{
    FILE *fp;
    char *notes;
    notes=(char*)malloc(100*sizeof(char));
    system("cls");
    fp=fopen(fileSpec2,"a+");
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t");
    printf("Enter your notes::\n\t\t\t\t\t\t\t\t");
    fflush(stdin);
    gets(notes);
    fprintf(fp,"%s\n",notes);
    fclose(fp);
    viewnotes();
}
void viewnotes()
{
    system("cls");
    FILE *fp;
    char *notes;
    notes=(char*)malloc(100*sizeof(char));
    fp=fopen(fileSpec2,"r");
    if(fp==NULL)
    {
        printf("YOUR NOTES WAS EMPTY\n");
    }
    else{
     while(fgets(notes,30,fp)!=NULL)
        {
            notes[strlen(notes)-1]='\0';
            puts(notes);
            if(strlen(notes)>0)
            {
            printf("--------------------------------------------------\n");
            }
        }
    }
    system("pause");
    notesmenu();

}


void print()
{
          msg=(char*)malloc(50*sizeof(char));
          int i,n1,n2,spaces,switchchat;
          system("cls");
          n1=strlen(windowname);
          n2=strlen(selectfriend);
          n1=n1/2;
          spaces=42-n1;
          for(i=1;i<=168;i++)
          {
                        printf("=");
          }

          for(i=1;i<spaces;i++)
          {
                         printf(" ");
          }

          printf("%s",windowname);
          for(i=1;i<spaces;i++)
          {
                         printf(" ");
          }
          printf("|");
          n2=n2/2;
          spaces=42-n2;
          for(i=1;i<spaces;i++)
          {
              printf(" ");
          }
          printf("%s",selectfriend);
          printf("\n");
          for(i=1;i<=168;i++)
          {
                printf("=");
          }
          if(calleftside==1)
         {
                   printmessages();
                   left();
                   calleftside=0;
                   formenusake=1;
        }
         else if(calrightside==1)
        {
                    printmessages();
                    right();
                    calrightside=0;
                    formenusake=1;
        }
       else
       {
                   printmessages();
       }

        if(formenusake==1)
         {
                    formenusake=0;
                    print();
         }
         else
        {
              menu();
        }
}


void  menu()
{
       int switchchat;
       switchchat=chatmenu();
            switch(switchchat)
           {
               case 1:
                         calleftside=1;
                         fflush(stdin);
                         print();
                         break;
              case 2:
                         calrightside=1;
                         print();
                         break;
              case 3:
                         chatmainmenu();
                         break;
             default:
                         printf("\n\t\t\t\t\t\t\t\t\t");
                         printf("ENTER CORRRECT CHIOCE::\n");
                         printf("\n\t\t\t\t\t\t\t\t\t");
                         system("pause");
                         fflush(stdin);
                         system("cls");
                         print();
                         break;
              }
}


int chatmenu()
{
          int getchatchoice,i,line2;
          line2=lines/2;
           for(i=1;i<=line2;i++)
          {
                printf("\n");
          }
          for(i=1;i<=81;i++)
          {
                  printf(" ");
          }
          printf("1..LEFT\n");
          for(i=1;i<=81;i++)
          {
                 printf(" ");
          }
          printf("2..RIGHT\n");
          for(i=1;i<=81;i++)
          {
                 printf(" ");
          }
          printf("3..BACK\n");
          for(i=1;i<=81;i++)
         {
                printf(" ");
         }
         printf("ENTER U R CHOICE::\n");
         for(i=1;i<=81;i++)
        {
                printf(" ");
        }
        scanf("%d",&getchatchoice);
        return getchatchoice;
}


void right()
{
      int i;
      for(i=1;i<=lines;i++)
      {
          printf("\n");
      }
      for(i=1;i<=88;i++)
     {
          printf(" ");
     }
      printf("ENTER YOUR TEXT::\n");
     for(i=1;i<=88;i++)
    {
         printf(" ");
    }
    gets(msg);
    rgtwrgt=1;
    writemsg();
}


void left()
{
    int i;
    for(i=1;i<=lines;i++)
    {
        printf("\n");
    }
    printf("ENTER YOUR TEXT::\n");
    gets(msg);
    lftwrgt=1;
    writemsg();
}


void printmessages()
{
    int i,j=0;
    char *messagedatabase;
    messagedatabase=(char*)malloc(50*sizeof(char));
    for(i=0;email[i]!='@';i++)
    {
        messagedatabase[j]=email[i];
        j++;
    }
    messagedatabase[j]='@';
    j++;
    for(i=0;selectfriend[i]!='\0';i++)
    {
        messagedatabase[j]=selectfriend[i];
        j++;
    }
    messagedatabase[j]='\0';
    text=(char*)malloc(50*sizeof(char));
    char *extension = ".txt";
    char fileSpec[strlen(messagedatabase)+strlen(extension)+1];
    FILE *out;
    snprintf(fileSpec,sizeof(fileSpec),"%s%s",messagedatabase,extension);
    out=fopen(fileSpec,"r");
    while( fgets(text,50,out)!=NULL)
    {
        displayit();
    }
    fclose(out);
    pushmsg=0;
}


void displayit()
{
    int i,k=0,j,tempE;
    int cspace=80,n1,rightspace;
    char *textright;
    text[strlen(text)-1]='\0';
    textright=(char*)malloc(50*sizeof(char));
    if(text[0]=='~')
    {
            for(i=1;text[i]!='\0';i++)
            {
                textright[k]=text[i];
                k++;
            }
          textright[k]='\0';
           for(i=0;textright[i]!='\0';i++)
           {
                tempE=(int)textright[i];
                tempE=tempE-3;
                textright[i]=(char)tempE;
           }
           printf("%s",textright);
           n1=strlen(textright);
           rightspace=168-n1*2;
           for(i=1;i<=rightspace;i++)
           {
                printf(" ");
           }
           printf("%s",textright);
       }

    else
    {
        n1=strlen(text);
        cspace=cspace-n1;
        for(i=1;i<=cspace;i++)
         {
           printf(" ");
         }
        fflush(stdin);
       for(i=0;text[i]!='\0';i++)
       {
        tempE=(int)text[i];
        tempE=tempE-3;
        text[i]=(char)tempE;
       }
        printf("%s",text);
        printf("\t");
        puts(text);
    }
}

void writemsg()
{
      int j=0,i,tempE;
      char *messagedatabase;
      messagedatabase=(char*)malloc(50*sizeof(char));
      for(i=0;email[i]!='@';i++)
      {
          messagedatabase[j]=email[i];
          j++;
      }
      messagedatabase[j]='@';
      j++;
      for(i=0;selectfriend[i]!='\0';i++)
      {
          messagedatabase[j]=selectfriend[i];
          j++;
      }
      messagedatabase[j]='\0';
      text=(char*)malloc(50*sizeof(char));
      char *extension = ".txt";
      char fileSpec[strlen(messagedatabase)+strlen(extension)+1];
      FILE *out;
      snprintf(fileSpec,sizeof(fileSpec),"%s%s",messagedatabase,extension);
      out=fopen(fileSpec,"a+");
      j=1;
      char *mdfyrgtmsg;
      mdfyrgtmsg=(char*)malloc(80*sizeof(char));
      if(lftwrgt==1)
      {
          lftwrgt=0;
          for(i=0;msg[i]!='\0';i++)
         {
             tempE=(int)msg[i];
             tempE=tempE+3;
             msg[i]=(char)tempE;
         }
         fprintf(out,"%s\n",msg);
    }

    if(rgtwrgt==1)
    {
            rgtwrgt=0;
            printf("ENTERED THE FUNCTION:");
            mdfyrgtmsg[0]='~';
        for(i=0;msg[i]!='\0';i++)
        {
            mdfyrgtmsg[j]=msg[i];
            j++;
        }
        mdfyrgtmsg[j]='\0';
        for(i=1;mdfyrgtmsg[i]!='\0';i++)
        {
             tempE=(int)mdfyrgtmsg[i];
             tempE=tempE+3;
             mdfyrgtmsg[i]=(char)tempE;
        }
        fprintf(out,"%s\n",mdfyrgtmsg);
    }
    fclose(out);
}

void focus()
{

    FILE *fp,*fp1,*fp2;
    int i,points=0;
    char s[30],q;
    int g[10],a[3],check,choice;
    a[0]=1;
    a[1]=2;
    system("cls");
    system("color E0");
    printf(" \n\n\n\n\n \t\t\t\t\t\t\t********FOCUS**********\n\n  ");
    printf("\n \t\t\t\t\t\t\tWELCOME TO THE GAME\t\t\t    POINTS:%d\n\n\t\t\t\t\t1.PLAy\n\t\t\t\t\t2.HOW TO PLAY\n\t\t\t\t\t3.EXIT\n\n\n \t\t\t\t\tENTER YOUR CHOICE: ",points);
    scanf("%d",&choice);
    if(choice==1)
    {
         system("cls");
    printf("\n\n\n\n\n\n\n\t\t\t1.Level-1\n\t\t\t2.Level-2\n\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d",&check);
    if(check==1)
    {
        system("cls");
        system("color E5");
     printf("\t\t\t\t\tLEVEL-1\a\n");
    fp=fopen("game.txt","r");
    fp1=fopen("quest.txt","r");
    fp2=fopen("ans.txt","r");
    printf("\n\t\t\t\t\tGAME-ON\n");
       system("pause");
       system("cls");
    for(i=0;fgets(s,30,fp)!=NULL;i++)
    {
        printf("\n\t\t\t\t\t %s\n",s);
        Sleep(1000);
        system("cls");
        printf("\n\n");
        if(i==1)
             printf("\n\n\n\n");
        else if(i%2==0)
             printf("\n\n\n\n\n\n");
        else if(i%3==0)
             printf("\n\n\n\n\n\n\n\n");
    }
    //printf(" \t\t\t\t1.true \n\t\t\t\t2.false \n\\t\t\t\t\t\ttAnswer here: ");
    i=0;
    printf("\t 1) bitter  2) better \n\t Enter ur choice:");
    scanf("%d",&g[0]);
     if(g[0]==a[0])
     {
         printf("\n\t\t\t\tCorrect answer ");
         points=points+10;
         printf("\n\t\t\t\tGained 10 points                                    POINTS:%d\n\n\n",points);
         printf("       \t\t1.NEXT QUESION   2.exit\n\t\t Enter ur choice:");
         scanf("%d",&i);
     }
     else if(g[0]!=a[0])
        {
        printf("\n\t\t\t\tWrong answer ");
         printf("\n\t\t                                   POINTS:%d\n\n\n",points);
          printf(" \t\t 1.Next question     2.exit\n\t\t Enter ur choice:");
          scanf("%d",&i);
     }
     if(i==1)
     {
       printf("\tDid the bitter butter change into better butter ? ");

       printf("\ta) Yes     b)No \n\t\tEnter ur choice:");
       scanf("%d",&g[1]);
     }
     else if(i==2) {
            chatmainmenu();
            }
            if(g[1]==a[1])
     {
         printf("\n\t\t\t\tCorrect answer ");
         points=points+10;
         printf("\n\t\t\t\tGained 10 points                                    POINTS:%d\n\n\n",points);
        // printf("       \t\t1.NEXT QUESION   2.exit");
         //scanf("%d",&i);
     }
     else if(g[1]!=a[1])
        {
        printf("\n\t\t\t\tWrong answer ");
         printf("\n\t\t                                   POINTS:%d\n\n\n",points);
         // printf(" \t\t 1.Next question");
          //scanf("%d",&i);
     }
     else{
        printf("Entered invalid choice");
     }

    fclose(fp);
    }


if(check==2)
      {
        system("cls");
        printf("\t\t\t\t\tLEVEL-3\a\n");
        fp=fopen("game.txt","r");
        printf("\n\t\t\t\t\tGAME-ON\n");
        system("pause");
        system("cls");
          for(i=0;fgets(s,30,fp)!=NULL;i++)
          {
                 printf("\n\t\t\t\t\t %s\n",s);
                 Sleep(100);
                 system("cls");
                 printf("\n\n");
    if(i==1)
        printf("\n\n\n\n");
    else if(i%2==0)
        printf("\n\n\n\n\n\n");
    else if(i%3==0)
        printf("\n\n\n\n\n\n\n\n");
          }
             i=0;
    printf("\t 1) bitter  2) better \n\t Enter ur choice:");
    scanf("%d",&g[0]);
     if(g[0]==a[0])
     {
         printf("\n\t\t\t\tCorrect answer ");
         points=points+10;
         printf("\n\t\t\t\tGained 10 points                                    POINTS:%d\n\n\n",points);
         printf("       \t\t1.NEXT QUESION   2.exit\n\t\t Enter ur choice:");
         scanf("%d",&i);
     }
     else if(g[0]!=a[0])
        {
        printf("\n\t\t\t\tWrong answer ");
         printf("\n\t\t                                   POINTS:%d\n\n\n",points);
          printf(" \t\t 1.Next question     2.exit\n\t\t Enter ur choice:");
          scanf("%d",&i);
     }
     if(i==1)
     {
       printf("\tDid the bitter butter change into better butter ? ");

       printf("\t1) Yes     2)No  \n\t\t Enter ur choice: ");
       scanf("%d",&g[1]);
     }
     else if(i==2) {
            chatmainmenu();
            }
      if(g[1]==a[1])
     {
         printf("\n\t\t\t\tCorrect answer ");
         points=points+10;
         printf("\n\t\t\t\tGained 10 points                                    POINTS:%d\n\n\n",points);
        // printf("       \t\t1.NEXT QUESION   2.exit");
         //scanf("%d",&i);
     }
     else if(g[1]!=a[1])
        {
        printf("\n\t\t\t\tWrong answer ");
         printf("\n\t\t                                   POINTS:%d\n\n\n",points);
         // printf(" \t\t 1.Next question");
          //scanf("%d",&i);
     }
     else{
        printf("Entered invalid choice");
     }
    fclose(fp);
    }
    }
    else if(choice==2)
    {
        system("cls");
        printf("\n\n\t \tHOW TO PLAY: \n");
        printf("\t\t\t\tFocus is a game taken from ELEVATE APP ,In this game the player has to read  completely whatever is been displayed n the screen\n\n\t\t\t\tand finally question is raised from whatever the player has read till then and the player needs to just answer whether its true r false\n");
        printf("\n\t\t\t\tFor every correct answer you will be awarded 10 points\n\n\n \t\t\t");
        system("pause");
        focus();

    }
    else if(choice==3)
    {
        chatmainmenu();
    }
    else{
        printf("Enter valid choice");
        system("pause");
    chatmainmenu();
    }
    printf("TO GO BACK \n");
    system("pause");
    system(fflush);
    chatmainmenu();
}

void quiz()
{
    FILE *f1,*f2;
    int c=0,i,j,a,k=0;
    char ch,p;
    system("cls");
    system("color 37");
    printf("\n\t\t\t*************************   QUIZ    **********************************\n");
     printf("\n \t\t\t\t\t\t\tWELCOME TO THE GAME\t\t\t\n\n\t\t\t\t\t1.PLAy\n\t\t\t\t\t2.EXIT\n\n\n\t\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d",&a);
    if(a==1)
    {
        system("cls");
        system("color F0");
    f1=fopen("question1.txt","r");
    f2=fopen("answers1.txt","r");
    printf("\tIn this quiz you have to select either of 2 options (a/b) \n\t If any other value entered you will lose mark\n");
    while(k<=9)
    {
        while((ch=getc(f1))!='#')
        {
            putc(ch,stdout);
        }
   printf("\n\tEnter ur choice : ");
   fflush(stdin);
   scanf("%c",&p);
   if(p==(ch=getc(f2)))
   {
       c++;
      // printf("%d",c);
   }
    k++;
    }
    system("cls");
    system("color A6");
    printf("\n\n\n\t\t\t RESULTS PROCESSING:");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            Sleep(1000);
            printf(".");
        }
    }
    printf("\n Total marks :- %d/%d\n\n\n",c,10);
    printf("\t\tTO GO BACK\n ");
    system("pause");
    chatmainmenu();
    fclose(f1);
    fclose(f2);
    }
    else if(a==2)
    {
     chatmainmenu();
    }
    else{
        system("pause");
    chatmainmenu();
    }
    printf("TO GO BACK");
    system("pause");
    chatmainmenu();
   // chatmainmenu();
}
void mainTICTACTOE()
{
    player1='X';
    player2='O';
    checkplayer=0;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            s[i][j]='_';
        }
    }
    playtictactoe();
}
void checktictactoe()
{

    int i=0,j=0;
    for(j=0;j<3;j++)
    {
        if(s[j][i]=='X'&&s[j][i+1]=='X'&&s[j][i+2]=='X')
        {
             printf("\n\t\t\t\t\t\t\t\t\t");
            printf("player 1 WIN!\n");
             printf("\n\t\t\t\t\t\t\t\t\t");
            system("pause");
            mainTICTACTOE();
        }

    }
    for(j=0;j<3;j++)
    {
        if(s[j][i]=='O'&&s[j][i+1]=='O'&&s[j][i+2]=='O')
        {
            if(checkplayer==1&&player1=='O')
            {
                 printf("\n\t\t\t\t\t\t\t\t\t");
                printf("player 1 win\n");
                 printf("\n\t\t\t\t\t\t\t\t\t");
                system("pause");
            }
            else{
                     printf("\n\t\t\t\t\t\t\t\t\t");
             printf("player 2 WIN!\n");
             printf("\n\t\t\t\t\t\t\t\t\t");
             system("pause");
            }
             mainTICTACTOE();
        }

    }
    j=0;
    for(i=0;i<3;i++)
    {
        if(s[j][i]=='O'&&s[j+1][i]=='O'&&s[j+2][i]=='O')
        {
             if(checkplayer==1&&player1=='O')
            {
                 printf("\n\t\t\t\t\t\t\t\t\t");
                printf("player 1 win\n");
                 printf("\n\t\t\t\t\t\t\t\t\t");
                system("pause");
            }
            else{
                     printf("\n\t\t\t\t\t\t\t\t\t");
             printf("player 2 WIN!\n");
             printf("\n\t\t\t\t\t\t\t\t\t");
             system("pause");
            }
             mainTICTACTOE();
        }

    }
    j=0;
    for(i=0;i<3;i++)
    {
        if(s[j][i]=='X'&&s[j+1][i]=='X'&&s[j+2][i]=='X')
        {
             printf("\n\t\t\t\t\t\t\t\t\t");
             printf("player 1 WIN!\n");
              printf("\n\t\t\t\t\t\t\t\t\t");
             system("pause");
             mainTICTACTOE();
        }

    }
    j=0;
    for(i=0;i<1;i++)
    {
        if(s[i][j]=='X'&&s[i+1][j+1]=='X'&&s[i+2][j+2]=='X')
        {
             printf("\n\t\t\t\t\t\t\t\t\t");
             printf("player 1 WIN!\n");
              printf("\n\t\t\t\t\t\t\t\t\t");
             system("pause");
             mainTICTACTOE();
        }
    }
     for(i=0;i<1;i++)
    {
        if(s[i][j]=='O'&&s[i+1][j+1]=='O'&&s[i+2][j+2]=='O')
        {
             if(checkplayer==1&&player1=='O')
            {
                 printf("\n\t\t\t\t\t\t\t\t\t");
                printf("player 1 win\n");
                 printf("\n\t\t\t\t\t\t\t\t\t");
                system("pause");
            }
            else{
                     printf("\n\t\t\t\t\t\t\t\t\t");
             printf("player 2 WIN!\n");
             printf("\n\t\t\t\t\t\t\t\t\t");
             system("pause");
            }
             mainTICTACTOE();
        }
    }
    if(s[2][0]=='X'&&s[1][1]=='X'&&s[0][2]=='X')
        {
             printf("\n\t\t\t\t\t\t\t\t\t");
             printf("player 1 WIN!\n");
              printf("\n\t\t\t\t\t\t\t\t\t");
             system("pause");
             mainTICTACTOE();
        }
        if(s[2][0]=='O'&&s[1][1]=='O'&&s[0][2]=='O')
        {
             if(checkplayer==1&&player1=='O')
            { printf("\n\t\t\t\t\t\t\t\t\t");
                printf("player 1 win\n");
                 printf("\n\t\t\t\t\t\t\t\t\t");
                system("pause");
            }
            else{
                     printf("\n\t\t\t\t\t\t\t\t\t");
             printf("player 2 WIN!\n");
             printf("\n\t\t\t\t\t\t\t\t\t");
             system("pause");
            }
              mainTICTACTOE();
        }
}
int tictactoemenu()
{
int tictactoechoice;
system("cls");
system("COLOR 07");
 printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
printf("WELCOME TO TICTACTOE\n");
 printf("\n\t\t\t\t\t\t\t\t\t");
    printf("1..TWO PLAYER GAME\n");
     printf("\n\t\t\t\t\t\t\t\t\t");
    printf("2..ONE PLAYER GAME\n");
     printf("\n\t\t\t\t\t\t\t\t\t");
    printf("3..HELP\n");
     printf("\n\t\t\t\t\t\t\t\t\t");
    printf("4..EXIT\n");
     printf("\n\t\t\t\t\t\t\t\t\t");
    fflush(stdin);
printf("ENTER YOUR CHOICE::\n");
 printf("\n\t\t\t\t\t\t\t\t\t");
scanf("%d",&tictactoechoice);
return tictactoechoice;
}
void printtictactoe(){
int i,j;
system("cls");
system("COLOR 0A");
 printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
 printf("---------------");
 for(i=0;i<3;i++)
    {
        printf("\n\t\t\t\t\t\t\t\t\t");
        for(j=0;j<3;j++)
        {
            printf("| %c |",s[i][j]);
        }
        if(i!=2)
        {
             //printf("\n\t\t\t\t\t\t\t\t\t");
        printf("\n");
        }
    if(i==2)
    {
         printf("\n\t\t\t\t\t\t\t\t\t");
     printf("---------------\n");
    }
    else{
            printf("\t\t\t\t\t\t\t\t\t");
     printf("---------------\n");

    }
    }
    }
void playtictactoe()
{
    int chM;
    chM=tictactoemenu();
    fflush(stdin);
switch(chM){
case 1:
gametictactoe();
break;
case 2:
gameCPUtictactoe();
break;
case 3:
    tictactoehelp();
    break;
case 4:
    chatmainmenu();
    break;
default:
    printf("enter correct choice::\n");
    tictactoemenu();
    break;
}
}
void tictactoehelp()
{
    system("cls");
    system("COLOR 70");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
    printf(" ---------------\n");
     printf("\t\t\t\t\t\t\t\t\t");
    printf(" | 1 || 2 || 3 | \n\n");
     printf("\n\t\t\t\t\t\t\t\t\t");
    printf(" | 4 || 5 || 6 | \n\n");
     printf("\n\t\t\t\t\t\t\t\t\t");
    printf(" | 7 || 8 || 9 | \n");
     printf("\t\t\t\t\t\t\t\t\t");
      printf(" ---------------\n");
       printf("\n\t\t\t\t\t\t\t\t\t");
    printf("EACH POSITION IS GIVEN A NUMBER \n");
     printf("\n\t\t\t\t\t\t\t\t\t");
    printf("INORDER TO INSERT AT DESIRED POSITION ENTER THAT NUMBER\n");
    printf("\n");
     printf("\n\t\t\t\t\t\t\t\t\t");
    system("pause");
    fflush(stdin);
    mainTICTACTOE();
}
void gametictactoe()
{
char ch;
countTictimes=0;
while(1)
{
    printtictactoe();
     checktictactoe();
      if(player1TURN==1)
      {
          player2turn=1;
           printf("\n\t\t\t\t\t\t\t\t\t");
    printf("enter your position player 1:\n");
     printf("\n\t\t\t\t\t\t\t\t\t");
    scanf("%d",&positionT);
    if(positionT>9||positionT<1){
        printf("invalid choice::\n");
        system("pause");
        fflush(stdin);
        gametictactoe();
    }
     keepposition(1);
      }
      if(countTictimes>=9)
     {
         break;
     }
      if(player2turn==1)
      {
          player1TURN=1;
    printtictactoe();
     checktictactoe();
      printf("\n\t\t\t\t\t\t\t\t\t");
     printf("enter your position player 2:\n");
      printf("\n\t\t\t\t\t\t\t\t\t");
    scanf("%d",&positionT);
    if(positionT>9||positionT<1){
        printf("invalid choice::\n");
        system("pause");
        gametictactoe();
           }
     keepposition(2);
      }
    }
    if(countTictimes>=9)
    {
        printf("game draw!!\n");
        system("pause");
        tictactoemenu();
    }
}
void keepposition(int player)
{
    player;
if(positionT<=3){
    positionT=positionT-1;
    if((s[0][positionT]=='X'&&player==1)||s[0][positionT]=='X')
    {
        printf("ALREDY EXISTS AT THAT POSITION:");
        system("pause");
         if(player==1)
       {
          player2turn=0;
       }
       else{
          player1TURN=0;
       }
    }
    else if((s[0][positionT]=='O'&&player==2)||s[0][positionT]=='O')
    {
        printf("ALREDY EXISTS AT THAT POSITION:");
        system("pause");
          if(player==1)
       {
          player2turn=0;
       }
       else{
          player1TURN=0;
       }
    }
    else{
            if(player==1)
            {
            fflush(stdin);
            countTictimes++;
    s[0][positionT]=player1;
    }
    else{
            fflush(stdin);
            countTictimes++;
    s[0][positionT]=player2;
    }
    }
}
else if(positionT>3&&positionT<=6)
{
    positionT=positionT-4;
    if((s[1][positionT]=='X'&&player==1)||(s[1][positionT]=='X'))
    {
        printf("ALREDY EXISTS AT THAT POSITION:");
        system("pause");
           if(player==1)
       {
          player2turn=0;
       }
       else{
          player1TURN=0;
       }
    }
    else if((s[1][positionT]=='O'&&player==2)||s[1][positionT]=='O')
    { printf("ALREDY EXISTS AT THAT POSITION:");
        system("pause");
           if(player==1)
       {
          player2turn=0;
       }
       else{
          player1TURN=0;
       }
    }
    else{
        if(player==1)
            {
            fflush(stdin);
            countTictimes++;
    s[1][positionT]=player1;
    }
    else{
            fflush(stdin);
            countTictimes++;
    s[1][positionT]=player2;
    }
}
}
else{
    positionT=positionT-7;
    if((s[2][positionT]=='X'&&player==1)||s[2][positionT]=='X')
    {
        printf("ALREDY EXISTS AT THAT POSITION:");
        system("pause");
        if(player==1)
       {
          player2turn=0;
       }
       else{
          player1TURN=0;
       }
    }
    else if((s[2][positionT]=='O'&&player==2)||s[2][positionT]=='O')
    {
     printf("ALREDY EXISTS AT THAT POSITION:");
        system("pause");
          if(player==1)
       {
          player2turn=0;
       }
       else{
          player1TURN=0;
       }
    }
    else{
            if(player==1)
            {
            fflush(stdin);
            countTictimes++;
    s[2][positionT]=player1;
    }
    else{
            fflush(stdin);
            countTictimes++;
    s[2][positionT]=player2;
    }
}
}
}void gameCPUtictactoe()
{
    system("cls");
 countTictimes=0;
 printf("WHICH CHARCTER DO YOU WANT :: (X OR O) ::\n");
 scanf("%c",&player1);
 if(player1=='x'||player1=='X')
 {
     player1='X';
     player2='O';
 }
 else if(player1=='o'||player1=='O')
 {
     player1='O';
     player2='X';
 }
 else{
    printf("PLEASE ENTER CORRECT CHOICE::\n");
    system("pause");
    mainTICTACTOE();
 }
while(1)
{
    checkplayer=1;
    printtictactoe();
     checktictactoe();
      if(player1TURN==1)
      {
          player2turn=1;
           printf("\n\t\t\t\t\t\t\t\t\t");
    printf("enter your position player 1:\n");
     printf("\n\t\t\t\t\t\t\t\t\t");
    scanf("%d",&positionT);
    if(positionT>9||positionT<1){
        printf("invalid choice::\n");
        system("pause");
        fflush(stdin);
        gametictactoe();
    }
     keepposition(1);
      }
      if(countTictimes>=9)
     {
         break;
     }
      if(player2turn==1)
      {
          player1TURN=1;
    printtictactoe();
     checktictactoe();
     positionT=getRANDnumber();
    if(positionT>9||positionT<1){
        printf("invalid choice::\n");
        system("pause");
        gametictactoe();
           }
     keepposition(2);
      }
    }
    checktictactoe();
    printtictactoe();
    if(countTictimes>=9)
    {
        printf("game draw!!\n");
        system("pause");
        tictactoemenu();
    }
}
int getRANDnumber()
{
    printf("processing::\n");
    system("cls");
    int cputurn=rand()%10;
     srand(time(NULL));
    fflush(stdin);
    if(cputurn==0)
    {
        getRANDnumber();
    }
    else if(cputurn<=3)
    {
        if(s[0][cputurn-1]=='_')
        {
            return cputurn;
        }
        else{
            getRANDnumber();
        }
    }
    else if(cputurn>3&&cputurn<=6)
    {
        if(s[1][cputurn-4]=='_')
        {
            return cputurn;
        }
        else{
            getRANDnumber();
        }
    }
    else if(cputurn>6&&cputurn<=9)
    {
        if(s[2][cputurn-7]=='_')
        {
            return cputurn;
        }
        else{
            getRANDnumber();
        }
    }
}
void mainfunctionsudoku()
{
    int i,j,end=0,pop,num,SUchoice;;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            a[i][j]='_';
        }
    }
    a[0][1]=3;
    a[0][2]=2;
    a[1][1]=9;
    a[2][0]=8;
    a[0][3]=9;
    a[1][5]=4;
    a[2][5]=6;
    a[0][7]=6;
    a[1][7]=2;
    a[1][8]=1;
    a[2][8]=3;
    a[2][6]=9;
    a[3][0]=3;
    a[3][2]=6;
    a[3][5]=7;
    a[4][3]=6;
    a[4][4]=9;
    a[4][5]=8;
    a[5][3]=4;
    a[5][6]=6;
    a[5][8]=7;
    a[6][0]=4;
    a[7][0]=1;
    a[7][1]=6;
    a[8][1]=7;
    a[6][2]=8;
    a[6][3]=7;
    a[7][3]=8;
    a[8][5]=3;
    a[6][8]=6;
    a[7][7]=5;
    a[8][7]=1;
    a[8][6]=4;
    SUchoice=sudokumenu();
    switch(SUchoice)
    {
        case 1:
    Sdisplay();
    while(end!=1)
    {
        printf("\nat which position do you want to enter :\n");
        scanf("%d",&pop);
        if(pop==95)
        {
            system("pause");
            mainfunctionsudoku();
        }
        printf("\nwhich number do you want to enter : \n");
        scanf("%d",&num);
        Spass(num,pop);
        end=Scheck();
    }
    if(end==1)
    {
        printf("\nyou win!\n");
    }
    system("pause");
    sudokumenu();
    break;
    case 2:
    sudokuhelp();
    system("pause");
    mainfunctionsudoku();
    break;
    case 3:
    chatmainmenu();
    break;
    default:
    printf("ENTER CORRECT CHOICE\n");
    system("pause");
    mainfunctionsudoku();
    break;
    }
}
void Sdisplay()
{
    int i,j;
    system("cls");
     for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
      {

          if(a[i][j]=='_')
        {
            if(j==8)
            {
                printf("| %c |",a[i][j]);
            }
            else{
            printf("| %c ",a[i][j]);
            }
        }
        else
        {if(j==8)
        {
            printf("| %d |",a[i][j]);
        }
        else{

          printf("| %d ",a[i][j]);
        }
    }
      }
    printf("\n\n");
    }
    printf("---------------------95-------------BACK---------------\n");
}
void Spass(int integer,int position)
{
    int pos,getUcheck;
    if(position<9)
    {
        getSUDOKU=checkPositionExistOrNot(0,position);
        if(getSUDOKU)
        {
         a[0][position]=integer;
         getUcheck=Scheck();
         if(getUcheck==1)
         {
             printf("YOU WIN!!\n");
             system("pause");
             mainfunctionsudoku();
         }
        Sdisplay();
    }
    else{
        printf("\nthe position was default !\n");
        system("pause");
        Sdisplay();
    }
    }
    else if(position==9)
    {
        printf("INVALID CHOICE::\n");
        system("pause");
        Sdisplay();
    }
    else
    {
        pos=position%10;
        position=position/10;
        if(position>=9)
        {
            printf("OUT OF RANGE::\n");
            system("pasue");
            Sdisplay();
        }
         getSUDOKU=checkPositionExistOrNot(position,pos);
        if(getSUDOKU)
        {
        a[position][pos]=integer;
        getUcheck=Scheck();
         if(getUcheck==1)
         {
             printf("YOU WIN!!\n");
             system("pause");
             mainfunctionsudoku();
         }
        Sdisplay();
        }
        else{
            printf("THE POSITION WAS DEFAULT::");
            system("pause");
            Sdisplay();
        }
    }
}
int Scheck()
{
    int i,j,sum=0,count=0;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if((a[i][j]==1)||(a[i][j]==2)||(a[i][j]==3)||(a[i][j]==4)||(a[i][j]==5)||(a[i][j]==6)||(a[i][j]==7)||(a[i][j]==8)||(a[i][j]==9))
            {
            sum=sum+a[i][j];
            }
            else
            {
                return 0;
            }
        }
        if(sum!=45)
        {
            return 0;
        }
        sum=0;
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            sum=sum+a[j][i];
        }
        if(sum==45)
        {
            sum=0;
            ++count;
        }
        else{
            sum=0;
        }
    }

    if(count==8)
    {
        return 1;
    }
}
int sudokumenu()
{
    int choiceS;
    system("cls");
     printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
    printf("1..NEW GAME\n");
     printf("\t\t\t\t\t\t\t\t\t");
    printf("2..HELP\n");
     printf("\t\t\t\t\t\t\t\t\t");
    printf("3..exit\n");
     printf("\t\t\t\t\t\t\t\t\t");
    printf("ENTER YOUR CHOICE\n");
     printf("\t\t\t\t\t\t\t\t\t");
    scanf("%d",&choiceS);
    return choiceS;
}
void sudokuhelp()
{
    system("cls");
    printf("THIS GAME WORKS WITH THE POSITIO'S OF THE ARRAYS \n");
    printf("IF YOU WANT TO ENTER A NUMBER FIRST ENTER THE POSITION OF THE NUMBER THEN THE NUMBER\n");
    printf("IF THE NUMBER WAS DEFAULT YOU CANT ENTER ANY NUMBER AT THAT POSITION\n");
    printf("THANK YOU!");
    printf("PLEASE ENJOY THE GAME\n");
system("pause");
sudokumenu();
}
int checkPositionExistOrNot(int p1,int p2)
{
    int i;
    fflush(stdin);
for(i=0;i<66;i=i+2)
{
if(posSUDOKU[i]==p1)
   {
if(posSUDOKU[i+1]==p2)
         {
return 0;
         }
  }
}
return 1;
}

