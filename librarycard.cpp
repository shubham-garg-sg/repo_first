#include <stdio.h>

struct libraryCard
{
    const char * title;
    const char * author;
    const char * publisher;
    const char * subject;
    const char * isbn;
    const char * oclc;
    int ddc1;
    int ddc2;
    int year_pub;
    int year_acq;
    int quantity;
};

int main() {
    libraryCard l = {"The mayor of Casterbridge", "Jane Auston", "SK Publishers", "Novel", "32435465", "434545453", 43, 45, 2010, 2014, 44};
    printf("Title: %s\n", l.title);
    printf("Author: %s\n", l.author);
    printf("Publisher: %s\n", l.publisher);
    printf("Subject: %s\n", l.subject);
    printf("ISBN: %s\n", l.isbn);
    printf("OCLC: %s\n", l.oclc);
    printf("DDC1: %d\n", l.ddc1);
    printf("DDC2: %d\n", l.ddc2);
    printf("Year of publish: %d\n", l.year_pub);
    printf("Year of ACQ: %d\n", l.year_acq);
    printf("Quantity: %d\n", l.quantity);

    return 0;
}
