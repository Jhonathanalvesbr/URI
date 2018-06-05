# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
idade = int(input())
ano = 365
mes = 12
dias = 30

if idade >= ano:
    aux = idade / ano
    aux = int(aux)
    idade = idade - (aux*ano)
    print("%d ano(s)" %aux)
else:
    aux = 0
    print("%d ano(s)" %aux)
if idade >= dias:
    aux = idade / dias
    aux = int(aux)
    idade = idade - (aux*dias)
    print("%d mes(es)" %aux)
else:
    aux = 0 
    print("%d mes(es)" %aux)
if idade < dias:
    aux=idade
    print("%d dia(s)" %aux)

