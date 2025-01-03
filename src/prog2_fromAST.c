#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _aaaaaaaaaaaaaaa;
   int _bbbbbbbbbbbbbbb;
   int _ccccccccccccccc;
   printf("Enter _aaaaaaaaaaaaaaa:");
   scanf("%d", &_aaaaaaaaaaaaaaa);
   printf("Enter _bbbbbbbbbbbbbbb:");
   scanf("%d", &_bbbbbbbbbbbbbbb);
   printf("Enter _ccccccccccccccc:");
   scanf("%d", &_ccccccccccccccc);
   if (_aaaaaaaaaaaaaaa > _bbbbbbbbbbbbbbb) 
   {
   if (_aaaaaaaaaaaaaaa > _ccccccccccccccc) 
   {
   goto abigger;
   }
   else
   {
   printf("%d\n", _ccccccccccccccc);
   goto outofif;
abigger:
   printf("%d\n", _aaaaaaaaaaaaaaa);
   goto outofif;
   }
   }
   if (_bbbbbbbbbbbbbbb < _ccccccccccccccc) 
   {
   printf("%d\n", _ccccccccccccccc);
   }
   else
   {
   printf("%d\n", _bbbbbbbbbbbbbbb);
   }
outofif:
   if (((_aaaaaaaaaaaaaaa == _bbbbbbbbbbbbbbb && _aaaaaaaaaaaaaaa == _ccccccccccccccc) && _bbbbbbbbbbbbbbb == _ccccccccccccccc)) 
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((_aaaaaaaaaaaaaaa < 0 || _bbbbbbbbbbbbbbb < 0) || _ccccccccccccccc < 0)) 
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (!(_aaaaaaaaaaaaaaa < (_bbbbbbbbbbbbbbb + _ccccccccccccccc))) 
   {
   printf("%d\n", 10);
   }
   else
   {
   printf("%d\n", 0);
   }
   system("pause");
    return 0;
}
