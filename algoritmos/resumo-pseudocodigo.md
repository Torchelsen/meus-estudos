## Pseudocódigo
> - É uma pseudolinguagem para o desenvolvimento de algoritmos em português estruturado.
### - Estrutura básica:
    algoritmo <nome_do_algoritmo>
        var
        <declaracao_de_variaveis>
    inicio
        <instrucoes_do_algoritmo>
    fim
---
### - Tipos de dados:
- **Inteiro:** 0, 1, 50, 1000...
- **Real:** 1.2, 5.6, 10.1...
- **Caracter:** caracteres alfanuméricos
- **Lógico:** 'VERDADEIRO' ou 'FALSO'
---
### - Operadores aritméticos:
- **Adição:** '+'
- **Subtração**: '-'
- **Multiplicação**: '*'
- **Divisão**: '/'
- **Divisão inteira**: '\'
- **Módulo**: '%'
- **Potenciação**: '^' ou '**'
---
### - Operadores relacionais:
*{sempre vão retornar um valor lógico}*
- **Igual a**: '=' ou '=='
- **Maior que**: '>'
- **Menor que**: '<'
- **Maior ou igual a**: '>='
- **Menor ou igual a**: '<='
- **Diferente de**: '<>' ou '!='
---
### - Operadores lógicos:
- **NAO**: Verdadeiro se o operando for falso, falso se o operando for verdadeiro
- **E**: Verdadeiro somente se ambos os operandos são verdadeiros
- **OU**: Verdadeiro se pelo menos um dos operandos for verdadeiro
---
### * Precedência de operadores:
1. Parênteses
2. Potenciação
3. Multiplicação, Divisão, Módulo e Divisão inteira
4. Adição e Subtração
5. Relacional
6. Negação
7. Conjunção
8. Disjunção
---
### - Entrada e Saída:
- **Entrada:** Leia( )
- **Saída:** Escreva( ) ou Escreval( )   *{O segundo quebra a linha após a saída}*
---
### - Declaração de variável/constante:
    var
        nome: caractere;
        idade: inteiro;
        altura: real;

    const
        PI=3.141592;
        DIAS=365;
        CPF=1234567891011;
---
### - Atribuição:
- '<-'
- variavel <- valor
- **Exemplo:** nome <- Gustavo
---
### - Estruturas condicionais:
- **SE-ENTÃO:**
    ~~~~
    se (<condição>) entao
        <bloco de comandos>
    fimse
    ~~~~
- **SE-ENTÃO-SENÃO:**
    ~~~~
    se (<condição>) entao
        <bloco de comandos verdadeiro>
    senao
        <bloco de comandos falso>
    fimse
    ~~~~
- **Condições aninhadas:**
    ~~~~
    se (<condição>) entao
        <bloco de comandos verdadeiro>
    senao
        se (<condição>) entao
            <bloco de comandos verdadeiro>
        senao
            <bloco de comandos falso>
        fimse
    fimse
    ~~~~
    OU
    ~~~~
    se (<condição>) entao
        se (<condição>) entao
            <bloco de comandos verdadeiro>
        senao
            <bloco de comandos falso>
        fimse
    senao
        <bloco de comandos falso>
    fimse
    ~~~~
- **ESCOLHA-CASO:**
    ~~~~
    escolha (<variavel>)
        caso <valor1>
            <bloco de comandos 1>;
        caso <valor2>
            <bloco de comandos 2>;
        ...
        caso <valorN>
            <bloco de comandos N>;
        outrocaso
            <bloco de comandos para nenhum caso verdadeiro>;
    fimescolha
    ~~~~
---
### - Estruturas de repetição:
- **ENQUANTO-FAÇA:**
    ~~~~
    enquanto (<condição>) faca
        <bloco de comandos>
    fimenquanto
    ~~~~
- **REPITA-ATÉ:**
    ~~~~
    repita
        <bloco de comandos>
    ate (<condição>)
    ~~~~
- **PARA-FAÇA:**
    ~~~~
    para <variavel> de <valor inicial> ate <valor final> passo <incremento> faca
        <bloco de comandos>
    fimpara
    ~~~~
---
### - Funções Aritméticas:
- Valor absoluto: Abs()
- Exponenciação: Exp()
- Valor inteiro: Int()
- Raiz quadrada: RaizQ()
- PI: Pi
- Seno(rad): Sen()
- Cosseno(rad): Cos()
- Tangente(rad): Tan()
- Graus para Rad: GraupRad()
---
### - Procedimentos
- **Procedimento básico:**
    ~~~~
    algoritmo
    procedimento Soma(A, B: inteiro)
    var
        S: inteiro
    inicio
        S <- A + B
        escreval("A soma vale", S)
    fimprocedimento

    inicio
        N1 <- 5
        N2 <- 4
        Soma(N1,N2)
    fimalgoritimo
    ~~~~

- **Passagem por Valor:**
  
  *{Passa apenas o valor da variavel, sem mudar a mesma}*
    ~~~~
    algoritmo
    procedimento Soma(A, B: inteiro)
    inicio
        A <- A + 1
        B <- B + 2
        escreval("A soma vale", A+B)
    fimprocedimento

    inicio
        X <- 5
        Y <- 4
        Soma(X,Y)
    fimalgoritimo
    ~~~~
- **Passagem por Referência:**
  
  *{Passa a referência da variavel, podendo mudar o valor da mesma}*
    ~~~~
    algoritmo
    procedimento Soma(var A, B: inteiro)
    inicio
        A <- A + 1
        B <- B + 2
        escreval("A soma vale", A+B)
    fimprocedimento

    inicio
        X <- 5
        Y <- 4
        Soma(X,Y)
    fimalgoritimo
    ~~~~
---
### - Funções
  *{Função retorna um valor ao chamado}*

    algoritmo
    funcao Soma(A, B: inteiro) : inteiro
    var
        S: inteiro
    inicio
        S <- A + B
        retorne S
    fimfuncao

    inicio
        N1 <- 5
        N2 <- 4
        RES <- Soma(N1,N2)
        escreval("A soma é ", RES)
    fimalgoritimo
---
### - Vetores

    var: vetor[1..n] de Inteiro
---
### - Matrizes
    var: vetor[1..n, 1..n] de Inteiro
---