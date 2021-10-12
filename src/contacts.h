#define MAX_STR 50

typedef struct contact {
  char name[MAX_STR];
  char phone[MAX_STR];
} CONTACT;

typedef struct contacts {
  CONTACT *list;
  int size;
} CONTACTS;

CONTACT create_contact(char* name, char* phone);
