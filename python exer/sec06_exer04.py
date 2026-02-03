#Entradas de dados de altura e sexo de uma pessoa, calcule o peso ideal, para :
#homens: (72.7 * altura) - 58
#mulheres: (62.1 * altura) - 44.7

#entrada
altura = float(input("Informe sua altura: "))
sexo = (input ("Informe seu sexo: "))

#processamento
if sexo.lower() == 'm':
    peso_ideal = (72.7 * altura) - 58
if sexo.lower == 'f':
    peso_ideal = (62.1 * altura) - 44.7
else:
    peso_ideal == 0
    print("Sexo não reconhecido. ")

#saida
print("O seu peso ideal é {0:.2f}".format(peso_ideal))
