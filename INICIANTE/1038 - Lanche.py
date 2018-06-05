# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
x = input()
x = x.split (" ")
a,b = x

y1 = 4.00
y2 = 4.50
y3 = 5.00
y4 = 2.00
y5 = 1.50

a = int(a)
b = int(b)



if a == 1:
    y = y1 * b
    print("Total: R$ %.2f" %y)
if a == 2:
    y = y2 * b
    print("Total: R$ %.2f" %y)
if a == 3:
    y = y3 * b
    print("Total: R$ %.2f" %y)
if a == 4:
    y = y4 * b
    print("Total: R$ %.2f" %y)
if a == 5:
    y = y5 * b
    print("Total: R$ %.2f" %y)
