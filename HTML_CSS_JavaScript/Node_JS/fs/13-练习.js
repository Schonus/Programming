const { INSPECT_MAX_BYTES } = require("buffer");
const fs = require("fs");
const files = fs.readdirSync('./code');
console.log(files);
files.forEach(item => {
    //判断
    let data = item.split("-");
    var [num, name] = data;
    if(Number(num) < 10)
    {
        num = 0 + num;
    }
    newName = num + "-" + data[1];
    console.log(item);
    console.log(newName);
    fs.renameSync(`./code/${item}`, `./code/${newName}`);
})
console.log("操作成功!");