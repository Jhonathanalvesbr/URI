# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
j = 7
i = 1
ir = 0
while j != 0:
    if ir == 3:
        i = i+2
        if i == 11:
            break
        j = j + 5
        ir = 0
    print("I=%d" %i,end=" ")
    print("J=%d" %j)
    j = j -1
    ir = ir +1
