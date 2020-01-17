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
	sleep(1);
	system("cls");
}

int main() 
{
	int  row_mat , column_mat , i , num_food=0 , flag=0 , m=0 , n=0, k=0 , j=0, row=1, column=1;
	char address_file[100] , position;
	char str[4] , pacman='0' , star='*', arry[4][4];
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
				for (i=0; i<4 ; i++)
				{
					for(j=0; j<4 ; j++)
					{
						arry[i][j]=position;
					}
				}
				if( position=='*')
					num_food++;
				position=getchar();
			}
			i=0;  j=0;
			if( num_food==16)
			{
				for( i=1 ; i<=16 ; i++)
				{
					for( row_mat=0; row_mat<4 ; row_mat++)
					{
						for( column_mat=0; column_mat<4 ; column_mat++)
						{
							if(i==1)
							{
								mat[row_mat][column_mat]=star;
								mat[k][j]=pacman;
							}
							if(i==2)
							{
								mat[row_mat][column_mat]=star;
								mat[k][j]=pacman;
								mat[k][j-1]='1';
							}
							if(i==3)
							{
								mat[row_mat][column_mat]=star;
								mat[k][j]=pacman;
								mat[k][j-1]='1'; mat[k][j-2]='1';
							}
							if(i==4)
							{
								mat[row_mat][column_mat]=star;
								mat[k][j]=pacman;
								mat[k][j-1]='1'; mat[k][j-2]='1';   mat[k][j-3]='1';
							}
							if(i==5)
							{
								mat[row_mat][column_mat]=star;
								mat[k][j]=pacman;
								mat[k-1][j-1]='1'; mat[k-1][j-2]='1';   mat[k-1][j-3]='1'; mat[k-1][j-4]='1';  mat[k-1][j]='1';
							   
							}
							if(i==6)
							{
								mat[row_mat][column_mat]=star;
								mat[k][j]=pacman;
								mat[k-1][j-1]='1'; mat[k-1][j-2]='1';   mat[k-1][j]='1'; mat[k-1][j+1]='1'; 
							    mat[k][j+1]='1';
							}
							if(i==7)
							{
								mat[row_mat][column_mat]=star;
								mat[k][j]=pacman;
								mat[k-1][j-1]='1'; mat[k-1][j]='1';   mat[k-1][j+1]='1'; mat[k-1][j+2]='1';
							    mat[k][j+2]='1';   mat[k][j+1]='1'; 
							}
							if(i==8)
							{
								mat[row_mat][column_mat]=star;
								mat[k][j]=pacman;
								mat[k-1][j]='1'; mat[k-1][j+1]='1';   mat[k-1][j+2]='1'; mat[k-1][j+3]='1'; 
							    mat[k][j+2]='1';   mat[k][j+1]='1';   mat[k][j+3]='1';
							}
							if(i==9)
							{                                            //printf("%d   %d\n",k,j);
								mat[row_mat][column_mat]=star;
								mat[k][j]=pacman;
								mat[k-1][j]='1'; mat[k-1][j+1]='1';   mat[k-1][j+2]='1'; mat[k-1][j+3]='1'; 
								mat[k-2][j]='1'; mat[k-2][j+1]='1';   mat[k-2][j+2]='1'; mat[k-2][j+3]='1'; 
							}
							if(i==10)
							{                                           
								mat[row_mat][column_mat]=star;
								mat[k][j]=pacman;
								mat[k-1][j]='1'; mat[k-1][j+1]='1';   mat[k-1][j+2]='1'; mat[k-1][j-1]='1'; 
								mat[k-2][j]='1'; mat[k-2][j+1]='1';   mat[k-2][j+2]='1'; mat[k-2][j-1]='1'; 
								mat[k][j-1]='1';
							}
							if(i==11)
							{                                           
								mat[row_mat][column_mat]=star;
								mat[k][j]=pacman;
								mat[k-1][j]='1'; mat[k-1][j+1]='1';   mat[k-1][j-2]='1'; mat[k-1][j-1]='1'; 
								mat[k-2][j]='1'; mat[k-2][j+1]='1';   mat[k-2][j-2]='1'; mat[k-2][j-1]='1'; 
								mat[k][j-1]='1'; mat[k][j-2]='1';
							}
							if(i==12)
							{                                           
								mat[row_mat][column_mat]=star;
								mat[k][j]=pacman;
								mat[k-1][j]='1'; mat[k-1][j-1]='1';   mat[k-1][j-2]='1'; mat[k-1][j-3]='1'; 
								mat[k-2][j]='1'; mat[k-2][j-1]='1';   mat[k-2][j-2]='1'; mat[k-2][j-3]='1'; 
								mat[k][j-1]='1'; mat[k][j-2]='1';     mat[k][j-3]='1';
							}
							if(i==13)
							{                                           
								mat[row_mat][column_mat]=star;
								mat[k][j]=pacman;
								mat[k-1][j]='1'; mat[k-1][j-1]='1';   mat[k-1][j-2]='1'; mat[k-1][j-3]='1'; 
								mat[k-2][j]='1'; mat[k-2][j-1]='1';   mat[k-2][j-2]='1'; mat[k-2][j-3]='1'; 
								mat[k-3][j]='1'; mat[k-3][j-1]='1';   mat[k-3][j-2]='1'; mat[k-3][j-3]='1'; 
							}
							if(i==14)
							{                                           
								mat[row_mat][column_mat]=star;
								mat[k][j]=pacman;
								mat[k-1][j]='1'; mat[k-1][j-1]='1';   mat[k-1][j-2]='1'; mat[k-1][j+1]='1'; 
								mat[k-2][j]='1'; mat[k-2][j-1]='1';   mat[k-2][j-2]='1'; mat[k-2][j+1]='1'; 
								mat[k-3][j]='1'; mat[k-3][j-1]='1';   mat[k-3][j-2]='1'; mat[k-3][j+1]='1'; 
								mat[k][j+1]='1';
							}
							if(i==15)
							{                                           
								mat[row_mat][column_mat]=star;
								mat[k][j]=pacman;
								mat[k-1][j]='1'; mat[k-1][j-1]='1';   mat[k-1][j+2]='1'; mat[k-1][j+1]='1'; 
								mat[k-2][j]='1'; mat[k-2][j-1]='1';   mat[k-2][j+2]='1'; mat[k-2][j+1]='1'; 
								mat[k-3][j]='1'; mat[k-3][j-1]='1';   mat[k-3][j+2]='1'; mat[k-3][j+1]='1'; 
								mat[k][j+1]='1'; mat[k][j+2]='1';
							}
							if(i==16)
								mat[row_mat][column_mat]='1';
						}		
							
					}
					}
					print_mat();
					if( i%4==0 )     //	 ** change k	**	//
			       	    k++;		 
			       	    		
			       	if(i==1)		//	**	chnge j		**	//
			       		j++;
			       	if(i==2)
			       		j++;
			       	if(i==3)
			       		j++;
			       	if(i==5)
			       		j--;
			       	if(i==6)
			       		j--;
					if(i==7)
			       		j--;
					if(i==9)
			       		j++;
					if(i==10)
			       		j++;
					if(i==11)
			       		j++;
			   	    if(i==13)
			       		j--;
			       	if(i==14)
			       		j--;
			       	if(i==15)
			       		j--;
				}
			}
			else
			{
				if(arry[0][0]=='*' || arry[0][1]=='*' || arry[0][2]=='*' || arry[0][3]=='*')
				{
					while (arry[0][column]!='#' && column <=3 )   
					{
						arry[0][column-1]='1';    arry[0][column]='0';
						column++;
						print_mat();	
					}
					if(column==3 && arry[1][3]!='#')		  
		   			{
				    	arry[0][3]='1';    arry[1][column]='0';
						print_mat();	
					}
					if(column==3 && arry[1][3]=='#')
					{
						arry[0][2]='0';  arry[0][3]='1';
						print_mat();
						if(arry[1][2]!='#')
						{
							arry[1][2]='0';  arry[0][2]='1';
							print_mat();
						}
					}	
				}
				if(arry[1][0]=='*' || arry[1][1]=='*' || arry[1][2]=='*' || arry[1][3]=='*')
				{
					
				}
				
			}
			
}

