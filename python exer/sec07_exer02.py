#Faça um algoritmo que conte de 1 a 100 e a cada multiplo de 10 emita um mensagem 'multiplo de 10'

#processamento 
for n in range (1, 101):
    print(n)
    if n % 10 == 0:
        print("Multiplo de 10")