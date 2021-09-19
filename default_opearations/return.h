#pragma once

void test_return_operations()
{
    printf("\n");
    return_book("Three men in a boat",121,"1234");//will not return as he has not issued any book
    return_book("Clash of Kings",221,"1234");//will not return as he has not issued the given book
    return_book("Dead end",292,"1234");
}