# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
ir = int(input())
j = 1
while j <= ir:
    a = input()
    a = a.split(" ")
    a,b =a
    a = int(a)
    b = int(b)
    if b == 0:
        print("divisao impossivel")
    else:
        x = a / b
        print("%.1f" %x)

    j = j +1
