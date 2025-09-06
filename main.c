#include <stdio.h>

// compute letter grade from average
char letter_grade(double avg){
    if(avg>=90) return 'A';
    if(avg>=80) return 'B';
    if(avg>=70) return 'C';
    if(avg>=60) return 'D';
    return 'F';
}

int main(void){
    int n;
    printf("How many assignments? ");
    if(scanf("%d",&n)!=1 || n<=0){
        printf("Invalid number.\n");
        return 1;
    }
    double sum=0.0;
    // loop over assignments
    for(int i=1;i<=n;++i){
        double s;
        printf("Score %d (0-100): ",i);
        if(scanf("%lf",&s)!=1 || s<0 || s>100){
            printf("Invalid score.\n");
            return 1;
        }
        sum+=s;
    }
    double avg = sum/n;
    printf("Average: %.2f\n", avg);
    printf("Letter grade: %c\n", letter_grade(avg));
    return 0;
}
