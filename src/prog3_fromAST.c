#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _aaaaaaaaaaaaaaa;
   int _aaaaaaaaaaaaaa2;
   int _bbbbbbbbbbbbbbb;
   int _xxxxxxxxxxxxxxx;
   int _cccccccccccccc1;
   int _cccccccccccccc2;
   printf("Enter _aaaaaaaaaaaaaaa:");
   scanf("%d", &_aaaaaaaaaaaaaaa);
   printf("Enter _bbbbbbbbbbbbbbb:");
   scanf("%d", &_bbbbbbbbbbbbbbb);
   for (int _aaaaaaaaaaaaaa2 = _aaaaaaaaaaaaaaa; _aaaaaaaaaaaaaa2 <= _bbbbbbbbbbbbbbb; _aaaaaaaaaaaaaa2++)
   printf("%d\n", (_aaaaaaaaaaaaaa2 * _aaaaaaaaaaaaaa2));
   for (int _aaaaaaaaaaaaaa2 = _bbbbbbbbbbbbbbb; _aaaaaaaaaaaaaa2 <= _aaaaaaaaaaaaaaa; _aaaaaaaaaaaaaa2++)
   printf("%d\n", (_aaaaaaaaaaaaaa2 * _aaaaaaaaaaaaaa2));
   _xxxxxxxxxxxxxxx = 0;
   _cccccccccccccc1 = 0;
   while (_cccccccccccccc1 < _aaaaaaaaaaaaaaa)
   {
   {
   _cccccccccccccc2 = 0;
   while (_cccccccccccccc2 < _bbbbbbbbbbbbbbb)
   {
   {
   _xxxxxxxxxxxxxxx = (_xxxxxxxxxxxxxxx + 1);
   _cccccccccccccc2 = (_cccccccccccccc2 + 1);
   }
   }
   _cccccccccccccc1 = (_cccccccccccccc1 + 1);
   }
   }
   printf("%d\n", _xxxxxxxxxxxxxxx);
   _xxxxxxxxxxxxxxx = 0;
   _cccccccccccccc1 = 1;
   do
   {
   _cccccccccccccc2 = 1;
   do
   {
   _xxxxxxxxxxxxxxx = (_xxxxxxxxxxxxxxx + 1);
   _cccccccccccccc2 = (_cccccccccccccc2 + 1);
   }
   while (!(_cccccccccccccc2 > _bbbbbbbbbbbbbbb));
   _cccccccccccccc1 = (_cccccccccccccc1 + 1);
   }
   while (!(_cccccccccccccc1 > _aaaaaaaaaaaaaaa));
   printf("%d\n", _xxxxxxxxxxxxxxx);
   system("pause");
    return 0;
}
