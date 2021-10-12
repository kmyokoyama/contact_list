#define MAX_STR 50

typedef struct contact {
  char name[MAX_STR];
  char phone[MAX_STR];
} CONTACT;

typedef struct contacts {
  CONTACT* list;
  int size;
} CONTACTS;

