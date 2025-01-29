#include <stdio.h>
struct Student {
    char name[50];
    int age;
    float totalMarks;
};
void main() {
    struct Student s1={"Joe Goldberg",32,100};
    struct Student s2={"Will Bettelheim",33,99};
    struct Student s3={"Jonathan Moore",34,98};
    struct Student s4={"Paul Brown",35,97};
    struct Student s5={"Dan Fox",33,96};
    printf("%s %d %f\n",s1.name,s1.age,s1.totalMarks);
    printf("%s %d %f\n",s2.name,s2.age,s2.totalMarks);
    printf("%s %d %f\n",s3.name,s3.age,s3.totalMarks);
    printf("%s %d %f\n",s4.name,s4.age,s4.totalMarks);
    printf("%s %d %f\n",s5.name,s5.age,s5.totalMarks);

}
