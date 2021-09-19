#pragma once

void add_default_subscribers()
{
    printf("\n");
    add_subscriber("Rohan Gupta",221,"1234");
    add_subscriber("Bhaumik Tandan",292,"1234");
    add_subscriber("Rohan Gupta",321,"1234");
    add_subscriber("Rahul Misra",221,"1234");//will not get added
    add_subscriber("Naman Sethi",121,"1234");
}