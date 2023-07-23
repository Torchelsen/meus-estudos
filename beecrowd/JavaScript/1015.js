var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var [x1, y1] = lines.shift().split(' ');
var [x2, y2] = lines.shift().split(' ');

var A = x2 - x1;
var B = y2 - y1;

var distancia = Math.sqrt(Math.pow(A, 2) + Math.pow(B, 2));

console.log(distancia.toFixed(4));