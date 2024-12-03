#include<string.h>
#include "calcul.h"

int calculer(int e1,int e2, int op){
int res;
switch (op){
case 0: res=e1 +e2; break;
case 1: res=e1-e2; break;
case 2: res=e1*e2; break;
case 3: res=e1/e2; break;}
return res;
}
