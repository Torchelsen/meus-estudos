var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var tempoViagem = lines.shift();
var velocidadeMedia = lines.shift();

const consumo = 12; // 12 km/l

var distancia = tempoViagem * velocidadeMedia;
var gastoCombustivel = distancia / consumo;

console.log(gastoCombustivel.toFixed(3));