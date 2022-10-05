use cadastro;
show tables;

insert into cursos values
('1','HTML4','Curso de HTML5','40','37','2014'),
('2','Algoritmos','Lógica de programação','20','15','2014'),
('3','Photoshop','Dicas de Photoshop CC','10','8','2014'),
('4','PGP','Curso de PHP para iniciantes','40','20','2010'),
('5','Jarva','Introdução à linguagem Java','10','29','2000'),
('6','MySQL','Bancos de Dados MySQL','40','37','2014'),
('7','Word','Curso Completo de Word','40','37','2014'),
('8','Sapateado','Danças Rítmicas','40','37','2014'),
('9','Cozinha Árabe','Aprenda a fazer Kibe','40','37','2014'),
('10','Youtuber','Gerar polêmica e ganhar inscritos','40','37','2014');
select * from cursos;

update cursos
set nome='HTML5'
where idcurso='1'; /*atualiza o conteudo do campo nome do registro 1*/

update cursos
set nome='PHP', ano='2015'
where idcurso='4'; /*atualiza o conteudo do campo nome e ano do registro 4*/

update cursos
set nome='Java', carga='40', ano='2015'
where idcurso='5'; /*atualiza o conteudo do campo nome, carga e ano do registro 5*/

update cursos
set ano='2022'; /*atualiza o ano de todos os registros para 2022*/

update cursos
set ano='2015'
limit 3; /*atualiza o conteudo do campo ano para 2015 em 3 campos no max(limit)*/

update cursos
set ano='2022'
where ano='2015'; /*atualiza o conteudo do campo ano para 2022 onde os campos são 2015*/

delete from cursos
where idcurso='8'; /*deleta o registro 8*/

truncate table cursos; /*apaga todos os registros da tabela cursos*/
select * from cursos;