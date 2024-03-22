from flask import Flask, request, jsonify

app = Flask(__name__)

@app.route('/add', methods=['POST'])
def add_two_numbers():
    data = request.get_json()  # 获取POST请求中的JSON数据
    num1 = data.get('num1')    # 获取第一个数
    num2 = data.get('num2')    # 获取第二个数
    
    try:
        result = int(num1) + int(num2)  # 两个数相加
        return jsonify({'result': result})  # 返回JSON结果
    except ValueError:
        return jsonify({'error': 'Invalid numbers'})  # 处理无效的输入


if __name__ == '__main__':
    app.run()