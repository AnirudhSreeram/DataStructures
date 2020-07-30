class LinearSearch:
    def __init__(self):
        pass

    def search(self,item,input):
        for index,value in enumerate(input):
            if value == item:
                return index

def main():
    search_item = LinearSearch()
    inp = [i for i in range(0,100,2)]
    item = 2
    print(search_item.search(item,inp))

if __name__ == "__main__":
    main()
