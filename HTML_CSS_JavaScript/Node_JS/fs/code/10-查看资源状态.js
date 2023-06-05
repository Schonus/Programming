const fs = require("fs");
fs.stat("./观书有感.txt",(err,data) => {
    if(err){console.log(err);return;}
    console.log(data);
})