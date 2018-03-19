#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void grid (int);
int winner ();
void input ();
char a[9];
int c=0;
int main()
{
    int i;
    for (int k=0; k<9; k++)
    {
        a[k]=' ';
    }
    printf("%2c|%2c|%2c\n%2c|%2c|%2c\n%2c|%2c|%2c\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);

    for (c = 0; c < 9 && !winner (); c++)
        input ();

    winner ();
    return 0;

}
void grid(int i)
{
    if(c%2==0)
    {
        a[i]='O';
    }
    else
    {
        a[i]='X';
    }

    system ("cls");
    printf("%2c|%2c|%2c\n%2c|%2c|%2c\n%2c|%2c|%2c\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);

}
void input()
{
    int n;
    printf("enter the cell no.\n");
    scanf("%d",&n);
    grid (n-1);

}
int winner()
{
    //if (c%2==0)
    // {
    printf("checking winner\n");
    if (((a[0]==a[1])&&(a[1]==a[2])&&(a[2]=='X'))||
            ((a[4]==a[3])&&(a[4]==a[5])&&(a[3]=='X'))||
            ((a[6]==a[7])&&(a[7]==a[8])&&(a[8]=='X'))||
            ((a[0]==a[3])&&(a[3]==a[6])&&(a[6]=='X'))||
            ((a[1]==a[4])&&(a[4]==a[7])&&(a[4]=='X'))||
            ((a[2]==a[5])&&(a[5]==a[8])&&(a[8]=='X'))||
            ((a[0]==a[4])&&(a[4]==a[8])&&(a[8]=='X'))||
            ((a[2]==a[4])&&(a[4]==a[6])&&(a[6]=='X')))

    {
        printf("player 1 wins\n");
        return 1;
    }

    //else if (c%2!=0)

    else if(((a[0]==a[1])&&(a[1]==a[2])&&(a[2]=='O'))||
            ((a[4]==a[3])&&(a[4]==a[5])&&(a[3]=='O'))||
            ((a[6]==a[7])&&(a[7]==a[8])&&(a[8]=='O'))||
            ((a[0]==a[3])&&(a[3]==a[6])&&(a[6]=='O'))||
            ((a[1]==a[4])&&(a[4]==a[7])&&(a[4]=='O'))||
            ((a[2]==a[5])&&(a[5]==a[8])&&(a[8]=='O'))||
            ((a[0]==a[4])&&(a[4]==a[8])&&(a[8]=='O'))||
            ((a[2]==a[4])&&(a[4]==a[6])&&(a[6]=='O')))
    {

        printf("player 2 wins\n");
        return 1;
    }
    else if (c==9) {
        printf("draw\n");
        return 1;
    }

    return 0;

}


