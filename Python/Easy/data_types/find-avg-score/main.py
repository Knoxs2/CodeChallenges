if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    
    sum = 0
    for grade in range(3):
        sum += student_marks[query_name][grade]
        
    avg_grade = sum/3
    print(f"{avg_grade:.2f}")
