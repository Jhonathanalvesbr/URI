# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
x = int(input())
ir = 1
y = 0
while ir <= x:
    a = input()
    a = a.split(" ")
    a,b=a
    a = int(a)
    b = int(b)
    while a != b:
        if a > b:
            a,b=b,a
        a = a +1
        if a >= b:
            break
        if a%2==1:
            y = y + a
    print(y)
    y = 0
    ir = ir +1
