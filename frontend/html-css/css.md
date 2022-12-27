# CSS
> - CSS (Folha de Estilo em Cascata) é usado para estilizar uma página web. O CSS permite aplicar estilos seletivamento a elementos em documentos HTML.

## Sintaxe

    p {
        color: yellow;
    }

- `p` é o seletor;
- `color` a propriedade;
- `yellow` o valor da propriedade;
- `propriedade` + `valor` formam uma declaração.

  
### Seletor (Selector)
>O nome do elemento HTML no começo do conjunto de regras. Ele seleciona o(s) elemento(s) a serem estilizados (nesse caso, elementos `<p>`). Para dar estilo a um outro elemento, é só mudar o seletor.

### Propriedades (Property)
>Forma pela qual você estiliza um elemento HTML. (Nesse caso, color é uma propriedade dos elementos `<p>`.) Em CSS, você escolhe quais propriedades você deseja afetar com sua regra.

### Valor da propriedade (Property value)
>À direita da propriedade, depois dos dois pontos, nós temos o valor de propriedade, que escolhe uma dentre muitas aparências possíveis para uma determinada propriedade (há muitos valores `color`(cor) além do `yellow`(amarelo)).

### Declaração (Declaration)
>Uma regra simples como `color: yellow;` especificando quais das propriedades do elemento você quer estilizar.

## Note outras partes importantes da sintaxe:

- Cada linha de comando deve ser envolvida em chaves ({}).
- Dentro de cada declaração, você deve usar dois pontos (:) para separar a propriedade de seus valores.
- Dentro de cada conjunto de regras, você deve usar um ponto e vírgula (;) para separar cada declaração da próxima.

## Selecionar múltiplos elementos
    p, li, h1 {
        color: yellow;
    }

---
## Tipos de Seletores
| Nome do seletor | O que ele seleciona | Exemplo |
| -------- | -------- | -------- |
| Seletor de Elemento () | Todos os elementos HTML de determinado tipo. | `p` seleciona `<p>` |
| Seletor de ID (#) | Apenas o elemento que tenha o ID especificado. | `#my-id` Seleciona `<p id="my-id">` ou `<a id="my-id">` |
| Seletor de Classe (.) | Todos os elementos com a classe especificada. | `.my-class` Seleciona `<p class="my-class">` e `<a class="my-class">`
| Seletor de atributo ([]) | Os elementos com o atributo especificado. | `img[src]` Seleciona `<img src="myimage.png">` mas não `<img>`
| Seletor de pseudo-classe (:) | O elemento específicado, mas somente quando estiver no estado especificado. Ex.: com o mouse sobre ele. | `a:hover` Seleciona `<a>`, mas somente quando o mouse está em cima do link.

