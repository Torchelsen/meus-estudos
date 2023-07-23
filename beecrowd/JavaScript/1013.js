var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var [A, B, C] = lines.shift().split(' ');

var maiorValorAB = (parseFloat(A) + parseFloat(B) + Math.abs(parseFloat(A) - parseFloat(B))) / 2.0;

var maiorValorABeC = (maiorValorAB + parseFloat(C) + Math.abs(maiorValorAB - parseFloat(C))) / 2.0;

console.log(maiorValorABeC + ' eh o maior');