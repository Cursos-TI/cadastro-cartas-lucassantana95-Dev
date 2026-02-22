🃏 Super Trunfo - Países (Desafio Mestre)
Este projeto é um simulador de jogo de Super Trunfo desenvolvido em linguagem C como parte do desafio de lógica de programação. O objetivo é cadastrar cartas representando cidades/países e realizar batalhas interativas comparando múltiplos atributos.

🚀 Funcionalidades
O sistema evoluiu através de vários níveis de complexidade, atingindo as seguintes capacidades no estágio final:

Cadastro Completo: Inserção detalhada de dados como Estado, Código, Nome, População, Área, PIB e Pontos Turísticos.

Cálculos Automáticos: O programa processa instantaneamente a Densidade Populacional e o PIB per Capita.

Menu de Atributos Duplos: Interface interativa que permite ao jogador escolher dois critérios diferentes para a mesma batalha.

Lógica de Comparação Complexa:

Regra Geral: O maior valor vence na maioria dos atributos.

Regra Inversa: No atributo Densidade Demográfica, a carta com o menor valor é a vencedora.

Operador Ternário: Utilizado para determinar e exibir o vencedor de cada round de forma elegante.

Soma Final: O vencedor da partida é decidido pela maior soma dos dois atributos selecionados.

🛠️ Tecnologias e Conceitos Aplicados
Linguagem C: Base do desenvolvimento.

Estruturas de Decisão: Uso intensivo de if-else aninhados e switch-case para menus dinâmicos.

Operadores Lógicos: Validação para impedir a escolha de atributos repetidos.

Manipulação de Dados: Uso de tipos como unsigned long int e float com casting para precisão nos cálculos.

📖 Como Rodar o Projeto
Certifique-se de ter um compilador de C instalado (como o GCC).

Compile o arquivo:

Bash
gcc super_trunfo.c -o super_trunfo
Execute o programa:

Bash
./super_trunfo
Siga as instruções no terminal para cadastrar as cartas e escolher os atributos da batalha.
