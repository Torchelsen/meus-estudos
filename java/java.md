# JAVA
> Java é uma linguagem de alto nível, voltada para programação Orientada a Objetos.

### JDK - Java Development Kit
Kit para desenvolvimento de software que possui ferramentas e componentes como o javac e o javadoc, por exemplo.

### javac
Compilador do código fonte (.java) em bytecode (.class).

### JVM - Java Virtual Machine
Executa o bytecode (.class).

### JRE - Java Run Enviroment
Fornece as bibliotecas padrões do Java para o JDK compilar e para a JVM executar.

## Fluxo de Compilação
1. Código-fonte (Programa que escrevemos usando a sintaxe da linguagem Java);
2. Compilador (JDK) executa uma análise sintática, léxica e semântica do código e transforma em bytecode;
3. Bytecode (.class) é o mesmo para todas as arquiteturas;
4. Máquina virtual (JVM) roda o bytecode.

>Java é uma linguagem Compilada-Interpretada, primeiro o compilador analisa o código e compila o mesmo em bytecode. Depois a máquina virtual interpreta esse bytecode.


## Um código Java
Tudo que é executado em java precisa estar dentro de uma classe. A classe inicial do programa é a classe "Main". A classe main é o ponto de partida de execução de qualquer aplicação Java.

A Classe Main é uma classe Void -ou seja, não tem retorno- e recebe como argumento um array de Strings.

Deve ser acessível (public) pela JVM.

### - Estrutura básica:
    public class Main {
      public static void main(String[] args){
        ...
      }
    }
---
### - Tipos de dados:
1. Tipos de Dados Primitivos:
   
- `boolean`: Representa um valor verdadeiro (true) ou falso (false).

- `byte`: Inteiro de 8 bits com sinal, varia de -128 a 127.
- `short`: Inteiro de 16 bits com sinal, varia de -32,768 a 32,767.
- `int`: Inteiro de 32 bits com sinal, varia de -2^31 a 2^31 - 1.
- `long`: Inteiro de 64 bits com sinal, varia de -2^63 a 2^63 - 1.
- `float`: Ponto flutuante de 32 bits que pode representar números decimais.
- `double`: Ponto flutuante de 64 bits com maior precisão para números decimais.
- `char`: Representa um único caractere Unicode de 16 bits, como 'A', 'b' ou '@'.
  
2. Tipos de Dados de Referência (Objetos):

- `String`: Representa uma sequência de caracteres.
- `Arrays`: Estruturas de dados que armazenam coleções de elementos do mesmo tipo.
- `Classes personalizadas`: Definidas para representar objetos específicos.
---
### - Operadores aritméticos:
- `+` : Adição - Usado para somar dois valores.
- `-` : Subtração - Usado para subtrair o valor do operando direito do operando esquerdo.
- `*` : Multiplicação - Usado para multiplicar dois valores.
- `/` : Divisão - Usado para dividir o operando esquerdo pelo operando direito.
- `%` : Módulo (ou resto da divisão) - Usado para obter o resto da divisão entre o operando esquerdo e o operando direito.
---
### - Operadores relacionais:
*{sempre vão retornar um valor lógico}*
- `==` : Igual a - Verifica se os dois operandos são iguais.
- `!=` : Diferente de - Verifica se os dois operandos são diferentes.
- `>` : Maior que - Verifica se o operando esquerdo é estritamente maior que o operando direito.
- `<` : Menor que - Verifica se o operando esquerdo é estritamente menor que o operando direito.
- `>=` : Maior ou igual a - Verifica se o operando esquerdo é maior ou igual ao operando direito.
- `<=` : Menor ou igual a - Verifica se o operando esquerdo é menor ou igual ao operando direito.
---
### - Operadores lógicos:
- `&&` (AND): Retorna true se ambas as expressões booleanas forem verdadeiras. Caso contrário, retorna false.

- `||` (OR): Retorna true se pelo menos uma das expressões booleanas for verdadeira. Caso contrário, retorna false.

- `!` (NOT): Inverte o valor da expressão booleana, ou seja, se a expressão for true, o resultado será false, e se a expressão for false, o resultado será true.

### - Operadores bitwise:
- `&` (AND bitwise): Este operador realiza um AND (E) bit a bit entre os valores numéricos, ou seja, compara os bits de cada valor e produz um novo valor com 1 apenas onde ambos têm bits 1.

- `|` (OR bitwise): Este operador realiza um OR (OU) bit a bit entre os valores numéricos, ou seja, compara os bits de cada valor e produz um novo valor com 1 onde pelo menos um dos valores tem bit 1.

