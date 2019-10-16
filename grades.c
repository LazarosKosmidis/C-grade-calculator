#include <stdio.h>

int main(){
        int BP;                
        int A;                
        float PR1;             
        float PR2;             
        float TE;             
        float BE;              
        float GR;              
        printf("Please insert your registrations , your grade of 1st test , your grade of 2nd test and your grade at the exams. ");
        scanf("%i%f%f%f",&A,&PR1,&PR2,&TE);
                
        if (A==0){
            BP=10;
        }
        if(A==1){
            BP=5;
        }
        if(A>2){
            BP=0;
        }
        BE = (BP*0.2 + PR1*0.4 + PR2*0.4);
        GR = BE*0.4 + TE*0.6;                
        if (BE < 4.5){
            printf("Failure to lab . You have to try lab again next year. ");
            return 0;
        }
        if (TE < 4.5){
            printf("You failed to pass exams.You better try on September. ");
            return 0;
        }else{
            printf("You pass exams with grade: ");
            printf("%f",GR);
        }

}
