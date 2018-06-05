# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
x = input()
x = x.split(" ")
a,b = x
a = int(a)
b = int(b)

if a != 0 and b != 0:
    ir = -1
    while ir != 0:
        if a > 0 and b > 0:
            print("primeiro")
        elif a < 0 and b < 0:
            print("terceiro")
        elif a > 0 and b < 0:
            print("quarto")
        elif a < 0 and b > 0:
            print("segundo")
        x = input()
        x = x.split(" ")
        a,b = x
        a = int(a)
        b = int(b)
        if a == 0 or b == 0:
            ir = 0
