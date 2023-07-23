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
> Tudo que é executado em java precisa estar dentro de uma classe. A classe inicial do programa é a classe "Main". A classe main é o ponto de partida de execução de qualquer aplicação Java.
>
> A Classe Main é uma classe Void -ou seja, não tem retorno- e recebe como argumento um array de Strings.
> 
> Deve ser acessível(public) pela JVM.
>
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

## Tipos de dados
- Inteiros
  - long
  - int
  - short
  - byte
- Ponto flutuante
  - double
  - float
- Caracteres
  - char
- Booleano
  - boolean
  
## Variável
` type identifier [ = value][, identifier [= value] ...]; ` 
  - Ex:
    >
        int x = 5;
        float y = 5.2;
        char letra = 'a';
        boolean teste = true;
        

## Estruturas de repetição

> Mesma sintaxe de C

- IF
  ```
  if(condição){
    ação;
  }
  ``` 
- IF/ELSE
  ```
  if(condição){
    açãotrue;
  }else{
    açãofalse;
  }
  ``` 
- IF/ELSE IF
  ```
  if(condição){
    ação1;
  }else if{
    ação2;
  }else{
    ação3;
  }
  ``` 
- SWITCH CASE
  ```
  switch(seletor){
    case 1: ação;
    break;
    case n: ação;
    break;
    default: ação;
  }
  ``` 
## Arrays
` array-var = new type[size]; `
- Ex:
  ```
  int diasDaSemana[] = new int[7];
  diasDaSemana[0] = "Segunda";
  diasDaSemana[1] = "Terça";
  diasDaSemana[2] = "Quarta";
  diasDaSemana[3] = "Quinta";
  diasDaSemana[4] = "Sexta";
  diasDaSemana[5] = "Sábado";
  diasDaSemana[6] = "Domingo";
  ``` 

