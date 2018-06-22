#include<stdio.h>
#include<string.h>
#include<windows.h>

/************************************ GLOBAL VARIABLES *************************************/

int game[9],no,player=1,flag=0;

/********************************* FUNCTION DECLARATIONS ***********************************/

void help(void);          /* FOR DISPLAY OF THE TIC-TAC-TOE BOARD        */
void board(void);          /* FOR DISPLAY OF THE TIC-TAC-TOE BOARD       */
void winner(void);         /* FOR CHECKING THE WINNER                    */
void check(void);          /* FOR CHECKING THE BLOCK IS FILLED OR NOT    */
void credits(void);        /* FOR THE DISPLAY OF CREDITS ON EXIT         */

/*********************************** MAIN FUNCTION *****************************************/

void main()
{
    int x;
    reenter:
    help();
    board();
    for(x=0;x<9;x++)
    {
        re:
        flag=0;
        printf("\n\n\n\t\tENTER THE SERIAL NO. OF BLOCK : ");
        scanf("%d",&no);
        check();
        if(flag==1)
        goto re;
        else
        board();
    }
}

/*********************************** BOARD FUNCTION ****************************************/

void board()
{
    system("cls");
    if(player==1)
    {
        system("color 0B");
        game[no-1]='O';
        player=2;
        printf("\n\n\n\n\n\t\t\t\t   TIC TAC TOE\n\n");
        printf("\n\t\t FIRST PLAYER CHANCE\t\t\tSymbol: X\n");
        goto play;
    }
    else if(player==2)
    {
        system("color 0E");
        game[no-1]='X';
        player=1;
        printf("\n\n\n\n\n\t\t\t\t   TIC TAC TOE\n\n");
        printf("\n\t\t SECOND PLAYER CHANCE\t\t\tSymbol: O\n");
        goto play;
    }
    play:
    printf("\n\t\t\t\t%c\t\t%c",219,219);
    printf("\n\t\t\t\t%c\t\t%c",219,219);
    printf("\n\t\t\t%c\t%c\t%c\t%c\t%c",game[0],219,game[1],219,game[2]);
    printf("\n\t\t\t\t%c\t\t%c",219,219);
    printf("\n\t\t\t\t%c\t\t%c",219,219);

    int i;
    printf("\n\t\t ");
    for(i=1;i<=48;i++)
    {
        printf("%c",219);
    }

    printf("\n\t\t\t\t%c\t\t%c",219,219);
    printf("\n\t\t\t\t%c\t\t%c",219,219);
    printf("\n\t\t\t%c\t%c\t%c\t%c\t%c",game[3],219,game[4],219,game[5]);
    printf("\n\t\t\t\t%c\t\t%c",219,219);
    printf("\n\t\t\t\t%c\t\t%c",219,219);

    printf("\n\t\t ");
    for(i=1;i<=48;i++)
    {
        printf("%c",219);
    }

    printf("\n\t\t\t\t%c\t\t%c",219,219);
    printf("\n\t\t\t\t%c\t\t%c",219,219);
    printf("\n\t\t\t%c\t%c\t%c\t%c\t%c",game[6],219,game[7],219,game[8]);
    printf("\n\t\t\t\t%c\t\t%c",219,219);
    printf("\n\t\t\t\t%c\t\t%c",219,219);
    winner();
}

