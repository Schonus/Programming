const fs = require("fs");
const files = fs.readdirSync('./code');
console.log(files);
files.forEach(items => {
    //判断
    let data = items.split("-");
    var [num, name] = data;
    if(Number(num) < 10)
    {
        num = 0 + num;
    }
    data = num + "-" + data[1];
    console.log(data);
    fs.rename("./code/" + items, "./code/" + data, err => {
        if(err){
            console.log("操作失败！");
            return;
        }
    })
})
console.log("操作成功!");