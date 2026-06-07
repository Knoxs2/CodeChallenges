if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    
# Transforming in set to remove duplicates
transformed_list = list(set(list(arr)))

# Getting the max value, using its index, poping
transformed_list.pop(transformed_list.index(max(transformed_list)))

# Printing the runner up value
print(max(transformed_list))

    