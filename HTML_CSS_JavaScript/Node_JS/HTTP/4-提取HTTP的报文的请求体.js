// 导入http模块
const http = require('http');

// 创建服务对象 create 创建 server 服务
// require 意为请求……
const server = http.createServer((request,response) => {
    // 1.声明一个变量
    let body = '';
    // 2.绑定事件
    request.on('data', chunk => {
        body += chunk;
    })
    // 3.绑定end事件
    request.on('end', () => {
        console.log("body = " + body);
    })
    response.end('hello!');
});

server.listen(9000,() =>{
    console.log('服务已经启动，端口 9000 监听中……');
})