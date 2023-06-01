const fs = require("fs");
// 创建读取流对象
const rs = fs.createReadStream('./006_NodeJS入门_认识命令行工具.mp4');
// 绑定data事件
rs.on('data',chunk =>{
    console.log(chunk);
    console.log(chunk.length);//65536bytes =>64KB
})
rs.on('end',() =>{
    console.log('读取完成');
})
