# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
n = input()
n = n.split(" ")
n1,n2,n3,n4 = n
n1=float(n1)
n2=float(n2)
n3=float(n3)
n4=float(n4)

media = (n1*2) + (n2*3) + (n3*4) + (n4*1)
media = media / 10


print("Media: %.1f" %media)
if media >= 7.0:
    print("Aluno aprovado.")   
if media < 5:
    print("Aluno reprovado.")
if (media >= 5.0) and (media < 7.0):
    print("Aluno em exame.")
    n = float(input())
    print("Nota do exame: %.1f" %n)
    media = media + n
    media = media / 2
    if media >= 5:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")        
    print("Media final: %.1f" %media)
