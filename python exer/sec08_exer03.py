#Faça um programa que carregue um vetor com dez numeros inteiros. 
# Mostre o vetor na ordem inversa a que foi digitada

#variaveis 
vetor = []

#entrada
for i in range (0, 10):
    num = int(input("Informe o valor do vetor: "))
    vetor.append(num)
#processamento
vetor.reverse()
for n in vetor:
    print(n)