# -*- coding: utf-8 -*-

'''
Escreva a sua solu��o aqui
Code your solution here
Escriba su soluci�n aqu�
'''
while True:
    x = int(input())
    if x != 0:
        i = 1
        while i <= x:
            if i == x:
                print(i)
                break
            else:
                print(i, end=" ")
                i = i + 1
    else:
        break
