# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
x = input()
x = x.split(" ")

a,c,b,d = x

a = int(a)
b = int(b)
c = int(c)
d = int(d)
x=0
y=0

if a == b and c > d:
    x = 23
    y = 60-(c-d)
elif a == b and c < d:
    x = 0
    y = d-c
elif a == b and c == d:
    x = 24
    y = 0
elif a < b and c == d:
    x = b-a
    y = 0
elif a < b and c > d:
    x = b-a-1
    y = 60-(c-d)
elif a < b and c < d:
    x = b-a
    y = d-c
elif a > b and c > d:
    x = 24-(a-b)-1
    y = 60-(c-d)
elif a > b and c ==d:
    x = 24-(a-b)
    y = 0
print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)"%(x,y))
