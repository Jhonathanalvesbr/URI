# -*- coding: utf-8 -*-

'''
Escreva a sua solu��o aqui
Code your solution here
Escriba su soluci�n aqu�
'''
n = int(input())

if n >= 3600:
   y = n / 3600
   y = int(y)
   n = n - (y*3600)
else:
   y = int(0)
   
if n >= 60 and n < 3600:
   x = n / 60
   x = int(x)
   n = n - (x*60)

else:
   x = int(0)

print ("%d:"%y+"%d:"%x+"%d"%n)
