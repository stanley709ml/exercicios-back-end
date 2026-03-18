#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef float f32;
typedef double f64;

typedef struct{
    char name[50];
    f32 grade;
} Student;

int main(){

    FILE* file = fopen("student_records.txt", "r");

    int ammount_students = 0;
    int total_students = 0;

    if (file == NULL) {
        printf("No existing records found. Starting fresh.\n");
    } else {

        fseek(file, 0, SEEK_END);
        long size = ftell(file);
        rewind(file);

        if (size != 0) {

            char yes_no0;
            char yes_no;

            printf("It looks like there already exists a file containing the students report. Would you like to read this file? (Y/N) ");
            scanf(" %c", &yes_no0);
            yes_no = toupper(yes_no0);
            getchar();

            if (yes_no == 'N') {
                printf("Bye then.\n");
                return 1;
            }

            Student* students1;

            char buffer0[5108];
            int ammount_students1 = 0;
            int total_students1 = 0;

            while (fgets(buffer0, sizeof(buffer0), file) != NULL) {
                ammount_students1++;
            }

            rewind(file);
            students1 = malloc(ammount_students1 * sizeof(Student));

            for (int i = 0; i < ammount_students1; i++) {
                fgets(buffer0, sizeof(buffer0), file);
                sscanf(buffer0, "%[^:]: %f", students1[i].name, &students1[i].grade);
                total_students1++;
            }

            printf("\n----- Students Record -----\n");

            for (int j = 0; j < total_students1; j++) {
                printf("%s: %.1f\n", students1[j].name, students1[j].grade);
            }

            char yes_no01;
            char yes_no1;
            int ammount_new_students1;

            do {

                printf("Do you want to add any students? (Y/N) ");
                scanf(" %c", &yes_no01);
                yes_no1 = toupper(yes_no01);
                getchar();

                if (yes_no1 == 'N') {
                    printf("Bye then.\n");
                    break;
                }

                printf("How many more students do you want to add? ");
                scanf("%d", &ammount_new_students1);
                getchar();

                ammount_students1 += ammount_new_students1;
                students1 = realloc(students1, ammount_students1 * sizeof(Student));

                if (students1 == NULL) {
                    printf("Memory reallocation failed.\n");
                    break;
                }

                int p = 0;

                for (int i = total_students1; i < ammount_students1; i++) {
                    printf("What is the name of the %d new student? ", p+1);
                    fgets(students1[i].name, sizeof(students1[i].name), stdin);
                    students1[i].name[strcspn(students1[i].name, "\n")] = '\0';

                    printf("What is the grade of the %d new student? ", p+1);
                    scanf("%f", &students1[i].grade);

                    p++;
                    total_students1++;
                    getchar();
                }

                fclose(file);
                file = fopen("student_records.txt", "w");

                printf("\n----- Students Record -----\n");

                for (int j = 0; j < total_students1; j++) {
                    printf("%s: %.1f\n", students1[j].name, students1[j].grade);
                    fprintf(file, "%s: %.1f\n", students1[j].name, students1[j].grade);
                }

                printf("The student reports were succesfully saved.\n");

            } while(yes_no1 != 'N');

            fclose(file);
            free(students1);

            return 0;
        }

        fclose(file);
    }

    file = fopen("student_records.txt", "w");

    printf("How many students do you want to register? ");
    scanf("%d", &ammount_students);
    getchar();

    Student* students = malloc(ammount_students * sizeof(Student));

    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < ammount_students; i++) {
        printf("What is the name of the %d student? ", i+1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("What is the grade of the %d student? ", i+1);
        scanf("%f", &students[i].grade);

        printf("\n");

        total_students++;
        getchar();
    }

    printf("\n----- Students Record -----\n");

    for (int j = 0; j < ammount_students; j++){
        printf("%s: %.1f\n", students[j].name, students[j].grade);
        fprintf(file, "%s: %.1f\n", students[j].name, students[j].grade);
    }

    printf("\nStudent records saved to student_records.txt\n");

    char addMoreStudents0;
    char addMoreStudents;
    int total_moreStudents;

    do{

        printf("Do you want to add more students (Y/N)? ");
        scanf(" %c", &addMoreStudents0);
        getchar();

        printf("\n");

        addMoreStudents = toupper(addMoreStudents0);

        if (addMoreStudents != 'Y') {
            printf("Bye then.\n");
            break;
        } else {
            printf("How many more students do you want to register? ");
            scanf("%d", &total_moreStudents);
            getchar();

            ammount_students += total_moreStudents;

            students = realloc(students, ammount_students * sizeof(Student));

            if (students == NULL) {
                printf("Memory reallocation failed.\n");
                return 1;
            }

            int m = 0;

            for (int k = total_students; k < ammount_students; k++) {

                printf("What is the name of the %d new student? ", m+1);
                fgets(students[k].name, sizeof(students[k].name), stdin);
                students[k].name[strcspn(students[k].name, "\n")] = '\0';

                printf("What is the grade of the %d new student? ", m+1);
                scanf("%f", &students[k].grade);

                printf("\n");

                m += 1;
                total_students++;
                getchar();
            }

            printf("\n----- Students Record -----\n");

            for (int l = 0; l < ammount_students; l++) {
                printf("%s: %.1f\n", students[l].name, students[l].grade);
            }
        }
    } while(addMoreStudents != 'N');

    rewind(file);

    for (int l = 0; l < ammount_students; l++) {
        fprintf(file, "%s: %.1f\n", students[l].name, students[l].grade);
    }

    fclose(file);
    free(students);

    return 0;
}
