#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _aaaaaaaaaaaaaaa;
   int _bbbbbbbbbbbbbbb;
   int _xxxxxxxxxxxxxxx;
   int _yyyyyyyyyyyyyyy;
   printf("Enter _aaaaaaaaaaaaaaa:");
   scanf("%d", &_aaaaaaaaaaaaaaa);
   printf("Enter _bbbbbbbbbbbbbbb:");
   scanf("%d", &_bbbbbbbbbbbbbbb);
   printf("%d\n", (_aaaaaaaaaaaaaaa + _bbbbbbbbbbbbbbb));
   printf("%d\n", (_aaaaaaaaaaaaaaa - _bbbbbbbbbbbbbbb));
   printf("%d\n", (_aaaaaaaaaaaaaaa * _bbbbbbbbbbbbbbb));
   printf("%d\n", (_aaaaaaaaaaaaaaa / _bbbbbbbbbbbbbbb));
   printf("%d\n", (_aaaaaaaaaaaaaaa % _bbbbbbbbbbbbbbb));
   _xxxxxxxxxxxxxxx = (((_aaaaaaaaaaaaaaa - _bbbbbbbbbbbbbbb) * 10) + ((_aaaaaaaaaaaaaaa + _bbbbbbbbbbbbbbb) / 10));
   _yyyyyyyyyyyyyyy = (_xxxxxxxxxxxxxxx + (_xxxxxxxxxxxxxxx % 10));
   printf("%d\n", _xxxxxxxxxxxxxxx);
   printf("%d\n", _yyyyyyyyyyyyyyy);
   system("pause");
    return 0;
}
