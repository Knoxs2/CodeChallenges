if __name__ == '__main__':
    N = int(input())
    list = []
    for i in range(N):
        input_string = input()
        command_string = input_string.split()
        command = command_string[0]
        
        match command:
            case "insert":
                insert_index = int(command_string[1])
                insert_value = int(command_string[2])
                list.insert(insert_index, insert_value)
            case "print":
                print(list);
            case "append":
                append_value = int(command_string[1])
                list.append(append_value)
            case "remove":
                remove_index = int(command_string[1])
                list.remove(remove_index)
            case "sort":
                list.sort()
            case "pop":
                list.pop()
            case "reverse":
                list.reverse()
            
            