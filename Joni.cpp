/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int arry[] = {1,2,3,4,9,4,3,2,1,7,8,9,10};
//            0 1 2 3 4 5 6 7 8 9 10 11 12
//            * + + + + - - - - - + + +  + +

const char * maxi = "max";
const char *mini = "min";


int main()
{
    printf("Hello World\n");
    
    int cntUp = 0;
    int cntDown = 0;
    int trend = 0;
    int i;
 
    
    for(i=1; i < sizeof(arry)/sizeof(arry[0]); i++ ){
        
        
        
        if (arry[i] - arry[i-1] > 0){
            
            if (trend == 1 || (trend == -1 && cntDown == 4) || trend == 0)
                cntUp++;
            else
                cntUp = 1;    
            //cntUp = cntUp % 4;
            trend = 1;
        }
        
        else if (arry[i] - arry[i-1] < 0){
            
            if (trend == -1 || (trend == 1 && cntUp == 4) || trend == 0)
                cntDown++;
            else
                cntDown = 1;
            //cntDown = cntDown % 4; 
            trend = -1;
        }
		
		else // arry[i] == arry[i-1]
		{
			cntUp = 0;
			cntDown = 0;
			trend = 0;
			
		}
        
 
        if (cntUp == 4 && cntDown == 4){
            
            printf("the %s num is: %d\n",trend == 1 ? mini : maxi , arry[i-4]);
            
            if (trend == -1)
                cntUp = 0;
            else
                cntDown = 0;

            
        }
            
    }
    

    return 0;
}
