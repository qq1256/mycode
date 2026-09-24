try:
    a = float(input("请输入数字："))
    b = float(input("请输入另一个数字："))
    c = a + b
    print(f"两个数字的和是：{c}")
except ValueError:
    print("输入的不是有效数字！")