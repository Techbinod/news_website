#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void  main(void)
{
    int counter=0;
    int set1,set2,set3,set4,set5,set6,set7,set8,set9,set10,set11;
    int run=0,wicket=0,wicketfall=0,bm=0,rm=0,wm=0;
    int Run_Out=0,Stumped_Out=0,Catched_Out=0,LBW_Out=0;
    int ball=0,totalover=0,target2;
    float x=0,y=0,Run_Rate=0,RRun_Rate=0;
    int over1=0,over2=0;
    int LBW1[11],LBW2[11],C1[11],C2[11],S1[11],S2[11],R1[11],R2[11];

    int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0;
    int countw=0,countr=0,countc=0,counta=0,countl=0,counts=0,countn=0,countnr=0;
    int scorer1=0,scorer2=0,scorer3=0,scorer4=0,scorer5=0,scorer6=0,scorer7=0,scorer8=0,scorer9=0,scorer10=0,scorer11=0;
    char ch,chh,chhh,exit;
    int i=0,a[1000],b[100],j,p;
    int rem,k=1,l=0,w=0,dot=0,v;
    char player[15][40];
    int playernumber1,playernumber2;//for edting player name;
    int dot1=0,dot2=0,dot3=0,dot4=0,dot5=0,dot6=0,dot7=0,dot8=0,dot9=0,dot10=0,dot11=0;
    int one1=0,one2=0,one3=0,one4=0,one5=0,one6=0,one7=0,one8=0,one9=0,one10=0,one11=0;
    int two1=0,two2=0,two3=0,two4=0,two5=0,two6=0,two7=0,two8=0,two9=0,two10=0,two11=0;
    int three1=0,three2=0,three3=0,three4=0,three5=0,three6=0,three7=0,three8=0,three9=0,three10=0,three11=0;
    int four1=0,four2=0,four3=0,four4=0,four5=0,four6=0,four7=0,four8=0,four9=0,four10=0,four11=0;
    int six1=0,six2=0,six3=0,six4=0,six5=0,six6=0,six7=0,six8=0,six9=0,six10=0,six11=0;
    int ball0=0,ball1=0,ball2=0,ball3=0,ball4=0,ball5=0,ball6=0,ball7=0,ball8=0,ball9=0,ball10=0;
    char so[11][15],sb[11][15],co[11][15],cb[11][15],ro[11][15],rb[11][15],lo[11][15],lb[11][15];
    printf("**************************Welcome In First Inning*******************************");
    char admin[10];
    char ad1,ad2,ad3,ad4;

    do
    {
  printf("\nPlease Enter Admin Password TO Begin:");
  ad1=getch();
  ad2=getch();
  ad3=getch();
  ad4=getch();
  if (ad1=='c'&& ad2=='r'&&ad3=='i'&& ad4=='c')
  {
      admin[0]='c';
      admin[1]='r';
      admin[2]='i';
      admin[3]='c';
     // printf("Entered\n\n");
     // puts(admin);

  }
  else


printf("\nWrong Admin Password=%c%c%c%c",ad1,ad2,ad3,ad4);

//counter=counter+1;
//printf("Your counter is now=%d",counter);
}while(strcmp(admin,"cric")!=0 );
  /*{
      printf("Enter the password:");
      scanf(" %s",word);
  }while(strlen(word)!=4);*/

    system("cls");
    printf("\nPlease enter how many over game:");
    scanf("%d",&totalover);

    printf("\nPlease Enter Player Name");
    for(l=1;l<=11;l++)
    {
     printf("\nPlayer%d=",l);
     scanf("%s",&player[l]);
     if((player[l][0]>=97) && (player[l][0]<=122))
     {
         player[l][0]=player[l][0]-32;
     }
    }

  do
   {

    set1=0,set2=0,set3=0,set4=0,set5=0,set6=0,set7=0,set8=0,set9=0,set10=0,set11=0;
    printf("\n\n*************************Guiding Symbols****************");
    printf("\n\t\tEnter 1,2,3,4,6 to record run");
    printf("\n\t\tEnter W  for Wide Ball");
    printf("\n\t\tEnter R  for runout");
    printf("\n\t\tEnter N  for noball");
    printf("\n\t\tEnter C  for catchball");
    printf("\n\t\tEnter L  for LBW");
    printf("\n\t\tEnter S  for stump-Out");
    printf("\n\t\tEnter E for Extra-Information,M for Player Name edit && Down Style(abcd)to record palyer run");
    printf("\n\n1.%s=a 2.%s=b 3.%s=c 4.%s=d 5.%s=e 6.%s=f 7.%s=g 8.%s=h 9.%s=i 10.%s=j 11.%s=k",player[1],player[2],player[3],player[4],player[5],player[6],player[7],player[8],player[9],player[10],player[11]);
    printf("\n\n**********************Enter Current Information************:");

    scanf("%s",&ch);
    switch (ch)
     {

        case '0':
        {
         dot=dot+1;
         run=run+0;
         ball=ball+1;
         count0=count0+1;
         i++;
         a[i]='0';
         b[k]='0';
         k++;
        printf("By which player:");
        scanf("%s",&chh);
         if(chh=='a')
         {
         scorer1=scorer1+0;
         dot1++;
         ball0++;
         set1=1;
         }
         if(chh=='b')
         {
         scorer2=scorer2+0;
         dot2++;
         ball1++;
        set2=1;
         }
         if(chh=='c')
         {
         scorer3=scorer3+0;
         dot3++;
         ball2++;
         set3=1;
         }

      if(chh=='d')
         {
         scorer4=scorer4+0;
         dot4++;
         ball3++;
        set4=1;
         }

        if(chh=='e')
         {
         scorer5=scorer5+0;
         dot5++;
         ball4++;
         set5=1;
         }
         if(chh=='f')
         {
        scorer6=scorer6+0;
         dot6++;
         ball5++;
       set6=1;
         }
       if(chh=='g')
        {
         scorer7=scorer7+0;
         dot7++;
         ball6++;
         set7=1;
        }
      if(chh=='h')
        {
         scorer8=scorer8+0;
        dot8++;
        ball7++;
        set8=1;
        }
        if(chh=='i')
        {
         scorer9=scorer9+0;
        dot9++;
        ball8++;
       set9=1;
        }
      if(chh=='j')
      {

         scorer10=scorer10+0;
       dot10++;
       ball9++;
       set10=1;
      }
     if(chh=='k')
        {
         scorer11=scorer11+0;
         dot11++;
         ball10++;
         set11=1;
        }
        break;
        }

        case '1':
        {
         run=run+1;
         ball=ball+1;
         count1=count1+1;
         i++;
         a[i]='1';
         b[k]='1';
         k++;
         printf("By which player:");
       scanf("%s",&chh);
         if(chh=='a')
         {
         scorer1=scorer1+1;
         one1++;
         ball0++;
        set1=1;
         }
         if(chh=='b')
         {

         scorer2=scorer2+1;
         one2++;
         ball1++;
        set2=1;
         }
         if(chh=='c')
         {

         scorer3=scorer3+1;
         one3++;
         ball2++;
         set3=1;
         }
      if(chh=='d')
         {

         scorer4=scorer4+1;
         one4++;
         ball3++;
        set4=1;
         }
       if(chh=='e')
        {

         scorer5=scorer5+1;
        one5++;
        ball4++;
       set5=1;
        }
         if(chh=='f')
         {

         scorer6=scorer6+1;
         one6++;
         ball5++;
       set6=1;
         }
       if(chh=='g')
        {


         scorer7=scorer7+1;
        one7++;
        ball6++;
       set7=1;
        }
      if(chh=='h')
        {

         scorer8=scorer8+1;
        one8++;
        ball7++;
        set8=1;
        }
        if(chh=='i')
        {

        scorer9=scorer9+1;
        one9++;
        ball8++;
       set9=1;
        }
      if(chh=='j')
      {

      scorer10=scorer10+1;
      one10++;
      ball9++;
      set10=1;
      }
     if(chh=='k')
        {


         scorer11=scorer11+1;
        one11++;
        ball10++;
        set11=1;
        }
         break;
         }


        case '2':
        {
        run=run+2;
         ball=ball+1;
         count2=count2+1;
         i++;
         a[i]='2';
      b[k]='2';
         k++;
         printf("By which player:");
         scanf("%s",&chh);
         if(chh=='a')
         {

         scorer1=scorer1+2;
         two1++;
         ball0++;
         set1=1;
         }
        if(chh=='b')
        {


         scorer2=scorer2+2;
         two2++;
         ball1++;
        set2=1;
        }
        if(chh=='c')
        {
         scorer3=scorer3+2;
        two3++;
        ball2++;
        set3=1;
        }
      if(chh=='d')
         {

         scorer4=scorer4+2;
         two4++;
         ball3++;
        set4=1;
         }

       if(chh=='e')
        {
         scorer5=scorer5+2;
        two5++;
        ball4++;
       set5=1;

        }
         if(chh=='f')
         {

         scorer6=scorer6+2;
         two6++;
         ball5++;
       set6=1;

         }
       if(chh=='g')
        {

         scorer7=scorer7+2;
        two7++;
        ball6++;
       set7=1;

        }
      if(chh=='h')
        {

         scorer8=scorer8+2;
        two8++;
        ball7++;
        set8=1;

        }
        if(chh=='i')
        {

         scorer9=scorer9+2;
        two9++;
        ball8++;
       set9=1;

        }
      if(chh=='j')
      {
         scorer10=scorer10+2;
      two10++;
      ball9++;
      set10=1;

      }
     if(chh=='k')
        {

         scorer11=scorer11+2;
        two11++;
        ball10++;
        set11=1;

        }
         break;
         }


        case '3':
        {
        run=run+3;
         ball=ball+1;
         count3=count3+1;

         i++;
         a[i]='3';
      b[k]='3';
         k++;
         printf("By which player:");
       scanf("%s",&chh);
        if(chh=='a')
        {

        scorer1=scorer1+3;
        three1++;
        ball0++;
        set1=1;

        }
        if(chh=='b')
        {


         scorer2=scorer2+3;
        three2++;
        ball1++;
       set2=1;

        }
        if(chh=='c')
        {

         scorer3=scorer3+3;
        three3++;
        ball2++;
        set3=1;

        }
      if(chh=='d')
         {
         scorer4=scorer4+3;
         three4++;
         ball3++;
        set4=1;

         }
       if(chh=='e')
        {

         scorer5=scorer5+3;
        three5++;
        ball4++;
       set5=1;

        }
         if(chh=='f')
        {
        three6++;
         scorer6=scorer6+3;
         ball5++;
       set6=1;

        }
       if(chh=='g')
        {

        three7++;
         scorer7=scorer7+3;
         ball6++;
        set7=1;

        }
      if(chh=='h')
        {


        scorer8=scorer8+3;
        three8++;
        ball7++;
        set8=1;

        }

        if(chh=='i')
        {

         scorer9=scorer9+3;
        three9++;
        ball8++;
       set9=1;

        }
      if(chh=='j')
      {

         scorer10=scorer10+3;
      three10++;
      ball9++;
      set10=1;

      }
     if(chh=='k')
        {
            three11++;

         scorer11=scorer11+3;
         ball10++;
         set11=1;

        }
         break;
         }
        case '4':
        {
        run=run+4;
         ball=ball+1;
         count4=count4+1;
         i++;
         a[i]='4';
      b[k]='4';
         k++;
        printf("By which player:");
        scanf("%s",&chh);
        if(chh=='a')
        {

        scorer1=scorer1+4;
        four1++;
        ball0++;
        set1=1;

        }
        if(chh=='b')
        {


         scorer2=scorer2+4;
         four2++;
         ball1++;
        set2=1;

        }
        if(chh=='c')
        {


         scorer3=scorer3+4;
         four3++;
         ball2++;
         set3=1;

        }
      if(chh=='d')
         {


         scorer4=scorer4+4;
         four4++;
         ball3++;
        set4=1;

         }
       if(chh=='e')
        {


         scorer5=scorer5+4;
        four5++;
        ball4++;
       set5=1;

        }
         if(chh=='f')
         {
             four6++;
             ball5++;
           set6=1;


         scorer6=scorer6+4;
         }
       if(chh=='g')
        {


         scorer7=scorer7+4;
        four7++;
        ball6++;
       set7=1;

        }
      if(chh=='h')
        {

        four8++;
        ball7++;
        scorer8=scorer8+4;
        set8=1;

        }
        if(chh=='i')
        {

        four9++;
        ball8++;
       set9=1;

         scorer9=scorer9+4;
        }
      if(chh=='j')
      {

      four10++;
      ball9++;
      set10=1;
      scorer10=scorer10+4;
      }
     if(chh=='k')
        {

    four11++;
    ball10++;
    set11=1;
    scorer11=scorer11+4;
        }
         break;
         }



        case '6':
        {
         run=run+6;
         ball=ball+1;
         count6=count6+1;
         i++;
         a[i]='6';
      b[k]='6';
         k++;
         printf("By which player:");
         scanf("%s",&chh);
      if(chh=='a')
      {

         six1++;
         ball0++;
         set1=1;;
         scorer1=scorer1+6;
      }
        if(chh=='b')
        {

        six2++;
        ball1++;
        set2=1;
        scorer2=scorer2+6;
        }
        if(chh=='c')
        {
            six3++;
            ball2++;
            set3=1;
           scorer3=scorer3+6;
        }
      if(chh=='d')
         {


         six4++;
         ball3++;
        set4=1;
        scorer4=scorer4+6;
         }
       if(chh=='e')
        {


         scorer5=scorer5+6;
        six5++;
        ball4++;
       set5=1;

        }
         if(chh=='f')
         {


         scorer6=scorer6+6;
         six6++;
         ball5++;
       set6=1;

         }
       if(chh=='g')
        {
            six7++;
            ball6++;
           set7=1;
          scorer7=scorer7+6;
        }
      if(chh=='h')
        {
            six8++;
            ball7++;
            set8=1;
           scorer8=scorer8+6;
        }
        if(chh=='i')
        {

        six9++;
        ball8++;
       set9=1;
       scorer9=scorer9+6;
      }
      if(chh=='j')
      {


      scorer10=scorer10+6;
    six10++;
    ball9++;
    set10=1;

      }
 if(chh=='k')
    {

      scorer11=scorer11+6;
      six11++;
      ball10++;
      set11=1;

    }
         break;
         }


            case 'W':
            case 'w':
            {

             printf("           **************** Wide**************************");
             run=run+1;
             wicket=wicket+0;
             ball=ball+0;
             countw=countw+1;
             i++;
             a[i]='W';
             b[k]='W';
             k++;
             break;
            }



            case 'l':
            case 'L':
            {


             printf("           ****************LBW Out**************************");
             run=run+0;
             wicket=wicket+1;
             LBW_Out=LBW_Out+1;
             printf("\nLBW Out Player:");
             scanf("%s",&lo[LBW_Out]);
             printf("\nLBW Out By:");
             scanf("%s",&lb[LBW_Out]);
             ball=ball+1;
             countl=countl+1;
             LBW1[LBW_Out]=over1;
             LBW2[LBW_Out]=over2;

             i++;
             a[i]='L';
             b[k]='L';
             k++;
             break;
            }


            case 'n':
            case 'N':
            {
             printf("            **********NO Ball Case*******");
             int m;
             printf("\nPlease enter runs scored during no ball:");
             scanf("%d",&m);
             run=run+m+1;//1 added as in no ball 1 run counts and + run scored

             countnr=countnr+m;
             ball=ball+1;
             countn=countn+1;
             i++;
             a[i]='N';
             b[k]='N';
             k++;
             printf("           **********No Ball*******");
             printf("\n             No Ball Run Scored=%d",m);
              break;
            }

            case 'R':
            case 'r':
            {

            printf("            **********Run Out*******");
            run=run+0;
            wicket=wicket+1;
            Run_Out=Run_Out+1;
            printf("\nRun Out Player:");
            scanf("%s",&ro[Run_Out]);
            printf("\nRun Out By:");
            scanf("%s",&rb[Run_Out]);
            R1[Run_Out]=over1;
            R2[Run_Out]=over2;
            ball=ball+1;
            countr=countr+1;
            i++;
            a[i]='R';
            b[k]='R';
            k++;
              break;
            }
            case 'C':
            case 'c':
            {

            printf("           **********Catch Out*******");
            run=run+0;
            wicket=wicket+1;
            Catched_Out=Catched_Out+1;
            printf("\nCatched Out Player:");
            scanf("%s",&co[Catched_Out]);
            printf("\nCatched Out By:");
            scanf("%s",&cb[Catched_Out]);
            C1[Catched_Out]=over1;
            C2[Catched_Out]=over2;
            ball=ball+1;
            countc=countc+1;
            i++;
            a[i]='C';
            b[k]='C';
            k++;
            break;
            }
            case 'S':
            case 's':
            {

             printf("          **********Stump Out*******");
             run=run+0;
             wicket=wicket+1;
             Stumped_Out=Stumped_Out+1;
             printf("\nStumped Out Player:");
             scanf("%s",&so[Stumped_Out]);
             printf("\nStumped Out By:");
             scanf("%s",&sb[Stumped_Out]);
             S1[Stumped_Out]=over1;
             S2[Stumped_Out]=over2;
             ball=ball+1;
             counts=counts+1;
             i++;
             a[i]='S';
             b[k]='S';
             k++;
             break;
            }


            case 'E':
            case 'e':
            {

                printf("\nCatch_Out  Run_Out  Stump_Out  LBW_Out  Wicket  Wide  No_Ball  Extra_Run");
                printf("\n %d           %d         %d         %d        %d      %d     %d        %d",countc,countr,counts,countl,wicket,countw,countn,(countnr+countw));
                printf("\n\nRun\tBall\tOver \tRun_Rate\tDot\tOne\tTwo\tThree\tFour Six");
                printf("\n%d   \t %d \t%d.%d\t%.2f    \t%d \t%d \t %d\t %d  \t %d   %d",run,ball,over1,over2,Run_Rate,dot,count1,count2,count3,count4,count6);

                for(i=1;i<=Stumped_Out;i++)
                {

                printf("\n\t\t\t**** %s Stumped_Out by %s at %d.%d over****",so[i],sb[i],S1[i],S2[i]);

                }
                for(i=1;i<=Run_Out;i++)
                {

                printf("\n\t\t\t**** %s Run_Out by %s at %d.%d over****",ro[i],rb[i],R1[i],R2[i]);

                }
                 for(i=1;i<=Catched_Out;i++)
                {

                printf("\n\t\t\t**** %s Catched_Out by %s at %d.%d over****",co[i],cb[i],C1[i],C2[i]);

                }
                for(i=1;i<=LBW_Out;i++)
                {

                printf("\n\t\t\t**** %s LBW_Out by %s at %d.%d over****",lo[i],lb[i],LBW1[i],LBW2[i]);

                }
                printf("\n\n\t**********************Player Score Information*********************");
                printf("\nPlayer:  Player1   Player2   Player3   Player4   Player5    Player6   Player7   Player8   Player9   Player10   Player11");
                printf("\nName  :  %-10s%-10s%-10s%-10s%-10s %-10s%-10s%-10s%-10s%-10s %-10s  ",player[1],player[2],player[3],player[4],player[5],player[6],player[7],player[8],player[9],player[10],player[11]);
                printf("\nScore :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,scorer1,-3,scorer2,-3,scorer3,-3,scorer4,-3,scorer5,-3,scorer6,-3,scorer7,-3,scorer8,-3,scorer9,-3,scorer10,-3,scorer11);
                printf("\nBall  :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,ball0,-3,ball1,-3,ball2,-3,ball3,-3,ball4,-3,ball5,-3,ball6,-3,ball7,-3,ball8,-3,ball9,-3,ball10);
                printf("\nDot   :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,dot1,-3,dot2,-3,dot3,-3,dot4,-3,dot5,-3,dot6,-3,dot7,-3,dot8,-3,dot9,-3,dot10,-3,dot11);
                printf("\nOne   :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,one1,-3,one2,-3,one3,-3,one4,-3,one5,-3,one6,-3,one7,-3,one8,-3,one9,-3,one10,-3,one11);
                printf("\nTwo   :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,two1,-3,two2,-3,two3,-3,two4,-3,two5,-3,two6,-3,two7,-3,two8,-3,two9,-3,two10,-3,two11);
                printf("\nThree :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,three1,-3,three2,-3,three3,-3,three4,-3,three6,-3,three7,-3,three8,-3,three9,-3,three10,-3,three11);
                printf("\nFour  :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,four1,-3,four2,-3,four3,-3,four4,-3,four5,-3,four6,-3,four7,-3,four8,-3,four9,-3,four10,-3,four11);
                printf("\nSix   :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,six1,-3,six2,-3,six3,-3,six4,-3,six5,-3,six6,-3,six7,-3,six8,-3,six9,-3,six10,-3,six11);

                printf("\nUpto Now:");
                for(l=1;l<k;l++)
                {
                    printf("%c",b[l]);
                    if(l%6==0)
                    {
                        printf("-");
                    }
                }
                            break;

            }
            case 'M':
            case 'm':
            {
                printf("Player number to change from this order:");
                scanf("%d",&playernumber1);
                printf("Entered Player Name to be placed:");
                scanf(" %s",&player[playernumber1]);
                if((player[playernumber1][0]>=97) && (player[playernumber1][0]<=122))
                  {
                  player[playernumber1][0]=player[playernumber1][0]-32;
                  }
                printf("\nEntered player number Who is comming at this order :");
                scanf("%d",&playernumber2);
                printf("\nEnter Player name:");
                scanf(" %s",&player[playernumber2]);
                if((player[playernumber2][0]>=97) && (player[playernumber2][0]<=122))
                  {
                  player[playernumber2][0]=player[playernumber2][0]-32;
                  }
                  break;

            }

            }



    over1=ball/6;
    over2=ball %6;
    x=run;
    y=ball;
    Run_Rate=x/y*6;
    printf("\n******************Previous Information*************");
    printf("\n                        Run=%d",run);
    printf("\n                        Ball=%d",ball);
    printf("\n                        Over=%d.%d",over1,over2);
    printf("\n                        Wicket=%d",wicketfall);
    printf("\n                        Run Rate=%.2f",Run_Rate);
    printf("\n\nThis over:");
    for(j=1;j<=i;j++)
    {
     printf(" %c",a[j]);
    }
    rem=ball %6;
    if(rem==0)
    {
        printf("-*****Over Complete*****\n");
        i=0;
    }
    printf("\nUpto Now:");
                for(l=1;l<k;l++)
                {
                    printf("%c",b[l]);
                    if(l%6==0)
                    {
                        printf("-");
                    }
                }
    if(wicket!=w)
    {
        w=w+1;
        printf("\n   ********%d Wicket Fall  at %d.%d over*******",w,over1,over2);
    }
 //printf("\n%d=%d",run,target);since at while run!=target nt working
 wicketfall=wicket;
 if(ball==totalover*6)
 {
     wicket=10;//did this as at while or condition run!=target didnot worked
 }

                if(set1==1)
                {
                printf("\n\n\t\t\t\tPlayer1===%s",player[1]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer1);
                printf("\n\t\t\t\tBall Played=%d",ball0);
                printf("\n\t\t\t\tdot=%d one=%d two=%d three=%d Four=%d Six=%d",dot1,one1,two1,three1,four1,six1);
                }

                if(set2==1)
                {
                printf("\n\n\t\t\t\tPlayer2===%s",player[2]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer2);
                printf("\n\t\t\t\tBall Played=%d",(ball1));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot2,one2,two2,three2,four2,six2);
                }

                if(set3==1)
                {
                printf("\n\n\t\t\t\tPlayer3===%s",player[3]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer3);
                printf("\n\t\t\t\tBall Played=%d",(ball2));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot3,one3,two3,three3,four3,six3);
                }

                 if(set4==1)
                {
                printf("\n\n\t\t\t\tPlayer4===%s",player[4]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer4);
                printf("\n\t\t\t\tBall Played=%d",(ball3));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot4,one4,two4,three4,four4,six4);
                }
                 if(set5==1)
                {
                printf("\n\n\t\t\t\tPlayer5===%s",player[5]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer5);
                printf("\n\t\t\t\tBall Played=%d",(ball4));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot5,one5,two5,three5,four5,six5);
                }
                 if(set6==1)
                {
                printf("\n\n\t\t\t\tPlayer6===%s",player[6]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer6);
                printf("\n\t\t\t\tBall Played=%d",(ball5));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot6,one6,two6,three6,four6,six6);
                }
                 if(set7==1)
                {
                printf("\n\n\t\t\t\tPlayer7===%s",player[7]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer7);
                printf("\n\t\t\t\tBall Played=%d",(ball6));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot7,one7,two7,three7,four7,six7);
                }
                 if(set8==1)
                {
                printf("\n\n\t\t\t\tPlayer8===%s",player[8]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer8);
                printf("\n\t\t\t\tBall Played=%d",(ball7));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot8,one8,two8,three8,four8,six8);
                }

                 if(set9==1)
                {
                printf("\n\n\t\t\t\tPlayer9===%s",player[9]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer9);
                printf("\n\t\t\t\tBall Played=%d",(ball8));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot9,one9,two9,three9,four9,six9);
                }
                 if(set10==1)
                {
                printf("\n\n\t\t\t\tPlayer10===%s",player[10]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer10);
                printf("\n\t\t\t\tBall Played=%d",(ball9));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot10,one10,two10,three10,four10,six10);
                }
                 if(set11==1)
                {
                printf("\n\n\t\t\t\tPlayer11===%s",player[11]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer11);
                printf("\n\t\t\t\tBall Played=%d",(ball10));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot11,one11,two11,three11,four11,six11);
                }

    }while(wicket!=10);// ||run!=target);

    printf("\n\n\n*************************Today match Summary*****************************");
                printf("\n\n\t\t***************Target=%d***************",run+1);
                target2=run+1;
                float target=run+1;
                float balltarget=totalover*6;
                printf("\n************Required %d Run  From %d Over(%d Ball)  at  Run_Rate of=%.2f*********",run+1,totalover,totalover*6,(target/balltarget)*6);
                printf("\n\nCatch_Out\tRun_Out\tStump_Out\tLBW_Out\tWicket\tWide\tNo_Ball\tExtra_Run");
                printf("\n %d      \t %d    \t  %d     \t %d    \t %d   \t %d \t %d    \t  %d",countc,countr,counts,countl,wicketfall,countw,countn,(countnr+countw));
                printf("\n\nRun\tBall\tOver \tRun_Rate\tDot\tOne\tTwo\tThree\tFour Six");
                printf("\n%d   \t %d \t%d.%d\t%.2f    \t%d \t%d \t %d\t %d  \t %d   %d",run,ball,over1,over2,Run_Rate,dot,count1,count2,count3,count4,count6);

                printf("\nIn This Match:");
                for(l=1;l<k;l++)
                {
                    printf("%c",b[l]);
                    if(l%6==0)
                    {
                        printf("-");
                    }
                }
                for(i=1;i<=Stumped_Out;i++)
                {

                printf("\n\t\t\t**** %s Stumped_Out by %s at %d.%d over****",so[i],sb[i],S1[i],S2[i]);

                }
                for(i=1;i<=Run_Out;i++)
                {

                printf("\n\t\t\t**** %s Run_Out by %s at %d.%d over****",ro[i],rb[i],R1[i],R2[i]);

                }
                 for(i=1;i<=Catched_Out;i++)
                {

                printf("\n\t\t\t**** %s Catched_Out by %s at %d.%d over****",co[i],cb[i],C1[i],C2[i]);

                }
                for(i=1;i<=LBW_Out;i++)
                {

                printf("\n\t\t\t**** %s LBW_Out by %s at %d.%d over****",lo[i],lb[i],LBW1[i],LBW2[i]);

                }
                printf("\n\n\t**********************Player Score Information*********************");
                printf("\nPlayer:  Player1   Player2   Player3   Player4   Player5    Player6   Player7   Player8   Player9   Player10   Player11");
                printf("\nName  :  %-10s%-10s%-10s%-10s%-10s %-10s%-10s%-10s%-10s%-10s %-10s  ",player[1],player[2],player[3],player[4],player[5],player[6],player[7],player[8],player[9],player[10],player[11]);
                printf("\nScore :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,scorer1,-3,scorer2,-3,scorer3,-3,scorer4,-3,scorer5,-3,scorer6,-3,scorer7,-3,scorer8,-3,scorer9,-3,scorer10,-3,scorer11);
                printf("\nBall  :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,ball0,-3,ball1,-3,ball2,-3,ball3,-3,ball4,-3,ball5,-3,ball6,-3,ball7,-3,ball8,-3,ball9,-3,ball10);
                printf("\nDot   :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,dot1,-3,dot2,-3,dot3,-3,dot4,-3,dot5,-3,dot6,-3,dot7,-3,dot8,-3,dot9,-3,dot10,-3,dot11);
                printf("\nOne   :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,one1,-3,one2,-3,one3,-3,one4,-3,one5,-3,one6,-3,one7,-3,one8,-3,one9,-3,one10,-3,one11);
                printf("\nTwo   :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,two1,-3,two2,-3,two3,-3,two4,-3,two5,-3,two6,-3,two7,-3,two8,-3,two9,-3,two10,-3,two11);
                printf("\nThree :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,three1,-3,three2,-3,three3,-3,three4,-3,three6,-3,three7,-3,three8,-3,three9,-3,three10,-3,three11);
                printf("\nFour  :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,four1,-3,four2,-3,four3,-3,four4,-3,four5,-3,four6,-3,four7,-3,four8,-3,four9,-3,four10,-3,four11);
                printf("\nSix   :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,six1,-3,six2,-3,six3,-3,six4,-3,six5,-3,six6,-3,six7,-3,six8,-3,six9,-3,six10,-3,six11);



                do
                {

                printf("\nEnter S to Start 2nd Session:");
                scanf("%s",&exit);
                }while(exit!='S');

   printf("\n\t\t****************Welcome In Second Inning*************");
   printf("\n\n\t\t            Target=%d",run+1);
   printf("\n\t                Required %d Run  From %d Over(%d Ball)  at  Run_Rate of=%.2f",run+1,totalover,totalover*6,(target/balltarget)*6);


     set1=0,set2=0,set3=0,set4=0,set5=0,set6=0,set7=0,set8=0,set9=0,set10=0,set11=0;
     run=0,wicket=0,wicketfall=0,bm=0,rm=0,wm=0;
     Run_Out=0,Stumped_Out=0,Catched_Out=0,LBW_Out=0;
     ball=0;
     Run_Rate=0;
     int xx=0,yy=0;
     RRun_Rate=0;
     over1=0,over2=0;
     char lbw1[11],lbw2[11],c1[11],c2[11],s1[11],s2[11],r1[11],r2[11];
     x=0,y=0;
     count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0;
    countw=0,countr=0,countc=0,counta=0,countl=0,counts=0,countn=0,countnr=0;
     scorer1=0,scorer2=0,scorer3=0,scorer4=0,scorer5=0,scorer6=0,scorer7=0,scorer8=0,scorer9=0,scorer10=0,scorer11=0;
    char ch1,chh1,exit1;
    i=0;
    int a1[1000],b1[100],j1=0,p1=0;
    rem=0,k=1,l=0,w=0,dot=0,v;
    char playerz[15][40];
     dot1=0,dot2=0,dot3=0,dot4=0,dot5=0,dot6=0,dot7=0,dot8=0,dot9=0,dot10=0,dot11=0;
    one1=0,one2=0,one3=0,one4=0,one5=0,one6=0,one7=0,one8=0,one9=0,one10=0,one11=0;
     two1=0,two2=0,two3=0,two4=0,two5=0,two6=0,two7=0,two8=0,two9=0,two10=0,two11=0;
     three1=0,three2=0,three3=0,three4=0,three5=0,three6=0,three7=0,three8=0,three9=0,three10=0,three11=0;
     four1=0,four2=0,four3=0,four4=0,four5=0,four6=0,four7=0,four8=0,four9=0,four10=0,four11=0;
     six1=0,six2=0,six3=0,six4=0,six5=0,six6=0,six7=0,six8=0,six9=0,six10=0,six11=0;
     ball0=0,ball1=0,ball2=0,ball3=0,ball4=0,ball5=0,ball6=0,ball7=0,ball8=0,ball9=0,ball10=0;
    char soz[11][15],sbz[11][15],coz[11][15],cbz[11][15],roz[11][15],rbz[11][15],loz[11][15],lbz[11][15];

    printf("\nPlease Enter Player Name");
    for(l=1;l<=11;l++)
    {
     printf("\nPlayer%d=",l);
     scanf("%s",&playerz[l]);
     if((playerz[l][0]>=97) && (playerz[l][0]<=122))
     {
         playerz[l][0]=playerz[l][0]-32;
     }
    }

  do
    {
    set1=0,set2=0,set3=0,set4=0,set5=0,set6=0,set7=0,set8=0,set9=0,set10=0,set11=0;
    printf("\n*************************Guiding Symbols****************");
    printf("\n\t\tEnter 1,2,3,4,6 to record run");
    printf("\n\t\tEnter W  for Wide Ball");
    printf("\n\t\tEnter R  for runout");
    printf("\n\t\tEnter N  for noball");
    printf("\n\t\tEnter C  for catchball");
    printf("\n\t\tEnter L  for LBW");
    printf("\n\t\tEnter S  for stump-Out");
    printf("\n\t\tEnter E for Extra-Information && Down Style(abcd) As PlayerName");
    printf("\n1.%s=a 2.%s=b 3.%s=c 4.%s=d 5.%s=e 6.%s=f 7.%s=g 8.%s=h 9.%s=i 10.%s=j 11.%s=k",playerz[1],playerz[2],playerz[3],playerz[4],playerz[5],playerz[6],playerz[7],playerz[8],playerz[9],playerz[10],playerz[11]);
    printf("\n\n**********************Enter Current Information************:");

   scanf("%s",&ch1);
    switch (ch1)
     {

        case '0':
        {
         dot=dot+1;
         run=run+0;
         ball=ball+1;
         count0=count0+1;
         i++;
         a1[i]='0';
         b1[k]='0';
         k++;
        //do//(did this as even when i pressed
        //   (other letter run counts,i want to make
        //   (these letters typed if not then repeat agian)
         //{  //(but not this nt working)

         printf("\nBy which player:");
         scanf("%s",&chh1);


         if(chh1=='a')
         {
         scorer1=scorer1+0;
         dot1++;
         ball0++;
        set1=1;

         }
         if(chh1=='b')
         {
         scorer2=scorer2+0;
         dot2++;
         ball1++;
        set2=1;
         }
         if(chh1=='c')
         {
         scorer3=scorer3+0;
         dot3++;
         ball2++;
         set3=1;
         }

      if(chh1=='d')
         {
         scorer4=scorer4+0;
         dot4++;
         ball3++;
        set4=1;
         }

        if(chh1=='e')
         {
         scorer5=scorer5+0;
         dot5++;
         ball4++;
         set5=1;
         }
         if(chh1=='f')
         {
        scorer6=scorer6+0;
         dot6++;
         ball5++;
       set6=1;
         }
       if(chh1=='g')
        {
         scorer7=scorer7+0;
         dot7++;
         ball6++;
         set7=1;
        }
      if(chh1=='h')
        {
         scorer8=scorer8+0;
        dot8++;
        ball7++;
        set8=1;
        }
        if(chh1=='i')
        {
         scorer9=scorer9+0;
        dot9++;
        ball8++;
       set9=1;
        }
      if(chh1=='j')
      {

         scorer10=scorer10+0;
       dot10++;
       ball9++;
       set10=1;
      }
     if(chh1=='k')
        {
         scorer11=scorer11+0;
         dot11++;
         ball10++;
         set11=1;
        }

        //}while(chh1=='a'||chh1=='b'||chh1=='c'||chh1=='d'||chh1=='e'||chh1=='f'||chh1=='g'||chh1=='h'||chh1=='i'||chh1=='j'||chh1=='k');

         break;
         }

        case '1':
        {
         run=run+1;
         ball=ball+1;
         count1=count1+1;
         i++;
         a1[i]='1';
         b1[k]='1';
         k++;
         printf("By which player:");
       scanf("%s",&chh1);
         if(chh1=='a')
         {
         scorer1=scorer1+1;
         one1++;
         ball0++;
        set1=1;
         }
         if(chh1=='b')
         {

         scorer2=scorer2+1;
         one2++;
         ball1++;
        set2=1;
         }
         if(chh1=='c')
         {

         scorer3=scorer3+1;
         one3++;
         ball2++;
         set3=1;
         }
      if(chh1=='d')
         {

         scorer4=scorer4+1;
         one4++;
         ball3++;
        set4=1;
         }
       if(chh1=='e')
        {

         scorer5=scorer5+1;
        one5++;
        ball4++;
       set5=1;
        }
         if(chh1=='f')
         {

         scorer6=scorer6+1;
         one6++;
         ball5++;
       set6=1;
         }
       if(chh1=='g')
        {


         scorer7=scorer7+1;
        one7++;
        ball6++;
       set7=1;
        }
      if(chh1=='h')
        {

         scorer8=scorer8+1;
        one8++;
        ball7++;
        set8=1;
        }
        if(chh1=='i')
        {

        scorer9=scorer9+1;
        one9++;
        ball8++;
       set9=1;
        }
      if(chh1=='j')
      {

      scorer10=scorer10+1;
      one10++;
      ball9++;
      set10=1;
      }
     if(chh1=='k')
        {


         scorer11=scorer11+1;
        one11++;
        ball10++;
        set11=1;
        }
         break;
         }

        case '2':
        {
        run=run+2;
         ball=ball+1;
         count2=count2+1;
         i++;
         a1[i]='2';
      b1[k]='2';
         k++;
         printf("By which player:");
         scanf("%s",&chh1);
         if(chh1=='a')
         {

         scorer1=scorer1+2;
         two1++;
         ball0++;
         set1=1;
         }
        if(chh1=='b')
        {


         scorer2=scorer2+2;
         two2++;
         ball1++;
        set2=1;
        }
        if(chh1=='c')
        {
         scorer3=scorer3+2;
        two3++;
        ball2++;
        set3=1;
        }
      if(chh1=='d')
         {

         scorer4=scorer4+2;
         two4++;
         ball3++;
        set4=1;
         }

       if(chh1=='e')
        {
         scorer5=scorer5+2;
        two5++;
        ball4++;
       set5=1;

        }
         if(chh1=='f')
         {

         scorer6=scorer6+2;
         two6++;
         ball5++;
       set6=1;

         }
       if(chh1=='g')
        {

         scorer7=scorer7+2;
        two7++;
        ball6++;
       set7=1;

        }
      if(chh1=='h')
        {

         scorer8=scorer8+2;
        two8++;
        ball7++;
        set8=1;

        }
        if(chh1=='i')
        {

         scorer9=scorer9+2;
        two9++;
        ball8++;
       set9=1;

        }
      if(chh1=='j')
      {
         scorer10=scorer10+2;
      two10++;
      ball9++;
      set10=1;

      }
     if(chh1=='k')
        {

         scorer11=scorer11+2;
        two11++;
        ball10++;
        set11=1;

        }
         break;
         }

        case '3':
        {
        run=run+3;
         ball=ball+1;
         count3=count3+1;

         i++;
         a1[i]='3';
      b1[k]='3';
         k++;
         printf("By which player:");
       scanf("%s",&chh1);
        if(chh1=='a')
        {

        scorer1=scorer1+3;
        three1++;
        ball0++;
        set1=1;

        }
        if(chh1=='b')
        {


         scorer2=scorer2+3;
        three2++;
        ball1++;
       set2=1;

        }
        if(chh1=='c')
        {

         scorer3=scorer3+3;
        three3++;
        ball2++;
        set3=1;

        }
      if(chh1=='d')
         {
         scorer4=scorer4+3;
         three4++;
         ball3++;
        set4=1;

         }
       if(chh1=='e')
        {

         scorer5=scorer5+3;
        three5++;
        ball4++;
       set5=1;

        }
         if(chh1=='f')
        {
        three6++;
         scorer6=scorer6+3;
         ball5++;
       set6=1;

        }
       if(chh1=='g')
        {

        three7++;
         scorer7=scorer7+3;
         ball6++;
        set7=1;

        }
      if(chh1=='h')
        {


        scorer8=scorer8+3;
        three8++;
        ball7++;
        set8=1;

        }

        if(chh1=='i')
        {

         scorer9=scorer9+3;
        three9++;
        ball8++;
       set9=1;

        }
      if(chh1=='j')
      {

         scorer10=scorer10+3;
      three10++;
      ball9++;
      set10=1;

      }
     if(chh1=='k')
        {
            three11++;

         scorer11=scorer11+3;
         ball10++;
         set11=1;

        }
         break;
         }
        case '4':
        {
        run=run+4;
         ball=ball+1;
         count4=count4+1;
         i++;
         a1[i]='4';
      b1[k]='4';
         k++;
        printf("By which player:");
        scanf("%s",&chh1);
        if(chh1=='a')
        {

        scorer1=scorer1+4;
        four1++;
        ball0++;
        set1=1;

        }
        if(chh1=='b')
        {


         scorer2=scorer2+4;
         four2++;
         ball1++;
        set2=1;

        }
        if(chh1=='c')
        {


         scorer3=scorer3+4;
         four3++;
         ball2++;
         set3=1;

        }
      if(chh1=='d')
         {


         scorer4=scorer4+4;
         four4++;
         ball3++;
        set4=1;

         }
       if(chh1=='e')
        {


         scorer5=scorer5+4;
        four5++;
        ball4++;
       set5=1;

        }
         if(chh1=='f')
         {
             four6++;
             ball5++;
           set6=1;


         scorer6=scorer6+4;
         }
       if(chh1=='g')
        {


         scorer7=scorer7+4;
        four7++;
        ball6++;
       set7=1;

        }
      if(chh1=='h')
        {

        four8++;
        ball7++;
        scorer8=scorer8+4;
        set8=1;

        }
        if(chh1=='i')
        {

        four9++;
        ball8++;
       set9=1;

         scorer9=scorer9+4;
        }
      if(chh1=='j')
      {

      four10++;
      ball9++;
      set10=1;
      scorer10=scorer10+4;
      }
     if(chh1=='k')
        {

    four11++;
    ball10++;
    set11=1;
    scorer11=scorer11+4;
        }
         break;
         }



        case '6':
        {
         run=run+6;
         ball=ball+1;
         count6=count6+1;
         i++;
         a1[i]='6';
      b1[k]='6';
         k++;
         printf("By which player:");
         scanf("%s",&chh1);
      if(chh1=='a')
      {

         six1++;
         ball0++;
         set1=1;;
         scorer1=scorer1+6;
      }
        if(chh1=='b')
        {

        six2++;
        ball1++;
        set2=1;
        scorer2=scorer2+6;
        }
        if(chh1=='c')
        {
            six3++;
            ball2++;
            set3=1;
           scorer3=scorer3+6;
        }
      if(chh1=='d')
         {


         six4++;
         ball3++;
        set4=1;
        scorer4=scorer4+6;
         }
       if(chh1=='e')
        {


         scorer5=scorer5+6;
        six5++;
        ball4++;
       set5=1;

        }
         if(chh1=='f')
         {


         scorer6=scorer6+6;
         six6++;
         ball5++;
       set6=1;

         }
       if(chh1=='g')
        {
            six7++;
            ball6++;
           set7=1;
          scorer7=scorer7+6;
        }
      if(chh1=='h')
        {
            six8++;
            ball7++;
            set8=1;
           scorer8=scorer8+6;
        }
        if(chh1=='i')
        {

        six9++;
        ball8++;
       set9=1;
       scorer9=scorer9+6;
      }
      if(chh1=='j')
      {


      scorer10=scorer10+6;
    six10++;
    ball9++;
    set10=1;

      }
 if(chh1=='k')
    {

      scorer11=scorer11+6;
      six11++;
      ball10++;
      set11=1;

    }
         break;
         }


            case 'W':
            case 'w':
            {

             printf("           **************** Wide**************************");
             run=run+1;
             wicket=wicket+0;
             ball=ball+0;
             countw=countw+1;
             i++;
             a1[i]='W';
             b1[k]='W';
             k++;
             break;
            }



            case 'l':
            case 'L':
            {


             printf("           ****************LBW Out**************************");
             run=run+0;
             wicket=wicket+1;
             LBW_Out=LBW_Out+1;
             printf("\nLBW Out player:");
             scanf("%s",&loz[wicket]);
             printf("\nLBW Out By:");
             scanf("%s",&lbz[wicket]);
             ball=ball+1;
             countl=countl+1;
             lbw1[LBW_Out]=over1;
             lbw2[LBW_Out]=over2;

             i++;
             a1[i]='L';
             b1[k]='L';
             k++;
             break;
            }


            case 'n':
            case 'N':
            {
             printf("            **********NO Ball Case*******");
             int m;
             printf("\nPlease enter runs scored during no ball:");
             scanf("%d",&m);
             run=run+m+1;//1 added as in no ball 1 run counts and + run scored

             countnr=countnr+m;
             ball=ball+1;
             countn=countn+1;
             i++;
             a1[i]='N';
             b1[k]='N';
             k++;
             printf("           **********No Ball*******");
             printf("\n             No Ball Run Scored=%d",m);
              break;
            }

            case 'R':
            case 'r':
            {

            printf("            **********Run Out*******");
            run=run+0;
            wicket=wicket+1;
            Run_Out=Run_Out+1;
            printf("\nRun Out player:");
            scanf("%s",&roz[Run_Out]);
            printf("\nRun Out By:");
            scanf("%s",&rbz[Run_Out]);
            r1[Run_Out]=over1;
            r2[Run_Out]=over2;
            ball=ball+1;
            countr=countr+1;
            i++;
            a1[i]='R';
            b1[k]='R';
            k++;
              break;
            }
            case 'C':
            case 'c':
            {

            printf("           **********Catch Out*******");
            run=run+0;
            wicket=wicket+1;
            Catched_Out=Catched_Out+1;
            printf("\nCatched Out player:");
            scanf("%s",&coz[Catched_Out]);
            printf("\nCatched Out By:");
            scanf("%s",&cbz[Catched_Out]);
            c1[Catched_Out]=over1;
            c2[Catched_Out]=over2;
            ball=ball+1;
            countc=countc+1;
            i++;
            a1[i]='C';
            b1[k]='C';
            k++;
            break;
            }
            case 'S':
            case 's':
            {

             printf("          **********Stump Out*******");
             run=run+0;
             wicket=wicket+1;
             Stumped_Out=Stumped_Out+1;
             printf("\nStumped Out player:");
             scanf("%s",&soz[Stumped_Out]);
             printf("\nStumped Out By:");
             scanf("%s",&sbz[Stumped_Out]);
             s1[Stumped_Out]=over1;
             s2[Stumped_Out]=over2;
             ball=ball+1;
             counts=counts+1;
             i++;
             a1[i]='S';
             b1[k]='S';
             k++;
             break;
            }


            case 'E':
            case 'e':
            {

                printf("\nCatch_Out\tRun_Out\tStump_Out\tLBW_Out\tWicket\tWide\tNo_Ball\tExtra_Run");
                printf("\n %d      \t %d    \t  %d     \t %d    \t %d   \t %d \t %d    \t  %d",countc,countr,counts,countl,wicketfall,countw,countn,(countnr+countw));
                printf("\n\nRun\tBall\tOver \tRun_Rate\tDot\tOne\tTwo\tThree\tFour Six");
                printf("\n %d  \t %d \t%d.%d\t%.2f    \t%d \t%d \t %d\t %d  \t %d   %d",run,ball,over1,over2,Run_Rate,dot,count1,count2,count3,count4,count6);

                for(i=1;i<=Stumped_Out;i++)
                {

                printf("\n\t\t\t**** %s Stumped_Out by %s at %d.%d over****",soz[i],sbz[i],s1[i],s2[i]);

                }
                for(i=1;i<=Run_Out;i++)
                {

                printf("\n\t\t\t**** %s Run_Out by %s at %d.%d over****",roz[i],rbz[i],r1[i],r2[i]);

                }
                 for(i=1;i<=Catched_Out;i++)
                {

                printf("\n\t\t\t**** %s Catched_Out by %s at %d.%d over****",coz[i],cbz[i],c1[i],c2[i]);

                }
                for(i=1;i<=LBW_Out;i++)
                {

                printf("\n\t\t\t**** %s LBW_Out by %s at %d.%d over****",loz[i],lbz[i],lbw1[i],lbw2[i]);

                }
                printf("\nUpto Now:");
                for(l=1;l<k;l++)
                {
                    printf("%c",b1[l]);
                    if(l%6==0)
                    {
                        printf("-");
                    }
                }
                printf("\nPlayer:  Player1   Player2   Player3   Player4   Player5    Player6   Player7   Player8   Player9   Player10   Player11");
                printf("\nName  :  %-10s%-10s%-10s%-10s%-10s %-10s%-10s%-10s%-10s%-10s %-10s  ",playerz[1],playerz[2],playerz[3],playerz[4],playerz[5],playerz[6],playerz[7],playerz[8],playerz[9],playerz[10],playerz[11]);
                printf("\nScore :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,scorer1,-3,scorer2,-3,scorer3,-3,scorer4,-3,scorer5,-3,scorer6,-3,scorer7,-3,scorer8,-3,scorer9,-3,scorer10,-3,scorer11);
                printf("\nBall  :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,ball0,-3,ball1,-3,ball2,-3,ball3,-3,ball4,-3,ball5,-3,ball6,-3,ball7,-3,ball8,-3,ball9,-3,ball10);
                printf("\nDot   :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,dot1,-3,dot2,-3,dot3,-3,dot4,-3,dot5,-3,dot6,-3,dot7,-3,dot8,-3,dot9,-3,dot10,-3,dot11);
                printf("\nOne   :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,one1,-3,one2,-3,one3,-3,one4,-3,one5,-3,one6,-3,one7,-3,one8,-3,one9,-3,one10,-3,one11);
                printf("\nTwo   :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,two1,-3,two2,-3,two3,-3,two4,-3,two5,-3,two6,-3,two7,-3,two8,-3,two9,-3,two10,-3,two11);
                printf("\nThree :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,three1,-3,three2,-3,three3,-3,three4,-3,three6,-3,three7,-3,three8,-3,three9,-3,three10,-3,three11);
                printf("\nFour  :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,four1,-3,four2,-3,four3,-3,four4,-3,four5,-3,four6,-3,four7,-3,four8,-3,four9,-3,four10,-3,four11);
                printf("\nSix   :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,six1,-3,six2,-3,six3,-3,six4,-3,six5,-3,six6,-3,six7,-3,six8,-3,six9,-3,six10,-3,six11);

             break;

            }
            }



    over1=ball/6;
    over2=ball %6;
    x=run;
    y=ball;
    xx=target2;
    yy=totalover;
    Run_Rate=x/y*6;
    RRun_Rate=(xx-x)/(yy*6-y);
    printf("\n******************Previous Information*************");
    printf("\n                        Run=%d",run);
    printf("\n                        Ball=%d",ball);
    printf("\n                        Over=%d.%d",over1,over2);
    printf("\n                        Wicket=%d",wicket);
    printf("\n                        Run Rate=%.2f",Run_Rate);
    printf("\n************Required %d Run From %d Ball  at Run_Rate=%.2f*********",target2-run,totalover*6-ball,RRun_Rate*6);
    printf("\n\nThis over:");
    for(j=1;j<=i;j++)
    {
     printf(" %c",a1[j]);
    }
    rem=ball %6;
    if(rem==0)
    {
        printf("-*****Over Complete*****\n");
        i=0;
    }
    printf("\nUpto Now:");
                for(l=1;l<k;l++)
                {
                    printf("%c",b1[l]);
                    if(l%6==0)
                    {
                        printf("-");
                    }
                }
    if(wicket!=w)
    {
        w=w+1;
        printf("\n   ********%d Wicket Fall  at %d.%d over*******",w,over1,over2);
    }
 //printf("\n%d=%d",run,target);since at while run!=target nt working
 wicketfall=wicket;
 if(ball==totalover*6)
 {
     wicket=10;
 }
 if(run>=target)
 {
     wicket=10;//did this as at while or condition run!=target didnot worked
 }
 /*if(wicket==10)
 {
     printf("Hurray Match Won by ")
 }*/
  if(set1==1)
                {
                printf("\n\n\t\t\t\tplayerz1===%s",playerz[1]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer1);
                printf("\n\t\t\t\tBall Played=%d",ball0);
                printf("\n\t\t\t\tdot=%d one=%d two=%d three=%d Four=%d Six=%d",dot1,one1,two1,three1,four1,six1);
                }

                if(set2==1)
                {
                printf("\n\n\t\t\t\tplayerz2===%s",playerz[2]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer2);
                printf("\n\t\t\t\tBall Played=%d",(ball1));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot2,one2,two2,three2,four2,six2);
                }

                if(set3==1)
                {
                printf("\n\n\t\t\t\tplayerz3===%s",playerz[3]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer3);
                printf("\n\t\t\t\tBall Played=%d",(ball2));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot3,one3,two3,three3,four3,six3);
                }

                 if(set4==1)
                {
                printf("\n\n\t\t\t\tplayerz4===%s",playerz[4]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer4);
                printf("\n\t\t\t\tBall Played=%d",(ball3));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot4,one4,two4,three4,four4,six4);
                }
                 if(set5==1)
                {
                printf("\n\n\t\t\t\tplayerz5===%s",playerz[5]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer5);
                printf("\n\t\t\t\tBall Played=%d",(ball4));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot5,one5,two5,three5,four5,six5);
                }
                 if(set6==1)
                {
                printf("\n\n\t\t\t\tplayer6===%s",playerz[6]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer6);
                printf("\n\t\t\t\tBall Played=%d",(ball5));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot6,one6,two6,three6,four6,six6);
                }
                 if(set7==1)
                {
                printf("\n\n\t\t\t\tplayer7===%s",playerz[7]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer7);
                printf("\n\t\t\t\tBall Played=%d",(ball6));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot7,one7,two7,three7,four7,six7);
                }
                 if(set8==1)
                {
                printf("\n\n\t\t\t\tplayer8===%s",playerz[8]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer8);
                printf("\n\t\t\t\tBall Played=%d",(ball7));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot8,one8,two8,three8,four8,six8);
                }

                 if(set9==1)
                {
                printf("\n\n\t\t\t\tplayer9===%s",playerz[9]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer9);
                printf("\n\t\t\t\tBall Played=%d",(ball8));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot9,one9,two9,three9,four9,six9);
                }
                 if(set10==1)
                {
                printf("\n\n\t\t\t\tplayer10===%s",playerz[10]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer10);
                printf("\n\t\t\t\tBall Played=%d",(ball9));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot10,one10,two10,three10,four10,six10);
                }
                 if(set11==1)
                {
                printf("\n\n\t\t\t\tplayer11===%s",playerz[11]);
                printf("\n\t\t\t\tTotal Run Scored=%d",scorer11);
                printf("\n\t\t\t\tBall Played=%d",(ball10));
                printf("\n\t\t\t\tdot=%d  one=%d  two=%d  three=%d  Four=%d  Six=%d",dot11,one11,two11,three11,four11,six11);
                }

    }while(wicket!=10);// ||run!=target);

    printf("\n\n\n*************************Today match Summary*****************************");
               if(run>=target2 && wicket<=10)
                  {
                  printf("\n\n                                       Match Won            ");
                  printf("\nTarget Was:%d && Scored Run:%d",target2,run);
                  }
              else
              {
                  printf("\n\n                                          Match Lost           ");
                  printf("\nTarget Was:%d && Scored Run:%d",target2,run);
              }


                printf("\n\nCatch_Out\tRun_Out\tStump_Out\tLBW_Out\tWicket\tWide\tNo_Ball\tExtra_Run");
                printf("\n   %d    \t %d    \t  %d     \t %d    \t %d   \t %d \t %d    \t  %d",countc,countr,counts,countl,wicketfall,countw,countn,(countnr+countw));
                printf("\n\nRun\tBall\tOver \tRun_Rate\tDot\tOne\tTwo\tThree\tFour Six");
                printf("\n%d   \t %d \t%d.%d\t%.2f    \t%d \t%d \t %d\t %d  \t %d   %d",run,ball,over1,over2,Run_Rate,dot,count1,count2,count3,count4,count6);
                printf("\n\nIn This Match:");
                for(l=1;l<k;l++)
                {
                    printf("%c",b1[l]);
                    if(l%6==0)
                    {
                        printf("-");
                    }
                }
                for(i=1;i<=Stumped_Out;i++)
                {

                printf("\n\t\t\t**** %s Stumped_Out by %s at %d.%d over****",soz[i],sbz[i],s1[i],s2[i]);

                }
                for(i=1;i<=Run_Out;i++)
                {

                printf("\n\t\t\t**** %s Run_Out by %s at %d.%d over****",roz[i],rbz[i],r1[i],r2[i]);

                }
                 for(i=1;i<=Catched_Out;i++)
                {

                printf("\n\t\t\t**** %s Catched_Out by %s at %d.%d over****",coz[i],cbz[i],c1[i],c2[i]);

                }
                for(i=1;i<=LBW_Out;i++)
                {

                printf("\n\t\t\t**** %s LBW_Out by %s at %d.%d over****",loz[i],lbz[i],lbw1[i],lbw2[i]);

                }


                printf("\n\n\t**********************Player Score Information*********************");
                printf("\nPlayer:  Player1   Player2   Player3   Player4   Player5    Player6   Player7   Player8   Player9   Player10   Player11");
                printf("\nName  :  %-10s%-10s%-10s%-10s%-10s %-10s%-10s%-10s%-10s%-10s %-10s  ",playerz[1],playerz[2],playerz[3],playerz[4],playerz[5],playerz[6],playerz[7],playerz[8],playerz[9],playerz[10],playerz[11]);
                printf("\nScore :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,scorer1,-3,scorer2,-3,scorer3,-3,scorer4,-3,scorer5,-3,scorer6,-3,scorer7,-3,scorer8,-3,scorer9,-3,scorer10,-3,scorer11);
                printf("\nBall  :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,ball0,-3,ball1,-3,ball2,-3,ball3,-3,ball4,-3,ball5,-3,ball6,-3,ball7,-3,ball8,-3,ball9,-3,ball10);
                printf("\nDot   :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,dot1,-3,dot2,-3,dot3,-3,dot4,-3,dot5,-3,dot6,-3,dot7,-3,dot8,-3,dot9,-3,dot10,-3,dot11);
                printf("\nOne   :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,one1,-3,one2,-3,one3,-3,one4,-3,one5,-3,one6,-3,one7,-3,one8,-3,one9,-3,one10,-3,one11);
                printf("\nTwo   :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,two1,-3,two2,-3,two3,-3,two4,-3,two5,-3,two6,-3,two7,-3,two8,-3,two9,-3,two10,-3,two11);
                printf("\nThree :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,three1,-3,three2,-3,three3,-3,three4,-3,three6,-3,three7,-3,three8,-3,three9,-3,three10,-3,three11);
                printf("\nFour  :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,four1,-3,four2,-3,four3,-3,four4,-3,four5,-3,four6,-3,four7,-3,four8,-3,four9,-3,four10,-3,four11);
                printf("\nSix   :  %*d         %*d        %*d      %*d       %*d        %*d      %*d        %*d        %*d       %*d       %*d  ",-3,six1,-3,six2,-3,six3,-3,six4,-3,six5,-3,six6,-3,six7,-3,six8,-3,six9,-3,six10,-3,six11);
                do
                {
                printf("\nEnter E to exit:");
                scanf("%s",&exit1);
                }while(exit1!='E');





}
