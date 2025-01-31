
// Modify Programming Project 7 so that it prompts for five quiz grades for each
// of five students, then computes the total score and average score for each
// student, and the average score, high score, and low score for each quiz.
#include <stdio.h>
int main() {

  // double a[5][5] = {0};

  double a[5][5] = {{88, 93, 94, 100, 80},
                    {63, 57, 87, 81, 66},
                    {82, 87, 86, 73, 71},
                    {95, 77, 63, 82, 99},
                    {96, 84, 92, 76, 90}};

  double stuavg = 0, quizavg = 0, stusum[5] = {0}, quizsum[5] = {0},
         highscore = 0, lowscore = 0;
  int student = 0, quiz = 0;

  // stores grades entered in array student 1-5
  // for (student = 0; student < 5; student++) {
  //   printf("Enter quiz grades for Student %d: ", student + 1);
  //   for (quiz = 0; quiz < 5; quiz++) {
  //     scanf(" %lf", &a[student][quiz]);
  //   }
  // }
  // adds quiz total and divide by 5 to find averge
  for (int i = 0; i < 5; i++) {
    printf("\n");
    printf("Student %d ", i + 1);
    printf("\n");
    for (int j = 0; j < 5; j++) {
      stusum[i] += a[i][j];
    }
    printf("Total score: %g \t Average score: %g", stusum[i], stusum[i] / 5);
    printf("\n");
  }
  // prints average score, highscore and lowscore for each quiz
  //
  for (int i = 0; i < 5; i++) {
    printf("\n");
    printf("Quiz %d", i + 1);
    highscore = 0;
    lowscore = 100;
    printf("\n");

    for (int j = 0; j < 5; j++) {
      quizsum[i] += a[j][i];
      quizavg = quizsum[i] / 5;

      if (lowscore > a[j][i]) {
        lowscore = a[j][i];
      }
      if (highscore < a[j][i]) {
        highscore = a[j][i];
      }
    }
    printf("Average: %g\t", quizavg);
    printf("High score: %g\t", highscore);
    printf("Low score: %g\t", lowscore);
  }
  printf("\n");
}
