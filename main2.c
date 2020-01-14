//  ** IN THE NAME OF ALLAH **
// FAZE 1

#include<stdio.h>
#include<conio.h>
char mat[4][4] ;
 
void print_mat()
{
	int i, j;
	for(i=0; i<4 ; i++)
	{
		for(j=0; j<4 ; j++)
		{
			printf("%c ", mat[i][j]);
		}
		printf("\n");
	}
	sleep(2);
	system("cls");
}

int main() 
{
	int  row_mat , column_mat , i , num_food=0 , flag=0 , m=0 , n=0, k=0 , j=0;
	char address_file[100] , position;
	char str[4] , pacman='0' , star='*';
	FILE  *ptf1;
	printf("HELLO :) , if you want me to play pacman for you , plesae write the name of your file.\n");
	scanf("%S", address_file);
	ptf1=fopen("address_file","r");
	if(ptf1==0)
		printf("This file can not be opened !! \n");
	else 
		{
			position=getchar();
			while( position!=EOF ) 
			{
				if( position=='*')
					num_food++;
				position=getchar();
			}
			if( num_food==16)
			{
				for( i=1 ; i<=16 ; i++)
				{
					for( row_mat=0; row_mat<4 ; row_mat++)
					{
						for( column_mat=0; column_mat<4 ; column_mat++)
						{
								mat[row_mat][column_mat]=star;
								mat[k][j]=pacman;
						}
					}
					print_mat();
					if( i%4==0 )     //		change			//
			       	    k++;		 //		   k			//
			       	if(i==1)
			       		j++;
			       	if(i==2)
			       		j++;
			       	if(i==3)
			       		j++;
			    	if(i==4)  //**
			       		j--;
			       	if(i==5)
			       		j--;
			       	if(i==6)
			       		j--;
					if(i==7)
			       		j--;
					if(i==8)//**
			       		j++;
					if(i==9)
			       		j++;
					if(i==10)
			       		j++;
					if(i==11)
			       		j++;
					if(i==12)//**
			       		j--;
			   	    if(i==13)
			       		j--;
			       	if(i==14)
			       		j--;
			       	if(i==15)
			       		j--;
				}
			}
			
		}
}
