const fs = require("fs");
const ws = fs.createWriteStream(__dirname + "/观书有感.txt");
const rs = fs.createReadStream(__dirname + "/观书有感2.txt");
ws
