# -*- coding: utf-8 -*-

'''
Escreva a sua solu��o aqui
Code your solution here
Escriba su soluci�n aqu�
'''
x = input()
x = x.split(" ")
a,b,c = x
a = float(a)
b = float(b)
c = float(c)
if ((b-c) < a) and (a < (b+c)):
    if ((a-c) < b) and (b < (a+c)):
        if ((a-b) < c) and (c < (a+b)):
            x = a + b + c
            print("Perimetro = %.1f" %x)
else:
    x = (((a+b)*c)/2)
    print("Area = %.1f" %x)
