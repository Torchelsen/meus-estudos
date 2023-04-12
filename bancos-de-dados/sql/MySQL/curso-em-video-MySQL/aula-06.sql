use cadastro; /*usa o banco de dados cadastro*/
show tables; /*consulta as tabelas do banco de dados em uso*/
describe pessoas; /*descreve a estrutura da tabela pessoas*/
select * from pessoas; /*consulta todos os registros da tabela pessoas*/

alter table pessoas
add column profissao varchar(10); /*adiciona uma nova coluna ou "campo" */

alter table pessoas
drop column profissao; /*remove uma coluna*/

alter table pessoas
add column profissao varchar(10) after nome; /*adiciona uma nova coluna depois da coluna nome*/

alter table pessoas
add codigo int first; /*adiciona uma nova coluna antes da primeira coluna*/

alter table pessoas
modify column profissao varchar(20); /*muda o tipo da coluna*/

alter table pessoas
change profissao prof varchar(20); /*modifica o nome da coluna, precisa informar o nome antigo e depois o novo*/

alter table pessoas
rename to gafanhotos; /*muda o nome da tabela*/

describe gafanhotos; /*descreve a estrutura da tabela gafanhotos*/

create table if not exists cursos (
	nome varchar(30) not null unique,  /*unique evita que voce insira dois registros com o mesmo valor*/
	descricao text,
    carga int unsigned, /*unsigned limita a int a apenas valores positivos*/
    totaulas int unsigned,
    ano year default '2022'
)default charset = utf8;

desc cursos;

alter table cursos
add column idcurso int first;

alter table cursos
add primary key(idcurso); /*adiciona(define idcurso como) uma chave primaria*/


create table if not exists teste(
	id int,
    nome varchar(10),
    idade int
);
insert into teste value
('1','Pedro','11'),
('2','Marcela','11'),
('3','Maria','11');
select * from teste;

drop table teste; /*deleta a tabela teste*/

