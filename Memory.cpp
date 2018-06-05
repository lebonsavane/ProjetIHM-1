#include "Memory.h"

void Memory::actualisation()
{
    //timer
    for(int i=300;i > 0;i--)
{
    Sleep(1000);
    tempsR = i;
}