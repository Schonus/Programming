// 导入http模块
const http = require('http');

// 创建服务对象 create 创建 server 服务
// require 意为请求……
const server = http.createServer((request,response) => {
    // console.log(request.method);
    // console.log(request.httpVersion);
    // console.log(request.url);
    // console.log(require('url').parse(request.url).pathname);
    // console.log(require('url').parse(request.url, true).query);
    // console.log(request.headers);
    // console.log(request.on('data',function(chunk){}));
    console.log(request.on('end',function(){}));
    response.end('http');
});

server.listen(9000,() =>{
    console.log('服务已经启动，端口 9000 监听中……');
})