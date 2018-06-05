# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
x = int(input())
y = int(input())
if x > y:
    x,y=y,x
x = x +1
while x < y:
    if x%5==3 or x%5==2:
        print(x)
    x = x +1
