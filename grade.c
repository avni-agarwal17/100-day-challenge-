int main() {
    int marks=50;
    if (marks>=90 && marks<=100){
        printf("grade is A");
    }
    else if(marks>=75 && marks<=89){
        printf("Grade is B");
    }
    else if(marks>=60 && marks<=74) {
        printf("Grade is C");
    }
    else if(marks>=40 && marks<=59) {
        printf("Grade is D");
    }
     else if(marks>=40) {
        printf("Fail");  
    }
     return 0;
}