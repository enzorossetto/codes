var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let separate = string => string.split(' ');
let toNumber = string => string.map(str => Number(str));
let order = pair => pair[0] < pair[1] ? pair : [pair[1], pair[0]];
let removeBlank = iten => {
    if (iten != '') return iten
}

lines.shift()

let orderedEntries = lines.filter(removeBlank).map(separate).map(toNumber).map(order);
orderedEntries.forEach(pair => {
    let sum = 0;
    for (let i = pair[0] + 1; i < pair[1]; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    console.log(`${sum}`);
})