// 新建文件，座右铭.txt    写入内容：三人行，则必有我师焉。

// 导入fs模块
const fs = require('fs');
// 同步的方法： writeFileSync
fs.writeFileSync("./座右铭2.txt","三人行，则必有我师焉！");