void winner()
{
    if((game[0]=='O'&&game[1]=='O'&&game[2]=='O')||(game[0]=='O'&&game[3]=='O'&&game[6]=='O')||(game[0]=='O'&&game[4]=='O'&&game[8]=='O')||(game[3]=='O'&&game[4]=='O'&&game[5]=='O')||(game[6]=='O'&&game[7]=='O'&&game[8]=='O')||(game[2]=='O'&&game[4]=='O'&&game[6]=='O')||(game[1]=='O'&&game[4]=='O'&&game[7]=='O')||(game[2]=='O'&&game[5]=='O'&&game[8]=='O'))
    {
        int i=0;
        char choice;
        system("cls");
        system("color 0A");
        printf("\n\t\t ");
        for(i=1;i<=48;i++)
        {
            printf("%c",219);
        }
        printf("\n\n\t\t\tSECOND PLAYER WINS THE GAME !!!!!\n");
        printf("\n\t\t ");
        for(i=1;i<=48;i++)
        {
            printf("%c",219);
        }
        fflush(stdin);
        getchar();
        credits();
    }
    else if((game[0]=='X'&&game[1]=='X'&&game[2]=='X')||(game[0]=='X'&&game[3]=='X'&&game[6]=='X')||(game[0]=='X'&&game[4]=='X'&&game[8]=='X')||(game[3]=='X'&&game[4]=='X'&&game[5]=='X')||(game[6]=='X'&&game[7]=='X'&&game[8]=='X')||(game[2]=='X'&&game[4]=='X'&&game[6]=='X')||(game[1]=='X'&&game[4]=='X'&&game[7]=='X')||(game[2]=='X'&&game[5]=='X'&&game[8]=='X'))
    {
        int i;
        char choice;
        system("cls");
        system("color 0A");
        printf("\n\t\t ");
        for(i=1;i<=48;i++)
        {
            printf("%c",219);
        }
        printf("\n\n\t\t\tFIRST PLAYER WINS THE GAME !!!!!\n");
        printf("\n\t\t ");
        for(i=1;i<=48;i++)
        {
            printf("%c",219);
        }
        fflush(stdin);
        getchar();
        credits();
    }
}

/************************* FUNCTION FOR CHECKING THE FILLED BOX ***************************/

void check()
{
        if(game[no-1]=='X'||game[no-1]=='O')
        {
                printf("\n\n\t\t\t\tDO NOT CHEAT !!!!!");
                printf("\n\n\t\tALREADY FILLED POSITION ");
                flag=1;
        }
}

/********************************* CREDITS DISPLAY FUNCTION ********************************/

/*********************************** HELP FUNCTION ****************************************/
void help()
{
  system("color 0E");
  printf("\n\n\n\n\n\t\t\t\t   TIC TAC TOE\n\n");
  printf("\t\t Please remember the serial number of the blocks\n\n");
  int game[9]={'1','2','3','4','5','6','7','8','9'};
  printf("\n\t\t\t\t%c\t\t%c",219,219);
  printf("\n\t\t\t\t%c\t\t%c",219,219);
  printf("\n\t\t\t%c\t%c\t%c\t%c\t%c",game[0],219,game[1],219,game[2]);
  printf("\n\t\t\t\t%c\t\t%c",219,219);
  printf("\n\t\t\t\t%c\t\t%c",219,219);

  int i;
  printf("\n\t\t ");
  for(i=1;i<=48;i++)
  {
      printf("%c",219);
  }

  printf("\n\t\t\t\t%c\t\t%c",219,219);
  printf("\n\t\t\t\t%c\t\t%c",219,219);
  printf("\n\t\t\t%c\t%c\t%c\t%c\t%c",game[3],219,game[4],219,game[5]);
  printf("\n\t\t\t\t%c\t\t%c",219,219);
  printf("\n\t\t\t\t%c\t\t%c",219,219);

  printf("\n\t\t ");
  for(i=1;i<=48;i++)
  {
      printf("%c",219);
  }

  printf("\n\t\t\t\t%c\t\t%c",219,219);
  printf("\n\t\t\t\t%c\t\t%c",219,219);
  printf("\n\t\t\t%c\t%c\t%c\t%c\t%c",game[6],219,game[7],219,game[8]);
  printf("\n\t\t\t\t%c\t\t%c",219,219);
  printf("\n\t\t\t\t%c\t\t%c",219,219);
  printf("\n\n\t\tPRESS ENTER TO CONTINUE : ");
  getchar();
}
/*********************************** HELP FUNCTION ****************************************/

void credits()
{
            system("cls");
            system("COLOR 0F");
            printf("\n\n\n\n\n\t\t\t          TIC TAC TOE - GAME\n\n");
            printf("\t\t\t   MADE BY : SHARAD RAJ SINGH MAURYA\n");
            printf("\t\t\t    EMAIL ID : mauryablog@gmail.com \n");
            printf("\t\t    PROJECT STARTED ON : 21/06/2018 END : 21/06/2018\n");
            printf("\t\tEXITING .................................................\n\n");
            getchar();
            exit(0);
}
/****************************** END OF CREDITS DISPLAY FUNCTION ****************************/