#include <stdio.h>
int main(){
    int stu[6], i, total = 0;
    int invigilator[6], Tinvigilator = 0;
    
    for(i=0; i<6; i++){
        printf("Enter number of students in section %d: ", i+1);
        scanf("%d", &stu[i]);
        
        if(stu[i] <= 30){
            invigilator[i] = 1;
        }
        else if(stu[i] > 30 && stu[i] <= 80){
            invigilator[i] = 2;
        }
        else if(stu[i] > 80){ 
            invigilator[i] = 3;
        }
        
        Tinvigilator += invigilator[i];
        total += stu[i];
    }
    
    printf("\nSection\tStudents\tInvigilator\n");
    printf("-----------------------------------\n");
    for (i=0; i<6; i++){
        printf("%d\t\t%d\t\t%d\n", i+1, stu[i], invigilator[i]);
    }
    printf("-----------------------------------\n");
    if(total > 300){
        printf("Assign Chief Invigilator.\n");
    }
    else{
        printf("No Chief Invigilator assigned.\n");
    }
    return 0;
}