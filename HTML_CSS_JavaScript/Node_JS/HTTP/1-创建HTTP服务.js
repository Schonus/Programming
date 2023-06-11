// 导入http模块
const http = require('http');

// 创建服务对象 create 创建 server 服务
// require 意为请求……
const server = http.createServer((request,response) => {
    response.setHeader('content-type','text/html;charset=utf-8');
    response.end('你写代码好像蔡徐坤啊');
});

server.listen(9000,() =>{
    console.log('服务已经启动，端口 9000 监听中……');
})