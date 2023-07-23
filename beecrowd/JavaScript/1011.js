var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var raioEsfera = parseFloat(lines.shift());
const PI = 3.14159;

var volumeEsfera = (4 / 3.0) * PI * Math.pow(raioEsfera, 3);

console.log('VOLUME = ' + volumeEsfera.toFixed(3));