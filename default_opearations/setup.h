#pragma once
void setup() {//it runs automatically

  #include "header.h"
  add_default_subscribers();
    add_default_books();
    add_default_issue();

    // bellow all are just for testing
    test_return_operations(); 
    test_display_book_operation();
    test_subscriber_disp_operation();

    printf("\n---------------------Default operations ended------------------------");
}