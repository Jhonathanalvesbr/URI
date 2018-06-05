# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
ir = int(input())
corredor = 0
while corredor < ir:
    x = int(input())
    if x%2==0 and x!= 0:
        print("EVEN", end=" ")
        if x > 0:
            print("POSITIVE")
        if x < 0:
            print("NEGATIVE")
    elif x%2==1:
        print("ODD", end=" ")
        if x > 0:
            print("POSITIVE")
        if x < 0:
            print("NEGATIVE")
    elif x == 0:
        print("NULL")
    corredor = corredor +1
    
