//导入 fs 模块
const fs = require('fs');
//导入path模块
const path = require('path');
console.log(path.resolve(__dirname, "./index.html"));
//可以省略./
console.log(path.resolve(__dirname, "index.html"));

//sep 分隔符
console.log(path.sep);

// parse方法  __dirname '全局变量'
console.log(__filename);
let str = "D:\\Programming\\HTML_CSS_JavaScript\\Node_JS\\path\\path.js";
console.log(path.parse(str));
// basename 快速获取文件名
console.log(path.basename(str));
// name 快速获取文件路径
console.log(path.dirname(str));
// extname 快速获取拓展名
console.log(path.extname(str));