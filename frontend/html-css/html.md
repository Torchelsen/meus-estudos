# HTML
> - **HTML** (Linguagem de Marcação de Hipertexto) é usado para definir o significado e a estrutura do conteúdo na web.

> - O HTML consiste em uma série de elementos, usados para delimitar ou agrupar diferentes partes do conteúdo.

## Sintaxe

    <p>O Ace é um gato que trabalha como fiscal de banho.</p>

### As principais partes de um elemento são:

1. A **tag de abertura**: Consiste no nome do elemento (no caso, p), envolvido em **parênteses angulares** de abertura e fechamento. Isso demonstra onde o elemento começa, ou onde seu efeito se inicia — nesse caso, onde é o começo do parágrafo.
1. A **tag de fechamento**: Isso é a mesma coisa que a tag de abertura, exceto que inclui uma barra antes do nome do elemento. Isso demonstra onde o elemento acaba — nesse caso, onde é o fim do parágrafo. Esquecer de incluir uma tag de fechamento é um dos erros mais comuns de iniciantes e pode levar a resultados estranhos.
2. O **conteúdo**: Esse é o conteúdo do elemento, que nesse caso é apenas texto.
3. O **elemento**: A tag de abertura, a de fechamento, e o conteúdo formam o elemento.

### Elementos também podem ter **atributos**, que parecem assim:

    <p class="gato-frajola">O Ace é um gato que trabalha como fiscal de banho.</p>

>Atributos contém informação extra sobre o elemento que você não quer que apareça no conteúdo real. Aqui, `class` é o nome do atributo e `gato-frajola` é o valor do atributo. O atributo `class` permite que você forneça ao elemento um identificador que possa ser usado posteriormente para aplicar ao elemento informações de estilo e outras coisas.

### Um atributo sempre deve ter:

1. Um espaço entre ele e o nome do elemento (ou o atributo anterior, se o elemento já tiver um).
2. O nome do atributo, seguido por um sinal de igual.
3. Aspas de abertura e fechamento, envolvendo todo o valor do atributo.


## Aninhando elementos

Você pode colocar elementos dentro de outros elementos também — isso é chamado de **aninhamento**.

    <p>Meu gatinho é <strong>muito</strong> mal humorado.</p>

Você precisa, no entanto, certificar-se de que seus elementos estejam adequadamente aninhados. No exemplo acima, abrimos primeiro o elemento `<p>`, depois o elemento `<strong>`; portanto, temos que fechar primeiro o elemento `<strong>`, depois o elemento `<p>`.


## Elementos vazios

Alguns elementos não possuem conteúdo e são chamados de **elementos vazios**. Considere o elemento `<img>` que temos na nossa página HTML:

    <img src="imagens/firefox-icon.png" alt="Minha imagem de teste">

Ele contém dois atributos, mas não há tag `</img>` de fechamento, e não há conteúdo interno. Isso acontece porque um elemento de imagem não envolve conteúdo para ter efeito em si mesmo. Sua proposta é incorporar uma imagem na página HTML no lugar que o código aparece.

## Estrutura básica:

    <!DOCTYPE html>               <!-- Define que a o html em questão é HTML versão 5 -->
    <html lang="pt-br">           <!-- Define o idioma da página como português do brasil -->
        <head>                    <!-- "Cabeça" do código, onde vão as informações sobre a página -->
        <meta charset="UTF-8">    <!-- Define o conjunto de caracteres que será usado na página -->
        <title>Document</title>   <!-- Título da página, que vai na aba do navegador -->
        </head>                   <!-- Tag de fechamento da tag head -->
        <body>                    <!-- Define o corpo do html, onde vai o conteúdo -->
        </body>                   <!-- Tag de fechamento do body -->
    </html>                       <!-- Tag de fechamento do html -->

### Comentários no HTML
    <!-- Comentário -->
---
## Cabeçalhos
    <h1>Título de maior importancia</h1>
    <h2>Segundo título mais importante</h2>
    <h3>Terceiro título mais importante</h3>
    <h4>Quarto título mais importante</h4>
    <h5>Quinto título mais importante</h5>
    <h6>Sexto título mais importante</h6>

## Parágrafo
    <p>Este é um parágrafo</p>

## Listas
### - Listas ordenadas
    <ol>
        <li>maçã</li>
        <li>banana</li>
        <li>laranja</li>
    </ol>

### - Listas não ordenadas
    <ul>
        <li>maçã</li>
        <li>banana</li>
        <li>laranja</li>
    </ul>

## Links
    <a href="https://www.google.com.br">Google</a>

## Adicionando CSS ao HTML
    <link rel="stylesheet" href="style.css">

## Adicionando JavaScript ao HTML
    <script src="script.js"></script>

## Tabelas