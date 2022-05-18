#include <stdio.h>
#include <string.h>
#define records 100
#define lenght 32

struct Phonebook {
  long long int number;
  char name[lenght];
  char secondName[lenght];
};

int main() {

  struct Phonebook phonebook[records] = {
      89994595511, "Tom",      "Tailor",    89048204266, "Alice",   "li",
      89137912716, "Tad",      "Swan",      89992014208, "Adrew",   "Teach",
      84561232144, "Sam",      "Stewart",   89423112432, "Antohny", "Hawk",
      89432156420, "Dan",      "Henderson", 89543234634, "Steve",   "Black",
      89432364321, "Christie", "Tate",      83834567291, "Mishel",  "Di"};

  while (1) {
    printf("1.show entire phonebook\n2.search in phonebook\n3.add to "
           "phonebook\n4.exit\n");

    int choice;

    scanf("%d", &choice);
    int i = 0;
    int Number = 0;
    if (choice == 1) {
      while (phonebook[i].number != 0) {
        printf("%d\n", Number += 1);
        printf("number: %lld\n", phonebook[i].number);
        printf("name: %s\n", phonebook[i].name);
        printf("second name: %s\n", phonebook[i].secondName);
        printf("\n");
        i++;
      }
    } else if (choice == 2) {
      printf("search for a number by name:\n");
      char search;
      scanf("%s", &search);
      for (i = 0; i < records; i++) {
        if (strcmp(phonebook[i].name, &search) == 0) {
          printf("\n");
          printf("number: %lld\n", phonebook[i].number);
          printf("name: %s\n", phonebook[i].name);
          printf("second name: %s\n", phonebook[i].secondName);
          printf("\n");
        }
      }
    } else if (choice == 3) {
      for (i = 0; i < records; i++) {
        if (phonebook[i].number == 0) {
          printf("enter a number:\n");
          scanf("%lld", &phonebook[i].number);
          printf("enter a name:\n");
          scanf("%s", phonebook[i].name);
          printf("enter a second name:\n");
          scanf("%s", phonebook[i].secondName);
          printf("\n");
          break;
        }
      }
    } else if (choice == 4) {
      break;
    } else {
      printf("error\n");
      break;
    }
  }
}
