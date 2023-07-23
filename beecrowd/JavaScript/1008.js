var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var numeroFuncionario = parseInt(lines.shift());
var horasTrabalhadas = parseInt(lines.shift());
var valorPorHora = parseFloat(lines.shift());

var salario = horasTrabalhadas * valorPorHora;

console.log("NUMBER = " + numeroFuncionario);
console.log("SALARY = U$ " + salario.toFixed(2));