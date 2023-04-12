create database cadastro
default character set utf8
default collate utf8_general_ci;
/*charset é um conjunto de caracteres e suas respectivas representações binárias.alter
  collate é um conjunto de regras para comparação dos caracteres representados*/

use cadastro;
/*comando para usar o banco de dados 'cadastro'*/

create table pessoas (
	id int not null auto_increment, /*cria uma coluna 'id' para numerar os registros*/
	nome varchar(30) not null, /*cria uma coluna 'nome' que pode ter até 30 caracteres e é obrigatória*/
    nascimento date, /*cria uma coluna 'nascimento' no formato de data*/
    sexo enum('M','F'), /*cria uma coluna 'sexo' onde apenas podem ser passados os valores 'M' ou 'F'*/
    peso decimal(5,2), /*cria uma coluna 'peso' com 5 campos, sendo 2 após a vírgula*/
    altura decimal(3,2), /*cria uma coluna 'altura' com 3 campos, sendo 2 após a vírgula*/
    nacionalidade varchar(20) default 'Brasil', /*cria uma coluna 'nacionalidade' que pode ter até 20 caracteres e o valor padrão é 'Brasil'*/
    primary key (id) /*cria uma chave primaria usando a coluna 'id'*/
) default charset = utf8; /*define o conjunto de caracteres da tabela como utf8*/

desc pessoas;
/*descreve a estrutura da tabela pessoas*/