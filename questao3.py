#3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne:
#• O menor valor de faturamento ocorrido em um dia do mês;
#• O maior valor de faturamento ocorrido em um dia do mês;
#• Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.

#IMPORTANTE:
#a) Usar o json ou xml disponível como fonte dos dados do faturamento mensal;
#b) Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias devem ser ignorados no cálculo da média;




import pandas as pd

# Leitura do arquivo JSON contendo os dados de faturamento diário
df = pd.read_json('dados.json')

# Cálculo do menor valor de faturamento ocorrido em um dia do mês
menor_faturamento = df['valor'].min()
print('Menor valor de faturamento diário:', menor_faturamento)

# Cálculo do maior valor de faturamento ocorrido em um dia do mês
maior_faturamento = df['valor'].max()
print('Maior valor de faturamento diário:', maior_faturamento)

# Cálculo da média mensal de faturamento
media_mensal = df['valor'].mean()

# Cálculo do número de dias no mês em que o valor de faturamento diário foi superior à média mensal
dias_acima_da_media = df[df['valor'] > media_mensal]['valor'].count()
print('Número de dias no mês com faturamento acima da média mensal:', dias_acima_da_media)
