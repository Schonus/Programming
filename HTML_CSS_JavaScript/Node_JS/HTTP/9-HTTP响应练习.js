// 导入http模块
const http = require('http');

const server = http.createServer((request, response) => {
    // 1.设置响应状态码
    response.statusCode = 300;
    // 2.设置响应状态描述
    response.statusMessage = 'ILoveYou';
    // 3.设置响应头信息
    response.setHeader('content-type','text/html;charset=utf-8');
    // 4.设置响应体
    response.write(`<!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>9-响应练习</title>
        <style>
            table{
                border: 1px solid #000;
            }
            td{
                padding: 20px 40px;
            }
            table tr:nth-child(odd){
                background-color: #aef;
            }
            table tr:nth-child(even){
                background-color: #fcb;
            }
        </style>
    </head>
    <body>
        <table>
            <caption>表格</caption>
            <thead></thead>
            <tbody>
                <tr>
                    <td>1</td>
                    <td>2</td>
                    <td>3</td>
                </tr>
                <tr>
                    <td>1</td>
                    <td>2</td>
                    <td>3</td>
                </tr>
                <tr>
                    <td></td>
                    <td></td>
                    <td></td>
                </tr>
                <tr>
                    <td></td>
                    <td></td>
                    <td></td>
                </tr>
            </tbody>
        </table>
        <script type="text/javascript">
            var tds = document.querySelectorAll("td");
            tds.forEach(item => {
                item.onmousemove = function() {
                    this.style.backgroundColor = '#222';
                }
                item.onmouseleave = function() {
                    this.style = '';
                }
            });
        </script>
    </body>
    </html>`);
    response.end();
})
server.listen(9000,() =>{
    console.log('服务已经启动，端口 9000 监听中……');
})