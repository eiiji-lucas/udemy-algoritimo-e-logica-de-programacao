#Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando 
#a formula: (72.7 * altura) - 58

#entrada
altura = float (input("Informe a altura: "))

#processamento
peso_ideal = (altura * 72.7) - 58

#saida
print("O peso ideal para {0:.2f} de altura é {1:.2f} kgs".format(altura, peso_ideal))