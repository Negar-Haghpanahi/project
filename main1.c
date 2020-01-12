//  ** IN THE NAME OF ALLAH **
// FAZE 1

#include <stdio.h>
int main() 
{
	int  row_mat , column_mat , i , num_food=0;
	char address_file[100] , position;
	char str[4] , pacman='0' , star='*';
	for( i=0 ; i<4 ; i++)
		str[i]=star;
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
				for( row_mat=0; row_mat<4 ; row_mat++)
				{
					for( column_mat =0; column_mat<4 ; column_mat++)
					{
						printf("%c %c" ,star, pacman);
						fflush(stdout); // in khato comment konid bebinid age nabashe chi mishe
						sleep(1);
					}
						printf("\n");
				}
			}
			
		}
}
