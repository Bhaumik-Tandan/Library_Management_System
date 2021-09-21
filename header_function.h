#pragma once

#include<stdbool.h>
#include<string.h>
#include <termios.h>
#include <unistd.h>


struct  book_node
{
    char title[30];
    int accession_number;
    bool tag;
    struct  book_node *n;
}*head_book;

typedef struct book_node book_node;


struct  subscriber_node
{
    char name[30];
    int borrower_number;
    char password[30];
    book_node *book[5];
    char date[5][20];
    int number;
    struct  subscriber_node *n;
}*head_subscriber;

typedef struct subscriber_node subscriber_node;

//global functions
void admin();
void borrower();
void print_book_direct(subscriber_node* p);
void print_book(int borrower_number);
void disp_avail_book();
void print_subscriber(char book[30]);
void issue_directly(subscriber_node* p,char book[30],char date[30]);
void issue_book(char book[30],int borrower_number,char date[30],char pas[30]);
void return_directly(subscriber_node* p,char book[30]);
void return_book(char book[30],int borrower_number,char pas[30]);
void add_book(char title[30],int accession_number);
book_node* set_tag(char book[30],bool tag);
void home();
subscriber_node* subscriber_exists(int borrower_number,char password[30]);
void add_subscriber(char name[30],int borrower_number,char password[30]);


#include "book.h"
#include "suscriber.h"
#include "./operation/return.h"
#include "./operation/issue.h"
#include "./operation/display/print_books.h"
#include "./operation/display/subscriber_of_book.h"


void __attribute__((constructor))  setup();
#include "./default_opearations/setup.h"//contains default operation
