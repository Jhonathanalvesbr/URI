# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
x = int(input())
a = 0
b = 1
c = 0
ir = 0
if (0 < x < 46):
    while ir < x:
        if ir == x-1:
            print(a)
            break
        else:
            print(a, end=" ")
            c = a+b
            b = a
            a = c
            ir += 1
