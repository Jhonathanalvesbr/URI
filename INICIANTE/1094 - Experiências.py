# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
x = int(input())
ir = 1
coelho = 0
cobaias = 0
rato = 0
sapo = 0
while ir <= x:
    y = input()
    y = y.split(" ")
    a,b = y
    a = int(a)
    if b == "C":
        coelho = coelho +a
        cobaias = cobaias +a
    if b == "R":
        rato = rato +a
        cobaias = cobaias +a
    if b == "S":
        sapo = sapo +a
        cobaias = cobaias +a
    ir = ir +1
coelhos = (coelho*100)/cobaias
ratos = (rato*100)/cobaias
sapos = (sapo*100)/cobaias
print("Total: %d cobaias" %cobaias)
print("Total de coelhos: %d" %coelho)
print("Total de ratos: %d" %rato)
print("Total de sapos: %d" %sapo)
print("Percentual de coelhos: %.2f" %coelhos,"%")
print("Percentual de ratos: %.2f" %ratos,"%")
print("Percentual de sapos: %.2f" %sapos,"%")