- `^` (XOR bitwise): Este operador realiza um XOR (OU exclusivo) bit a bit entre os valores numéricos. Ele compara os bits de cada valor e produz um novo valor com 1 apenas nos bits onde um, e somente um, dos valores tem bit 1.
---
### * Precedência de operadores:
1. **Operadores de Pós-incremento/Decremento:** `expr++, expr--`
2. **Operadores de Pré-incremento/Decremento**: `++expr, --expr`
3. **Operadores Unários**: `+expr, -expr, !expr, ~expr`
4. **Operador de Cast**: `(type) expr`
5. **Operadores Aritméticos**: `*, /, %`
6. **Operadores de Soma/Subtração**: `+, -`
7. **Operadores Shift**: `<<, >>, >>>`
8. **Operadores Relacionais**: `<, >, <=, >=, instanceof`
9. **Operadores de Igualdade**: `==, !=`
10. **Operadores Lógicos Bit a Bit (AND, OR, XOR)**: `&, ^, |`
11. **Operadores Lógicos (AND, OR)**: `&&, ||`
12. **Operador Condicional (Ternário)**: `? :`
13. **Operador de Atribuição**: `=, +=, -= e outros operadores combinados com =`
---
### - Entrada de dados:
>Em Java, para receber dados digitados pelo usuário durante a execução de um programa, é necessário utilizar a classe `Scanner` da biblioteca padrão `java.util`. A classe Scanner fornece métodos para ler diferentes tipos de dados do teclado ou de outras fontes de entrada. Para usar a classe `Scanner`, primeiro você precisa importá-la no início do seu código:

    import java.util.Scanner;

Em seguida, você pode criar um objeto `Scanner` para ler os dados de entrada do usuário.
1. `next()`: Lê e retorna a próxima palavra (separada por espaço) como uma String.
2. `nextLine()`: Lê e retorna a próxima linha inteira como uma String.
3. `nextInt()`: Lê e retorna o próximo token como um número inteiro (int).
4. `nextLong()`: Lê e retorna o próximo token como um número longo (long).
5. `nextDouble()`: Lê e retorna o próximo token como um número de ponto flutuante (double).
6. `nextFloat()`: Lê e retorna o próximo token como um número de ponto flutuante de precisão simples (float).
7. `nextBoolean()`: Lê e retorna o próximo token como um valor booleano (true ou false).
8. `nextByte()`: Lê e retorna o próximo token como um número de 8 bits (byte).
9. `nextShort()`: Lê e retorna o próximo token como um número de 16 bits (short).
10. `nextBigDecimal()`: Lê e retorna o próximo token como um número decimal grande (BigDecimal).
11. `nextBigInteger()`: Lê e retorna o próximo token como um número inteiro grande (BigInteger).

Exemplo:
    
    import java.util.Scanner;

    public class EntradaDeDadosExemplo {
        public static void main(String[] args) {

            // Criar um objeto Scanner para ler a entrada do teclado
            Scanner scanner = new Scanner(System.in);

            String nome = scanner.nextLine(); // Lê uma linha inteira como uma 
            int idade = scanner.nextInt(); // Lê um número inteiro
            double salario = scanner.nextDouble(); // Lê um número de ponto flutuante
        }
    }

---
### - Saída de dados:
>Em Java, a saída de dados é feita usando o objeto `System.out`, que representa a saída padrão do programa, geralmente associada ao console ou terminal.
A classe `System.out` em Java é uma instância da classe `PrintStream`, que fornece métodos para exibir dados na saída padrão do programa, geralmente associada ao console ou terminal. Aqui estão os principais métodos da classe `PrintStream` usados para exibir dados:
1. `print()`: Esse método é usado para exibir dados na mesma linha. Ele aceita vários tipos de parâmetros, como String, int, double, etc., e não adiciona uma nova linha após a saída.
2. `println()`: Este método é usado para exibir dados em uma nova linha. Ele também aceita vários tipos de parâmetros e adiciona automaticamente uma nova linha após a saída.
3. `printf()`: O método printf() permite formatar a saída usando especificadores de formato, como `%s` para strings, `%d` para inteiros, `%f` para números de ponto flutuante, etc. Ele permite controlar a precisão, alinhamento e formatação dos dados exibidos.
4. `write()`: Este método é usado para gravar um único caractere ou um array de bytes na saída. Ele é menos usado para exibir dados formatados, mas pode ser útil para gravar dados binários.
5. `flush()`: O método flush() é usado para limpar o buffer e garantir que todos os dados pendentes sejam exibidos imediatamente. Em geral, o buffer é esvaziado automaticamente, mas você pode usar flush() para garantir que a saída seja exibida antes de continuar a execução.
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







## Classes
    Uma classe é um "molde" para um objeto, uma forma para o objeto, objeto é a representação de algo do mundo real.
    - Atributos: São as características relevantes para a representação dos objetos;
    - Métodos: São as funcionalidades relevantes para os objetos.

    Vamos dizer que queremos representar carros do mundo real em um programa:
    - Classe "Carro";
      - Atributos:
        - Modelo;
        - Cor;
        - Marca;
        - Consumo;
        - Velocidade.
      - Métodos:
        - Acelerar;
        - Frear.
## Objeto

## Orientação à Objetos
### Encapsulamento
> Escapsulamento se trata de evitarque certos atributos ou métodos do seu código sejam acessíveis por outras partes do código, protegendo a integridade do código e evitando erros.
### Abstração
> Abstração seria "esconder" parte do código, criar um método que faça o que você precisa, assim só precisa chamar o método sem ter que ver/interagir com o que tem por trás dele.
### Herança
> Herança seria criar sub-classes, evitando a redundância de código. Por exemplo uma classe veículos que tenha todos os atributos e métodos que são comuns a todos veiculos, e então criar uma sub-classe carros, com atributos e métodos mais específicos.
### Polimorfismo
> Polimorfismo significa "muitas formas", se trata de criar um método que seja usado por diferentes classes com inputs e outputs diferentes para cada classe, mas a lógica do método sendo a mesma.

