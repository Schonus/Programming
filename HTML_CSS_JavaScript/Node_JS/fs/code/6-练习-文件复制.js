const fs = require("fs");
const process = require("process");
// 方式一：readfile
// 读取文件内容
let data = fs.readFileSync("./006_NodeJS入门_认识命令行工具.mp4");
// // 写文件内容
fs.writeFileSync("./006_NodeJS入门_认识命令行工具2.mp4",data);
console.log(process.memoryUsage());
console.log(process.cpuUsage());

// 方式二：流式操作
// const rs = fs.createReadStream("./006_NodeJS入门_认识命令行工具.mp4");
// const ws = fs.createWriteStream("./006_NodeJS入门_认识命令行工具3.mp4");
// 绑定data事件
// rs.on('data',chunk => {
    // ws.write(chunk);
// })
// console.log(process.memoryUsage());
// console.log(process.cpuUsage());