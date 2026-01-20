#include <stdio.h>
#include <ctype.h>

int calculatePercentage(int score, int total_questions) {
     // Calculate percentage
    float percentage = (score / (float)total_questions) * 100;

    // Print final result
    printf("Quiz Finished!\n"); 
    printf("Total correct answers: %d\n", score);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 50) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }
    return 0;
}




int main() {
// Array of questions
    const char *questions[]={
        "1) What is the capital of France?",
        "2) What does CPU stand for?",
        "3) Largest planet in the solar system?",
        "4) How many bits are in a byte?",
        "5) Which device is considered the brain of the computer?"
 };
 // Array of options for each question
 const char *options[][4]={

    {"A) Paris", "B) Berlin", "C) Madrid", "D) Rome"},
        {"A) Central Process Unit", "B) Central Processing Unit", "C) Computer Personal Unit", "D) Control Processing Unit"},
        {"A) Earth", "B) Mars", "C) Jupiter", "D) Saturn"},
        {"A) 4", "B) 8", "C) 16", "D) 32"},
        {"A) Hard Drive", "B) CPU", "C) RAM", "D) GPU"}
};



// correct answers
const char correct_answers[]={'A', 'B', 'C', 'B', 'B'};

int score=0;
int total_questions =5;

// looks through all questions
for (int i = 0 ; i < total_questions; i++){

printf("%s\n", questions[i]);
// print the options for each question
for (int j = 0 ; j < 4; j++){
    printf("%s\n", options[i][j]);


}
  
//Ask for user answer
char answer;
printf("Your answer A/B/C/D: ");
scanf(" %c", &answer);


//convert to uppercase
answer = toupper(answer);



// check if answer is correct
if (answer == correct_answers[i]){
    printf("Correct!\n");
    score++;
} else {
    printf("Wrong! The correct answer is %c\n", correct_answers[i]);
}   }               


// Calculate and display percentage
calculatePercentage(score, total_questions);

return 0 ;
}
