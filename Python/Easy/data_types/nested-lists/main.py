if __name__ == '__main__':
    data = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        data.append([name, score])
    
    ordered_data = sorted(data, key=lambda x:x[1])
    
    
    second_Lowest_score = [[student, grade] for student, grade in ordered_data if min(ordered_data, key=lambda x: x[1])[1] != grade]
    
    lowest_score = [[student] for student, grade in second_Lowest_score if min(second_Lowest_score, key=lambda x: x[1])[1] == grade]
    
    ordered_students = sorted(lowest_score)

    for name in ordered_students:
        print(name[0])