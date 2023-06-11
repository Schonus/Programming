// 导入http模块
const http = require('http');
// 导入fs模块
const fs = require('fs');
const server = http.createServer((request, response) => {
    // 1.设置响应状态码
    response.statusCode = 300;
    // 2.设置响应状态描述
    response.statusMessage = 'ILoveYou';
    // 3.设置响应头信息
    response.setHeader('content-type','text/html;charset=utf-8');
    // 4.设置响应体(读取某文件)
    let css = fs.readFileSync(__dirname + '/11.css');
    let css = fs
    let html = fs.readFileSync(__dirname + '/11.html');
    response.end(html);
})
server.listen(9000,() =>{
    console.log('服务已经启动，端口 9000 监听中……');
})