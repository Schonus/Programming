// 新建文件，座右铭.txt    写入内容：三人行，则必有我师焉。

// 导入fs模块
const fs = require('fs');
// 调用方法   appendFile     追加写入
fs.appendFile("./座右铭.txt","\r\n择其善者而从之，择其不善者而改之", err => {
    if(err)
    {
        console.log("写入失败！");
        return;
    }
    console.log("写入成功！");
});

// 追加写入的同步版  appendFileSync
fs.appendFileSync("./座右铭2.txt","\r择其善者而从之，择其不善者而改之");