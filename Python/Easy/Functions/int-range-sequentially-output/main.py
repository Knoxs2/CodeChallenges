if __name__ == '__main__':
    n = int(input())
    answer = ""
    i = 0
    while n >= i+1:
        answer += str(i+1)
        i += 1
    print(answer)