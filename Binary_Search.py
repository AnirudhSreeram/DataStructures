class BinarySearch:
    def __init__(self):
        pass

    def search(self, item, input):
        Low, High = 0, len(input)
        value = 0
        while(value != item):
            if High < Low:
                exit
            mid = Low + ((High - Low)//2)
            if (input[mid] < item):
                Low = mid + 1
            elif (input[mid] > item):
                High = mid - 1
            elif (input[mid] == item):
                value = item
        return mid


def main():
    search_item = BinarySearch()
    inp = [i for i in range(0, 100, 2)]
    item = 54
    print(search_item.search(item, inp))


if __name__ == "__main__":
    main()
