{Erro: Chamada à função 'func' com número de parâmetros menor que o declarado}
{Erro: Chamada à função 'func' com número de parâmetros maior que o declarado}
{Erro: }

{Incluir o erro do tipo do parâmetro diferente do declarado}


{Aviso: Variável 'a' declarada e inicializada, mas não utilizada}
{Erro: Função 'principal' deveria retornar 'inteiro', mas retorna 'vazio'}


[rogerio@ryzen-nitro tests]$ gcc -Wall -Wextra -Wconversion -Warith-conversion -Wmain -Wunused-function sema-005.c
sema-005.c: In function ‘main’:
sema-005.c:9:13: error: too few arguments to function ‘func’
    9 |         a = func(10);
      |             ^~~~
sema-005.c:1:5: note: declared here
    1 | int func(int x, int y){
      |     ^~~~
sema-005.c:10:13: error: too many arguments to function ‘func’
   10 |         a = func(10,20,30);
      |             ^~~~
sema-005.c:1:5: note: declared here
    1 | int func(int x, int y){
      |     ^~~~
sema-005.c:11:18: warning: conversion from ‘double’ to ‘int’ changes value from ‘1.05e+1’ to ‘10’ [-Wfloat-conversion]
   11 |         a = func(10.5,20);
      |                  ^~~~
sema-005.c:12:18: warning: conversion from ‘double’ to ‘int’ changes value from ‘1.05e+1’ to ‘10’ [-Wfloat-conversion]
   12 |         a = func(10.5,b);
      |                  ^~~~
sema-005.c:12:23: warning: conversion from ‘float’ to ‘int’ may change value [-Wfloat-conversion]
   12 |         a = func(10.5,b);
      |                       ^
sema-005.c:6:13: warning: variable ‘a’ set but not used [-Wunused-but-set-variable]
    6 |         int a;
      |             ^
[rogerio@ryzen-nitro tests]$ 




inteiro func(inteiro: x, inteiro: y)
	retorna(x + y)
fim

inteiro principal()
	inteiro: a
	a := func(10)
	a := func(10,20,30)
	a := func(10.5,20)
fim
