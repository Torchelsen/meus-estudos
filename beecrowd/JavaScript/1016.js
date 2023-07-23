var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var A = lines.shift();
const velCarroX = 60;
const velCarroY = 90;

var distanciaPorMinuto = 60 / (velCarroY - velCarroX);
var tempoTotal = A * distanciaPorMinuto;

console.log(tempoTotal + ' minutos');