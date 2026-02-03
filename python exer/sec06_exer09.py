#A Secretaria de Meio Ambiente que controla o índice de poluição mantém 3
#grupos de indústrias que são altamente poluentes do meio ambiente. O índice de
#poluição aceitável varia de 0,05 até 0,25. Se o índice sobe para 0,3 as indústrias
#do 1o grupo são intimadas a suspenderem suas atividades, se o índice crescer para 0,4
#as industrias do 1o e 2o grupo são intimadas a suspenderem suas atividades, se o índice
#atingir 0,5 todos os grupos devem ser notificados a paralisarem suas atividades.
#Faça um algoritmo que leia o índice de poluição medido e emita a notificação adequada aos diferentes
#grupos de empresas.

#entrada
indice = float(input("Informe o índice de poluição: "))
#processamento
if indice >= 0.3 and indice < 0.4:
    print("Atenção: Industrias do 1o grupo devem suspender as atividades")
elif indice >= 0.4 and indice < 0.5:
    print("Atenção: Indústrias do 1o e 2o grupo devem suspender as atividades.")
elif indice >= 0.5:
    print("Atenção: Todos os grupos devem suspender as atividades.")

