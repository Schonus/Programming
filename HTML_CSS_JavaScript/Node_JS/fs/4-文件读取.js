const fs = require("fs");
fs.readFile("./座右铭.txt",(err,data)=>{
    if (err){throw err;}
    console.log(data.toString());
})
fs.createReadStream("./座右铭2.txt");

