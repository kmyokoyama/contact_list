#include <string.h>
#include "contacts.h"

CONTACT create_contact(char* name, char* phone) {
  CONTACT new_contact;

  strcpy(new_contact.name, name);
  strcpy(new_contact.phone, phone);

  return new_contact;
}
