# ⚠️ Importante!!!
Você pode escolher qualquer um dos desafios para desenvolver. Sinta-se à vontade para começar pelo desafio que mais lhe interessa.

# Desafio Super Trunfo - Países - Comparação das Cartas

Bem-vindo ao desafio "Super Trunfo - Países"! Neste projeto, você desenvolverá um sistema para comparar cartas baseadas em atributos de cidades. O desafio é dividido em três níveis: Novato, Aventureiro e Mestre. Cada nível adiciona novas funcionalidades e complexidades, permitindo um aprendizado progressivo.

## 🏅 Nível Novato

No nível Novato, você começará implementando a lógica básica de comparação entre cartas utilizando estruturas de decisão `if` e `if-else`.

### 🚩 Objetivos:
- **Cadastro de Cartas:** O sistema permitirá ao usuário cadastrar cartas de cidades, incluindo informações como estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos.
- **Comparação de Cartas:** O sistema comparará os atributos de duas cartas e determinará a vencedora com base em uma propriedade específica (população, área, PIB, etc.), escolhida no código.
- **Exibição de Resultados:** Após a comparação, o sistema exibirá qual carta venceu com base na regra: maior valor vence, exceto em densidade populacional, onde o menor valor é o vencedor.

### 📥 Entrada de Dados:
- Os dados das cartas serão inseridos manualmente via terminal.
- O sistema solicitará interativamente as informações de cada carta.

### 📤 Saída de Dados:
- Após o cadastro, as propriedades da cidade serão exibidas de forma organizada.
- O resultado da comparação será mostrado, indicando a carta vencedora.

---

## 🏅 Nível Aventureiro

No nível Aventureiro, você expandirá o sistema para incluir a comparação aninhada e a criação de um menu interativo usando `switch`.

### 🆕 Diferença em relação ao Nível Novato:
- **Menu Interativo:** O usuário poderá escolher diferentes atributos para comparação através de um menu.
- **Comparação Aninhada:** Implementação de lógica de comparação mais complexa, utilizando estruturas aninhadas para tomar decisões baseadas em múltiplos atributos.

### 🚩 Novas Funcionalidades:
- **Cadastro de Cartas:** Similar ao nível Novato, com a adição de comparação de múltiplos atributos.
- **Menu Interativo:** Uso de `switch` para criar um menu que permite ao jogador escolher os atributos a serem comparados.
- **Exibição de Resultados:** O sistema exibirá o resultado da comparação, indicando qual carta venceu e qual atributo foi utilizado.

---

## 🏅 Nível Mestre

No nível Mestre, o desafio se intensifica com a adição de funcionalidades avançadas, como menus dinâmicos e lógica de decisão complexa com operadores ternários.

### 🆕 Diferença em relação ao Nível Aventureiro:
- **Escolha de Dois Atributos:** O usuário poderá escolher dois atributos para comparação entre as cartas.
- **Lógica de Decisão Complexa:** Implementação de estruturas de decisão aninhadas e encadeadas, além do uso de operadores ternários para determinar a carta vencedora.
- **Menus Dinâmicos:** Os menus serão dinâmicos, permitindo uma navegação fluida entre as opções de comparação.

### 🚩 Novas Funcionalidades:
- **Comparação de Dois Atributos:** O sistema comparará dois atributos simultaneamente para determinar a carta vencedora.
- **Lógica Avançada:** Uso de operadores ternários e lógica aninhada para lidar com comparações complexas.
- **Empates:** O sistema será capaz de lidar com empates, exibindo mensagens apropriadas.
- **Exibição de Resultados:** Exibição dos resultados das comparações de forma clara e interativa.

---

## 📋 Requisitos Funcionais Comuns
- **Cadastro de Cartas:** O sistema deve permitir o cadastro de cartas com as informações necessárias.
- **Comparação:** O sistema deve comparar as cartas e determinar a vencedora com base nas regras estabelecidas.
- **Exibição de Resultados:** Os resultados devem ser exibidos de forma clara, indicando a carta vencedora.

## 📌 Requisitos Não Funcionais Comuns
- **Usabilidade:** A interface do usuário deve ser simples e intuitiva.
- **Performance:** O sistema deve executar operações sem atrasos perceptíveis.
- **Manutenibilidade:** O código deve ser bem estruturado e documentado.
- **Confiabilidade:** O sistema deve ser robusto e capaz de lidar com entradas inválidas de forma adequada.

---

Boa sorte no desenvolvimento deste desafio e aproveite para aprender e se divertir enquanto progride pelos níveis!

Equipe de Ensino - MateCheck

## 🏅 Nível Aventureiro

### criei o menu com swith e condição if else if, a 7 atributos, 1 ao 7, população, area, pontos turisticos, pib, densidade demografica, pib per capita, super poder. basta digitar o atributo que deseja comparar após inserir os dados da sua carta. após isso o programa mostrara o pais de cada carta, o valor daquele atributo de cada carta, quem venceu ou empatou.

passo 1 cadastre suas duas cartas
passo 2 escolha o atributo que deseja comparar de 1 a 7
passo 3 veja o resultado.

aluno - Daniel Pereira Raimundo

## 🏅 Nível mestre
implementei o mecanismo de comparar dois atributos de uma vez, usando o menu switch com operador ternario e if else, exibir o pais de cada carta, o valor de cada atributo escolhido de cada carta, e o valor da soma desses atributos e a carta vencedora.

passo a passo de compilar o código; so altere os nomes do programa de acordo de como voce salvou

use o compilador de c, O GCC,

verifique se está no diretório correto 

verifica se tem as bilbiotecas instaladas

use esse comando para compilar o programa 

gcc nome_do_arquivo.c -o nome_do_programa

use esse comando para executar o programa

No Linux/macOS:

./nome_do_programa

No Windows (CMD ou PowerShell):

nome_do_programa.exe

como jogar; 

cadastre as cartas
escolha os atributos a serem comparados
veja o resultado se divirta

aluno -- Daniel Pereira Raimundo