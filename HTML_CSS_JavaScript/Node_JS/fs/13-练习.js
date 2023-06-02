const { INSPECT_MAX_BYTES } = require("buffer");
const fs = require("fs");
const files = fs.readdirSync('./code');
console.log(files);
var index = 0;

function rename(item,i) {
    //判断
    let data = item.split("-");
    var [num, name] = data;
    switch (i) {
        case 0:
            if(Number(num) < 10)
            {
                num = 0 + num;
            }
            break;
        case 1:
                
                num = String(++index);
                if(Number(num) < 10)
                {
                num = 0 + num;
            }
            break;
        default:
            break;
    }
    newName = num + "-" + data[1];
    fs.renameSync(`./code/${item}`, `./code/${newName}`);
    return newName;
}
        
files.forEach(item => {
    item = rename(item,0);
})
const files2 = fs.readdirSync('./code');
files2.forEach(item => {
    item = rename(item,1);
    console.log(item);
})
console.log("操作成功!");