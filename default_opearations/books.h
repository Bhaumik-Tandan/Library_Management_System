#pragma once

void add_default_books()
{
    printf("\n");
    add_book("Three men in a boat",1564);
    add_book("7 ages",9564);
    add_book("Macbeth",3253);
    add_book("End game",1014);
    add_book("Dance of dragons",1024);
    add_book("Invisible Man",1114);
    add_book("Dead end",1814);
    add_book("Clash of Kings",7814);
    add_book("Three men in a boat",1564);//will not get added
    add_book("7 ages",1264);//will get added as accession number changed
    add_book("Three men in a boat",1253);
    add_book("7 ages",1164);
    add_book("End game",1019);
    add_book("Macbeth",9564);//will not get added
    add_book("Invisible Man",1214);
    add_book("End game",1004);
}