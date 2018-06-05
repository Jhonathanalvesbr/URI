# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
j = 1
i = 0
ir = 0
while j != 0:
    if ir == 3:
        j = 1
        i = i+0.2
        if i > 2.2:
            break
        j = j +i
        ir = 0
    if i == 0:
        print("I=%d" %i,end=" ")
        print("J=%d" %j)
    elif i == 1:    
        print("I=%d" %i,end=" ")
        print("J=%d" %j)
    elif i >= 1.9:
        i = i+0.1
        print("I=%d" %i,end=" ")
        print("J=%d" %j)
    else:
        print("I=%.1f" %i,end=" ")
        print("J=%.1f" %j)
    j = j +1
    ir = ir +1
