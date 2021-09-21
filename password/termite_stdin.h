#pragma once

//https://stackoverflow.com/a/1798833/16501544
void terminate(int on)
{
    static struct termios oldt, newt;
    if (!on)
    {
        tcgetattr(STDIN_FILENO, &oldt);
        newt = oldt;
        newt.c_lflag &= ~(ICANON);
        tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    }
    else
        tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}