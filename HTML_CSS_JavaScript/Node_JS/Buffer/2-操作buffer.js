// toString() buffer转换成字符串
let buf = Buffer.from([105, 108, 111, 118, 101, 121, 111, 117]);
console.log(buf.toString());
//[]   读取buffer
let buf2 = Buffer.from("hello");
console.log(buf2[0]);
console.log(buf2[0].toString(2));
// 对buf进行修改
let buf3 = Buffer.from("hello");
buf3[2] = 50;
console.log(buf3.toString());
// 对buf进行修改
let buf4 = Buffer.from("你好");
buf4[2] = 50;
console.log(buf4.toString());
console.log(buf4);