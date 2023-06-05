const fs = require("fs");
fs.writeFileSync('./index.html','love');
fs.writeFileSync('/index.html','love');
fs.writeFileSync('../index.html','love');
