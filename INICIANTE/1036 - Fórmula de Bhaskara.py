# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
from math import sqrt
x = input()
x = x.split(" ")
a,b,c = x
a = float(a)
b = float(b)
c = float(c)


x1 = -b
x2 = b**2
x3 = 4*a*c
x4 = 2*a
x5 = (b**2)-(4*a*c)

if x5 < 0 or a == 0 :
    print("Impossivel calcular")
else:
    x = (-b + sqrt((b**2)-(4*a*c)))/(2*a)
    print("R1 = %.5f" %x)
    x = (-b - sqrt((b**2)-(4*a*c)))/(2*a)
    print("R2 = %.5f" %x)
