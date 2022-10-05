use cadastro;
/* Você pode inserir dados nas tabelas de algumas formas*/
/*listando as colunas e os valores*/
insert into pessoas ( nome, nascimento, sexo, peso, altura, nacionalidade) values
( 'Godofredo', '1984-01-02', 'M', '78.5', '1.83', 'Brasil');

select * from pessoas; /*mostra todos os registros da tabela pessoas*/

insert into pessoas ( id, nome, nascimento, sexo, peso, altura, nacionalidade) values
( default, 'Claudio', '1984-01-02', 'M', '72.5', '1.73', 'Brasil');

select * from pessoas;

/*listando apenas os valores*/
insert into pessoas values
( default, 'Marcio', '1984-01-02', 'M', '82.5', '1.93', 'Brasil');

select * from pessoas;

/*ou listando valores de varios registros*/
insert into pessoas values
( default, 'Pedro', '1994-01-02', 'M', '82.5', '1.93', 'Brasil'),
( default, 'Marcelo', '1986-01-02', 'M', '82.5', '1.93', 'Brasil'),
( default, 'Claudia', '1989-01-02', 'F', '62.5', '1.63', 'Brasil');

select * from pessoas;