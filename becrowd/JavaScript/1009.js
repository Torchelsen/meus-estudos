var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var nomeVendedor = parseFloat(lines.shift());
var salarioFixo = parseFloat(lines.shift());
var vendasMes = parseFloat(lines.shift());

var salarioFinal = salarioFixo + (vendasMes * 0.15);

console.log("TOTAL = R$ " + salarioFinal.toFixed(2));