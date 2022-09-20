#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Club {
    char c_name[50];
    char lead_name[50];
    int num_member;
};

void add(struct Club *db, int n) {
    for(int i=0; i<n; ++i) {
        printf("Enter club name:\n");
        scanf("%s", db[i].c_name);
        printf("Enter club leader name:\n");
        scanf("%s", db[i].lead_name);
        printf("Enter number of club member:\n");
        scanf("%d", &db[i].num_member);
    }
}

int find_club(char *club_name, struct Club *db, int n) {
    int pos = -1;
    for(int i=0; i<n; ++i) {
        int str = strcmp(club_name, db[i].c_name);
        if(str==0) pos = i;
    }
    return pos;
}

void update(struct Club *db, char *name, int n) {
        int index = find_club(name, db, n);
        if(index!=-1) {
            printf("Enter new number of memebers:\n");
            scanf("%d", &db[index].num_member);
        }
        else printf("Data update not possible because data not found\n");
}

void rEmove(char *club_name, struct Club *db, int n) {
    int index = find_club(club_name, db, n);
    db[index].c_name[0] = '\0';
    db[index].lead_name[0] = '\0';
}

void PrintDB(struct Club *db, int n) {
    for(int i=0; i<n; ++i) {
        if(db[i].c_name[0]!='\0')
            printf("Club name = %s, Club leader name = %s, Number of club member = %d\n",
            db[i].c_name, db[i].lead_name, db[i].num_member);
    }
}

int main() {

    struct Club dataBase[50];
    int n, index;

    char c[4], c2[4], c3[4];
    printf("How many club info you want to store in Data base:\n");
    scanf("%d", &n);

    add(dataBase, n);

    printf("Do you want update the number of club members if yes type yes or type no: ");
    scanf("%s", c);

    int str = strcmp(c, "yes");

    if(str==0) {
        printf("Enter club name:\n");
        char club[50];
        scanf("%s", club);
        update(dataBase, club, n);
    }

    printf("Do you need club information if yes then type yes or type no: ");
    scanf("%s", c2);

    str = strcmp(c2, "yes");

    if(str==0) {
        printf("Enter a club name:\n");
        char name[20];
        scanf("%s", name);
        index = find_club(name, dataBase, n);
        if(index!=-1){
            printf("Here's your information:\n");
            printf("CLub name is %s, leader name is %s, number of club member is %d\n",
            dataBase[index].c_name, dataBase[index].lead_name, dataBase[index].num_member);
        }
        else printf("Club information not found\n");
    }

    printf("Do you want to remove any club from database if yes type yes or type no: ");
    scanf("%s", c3);

    str = strcmp(c3, "yes");

    if(str==0) {
        printf("enter a club name to romove: ");
        char club_name[50];
        scanf("%s", club_name);
        rEmove(club_name, dataBase, n);
        printf("Club information successfully removed\n");
    }

    printf("\nPrinting all information from data base:\n\n");

    PrintDB(dataBase, n);

    return 0;

}
