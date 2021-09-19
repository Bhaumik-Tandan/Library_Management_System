#pragma once

void add_default_issue()
{
    printf("\n");
    issue_book("Macbeth",221,"12/2/2013","1234");
    issue_book("Three men in a boat",221,"13/3/2013","1234");
    issue_book("7 ages",221,"13/3/2013","1234");
    issue_book("Invisible Man",221,"13/9/2013","1234");

    issue_book("Three men in a boat",221,"13/3/2013","1234");//will not get issued as already issued
    issue_book("Three men in a boat",292,"13/3/2013","1234");//will get issued by different person
    issue_book("Dead end",292,"23/3/2013","1234");

    issue_book("End game",221,"13/3/2014","1234");
    issue_book("Clash of Kings",221,"23/3/2013","1234");//will not get issued as limit exeded

    issue_book("Last supper",292,"23/3/2013","1234");//will not get issued as book not available

    issue_book("Dead end",321,"23/3/2013","1234");//will not get issued as book not available as we only had one copy already issued by 292
}