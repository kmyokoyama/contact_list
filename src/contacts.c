#include "contacts.h"

CONTACT create_contact(char* name, char* phone) {
  CONTACT new_contact;

  strcpy(new_contact.name, name);
  strpcy(new_contact.phone, phone);

  return new_contact;
}


