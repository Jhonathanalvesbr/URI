# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
x = int(input())
y = int(input())
i = 0
if x > y:
    x,y = y,x
while x <= y:
    if x%13!=0:
        i = i+x
    x = x +1
print(i)
