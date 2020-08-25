//Shrabon
#include <bits/stdc++.h>
        using namespace std;

#define MAX 100

        void traverse(int array[], int size);
        void search(int array[], int size);
        void sort(int array[], int size);
        void deletion(int array[], int size);
        void insertion(int array[], int size);
        int marging(int array[], int size);

int main()
{
        int size = 10, option, i;
        int def_array[MAX] = {6, 2, 8, 10, 20, 18, 4, 16, 12, 14};

        cout << "Do you want to creat your own array???" << '\n' << "1. YES" << '\n' << "2. NO" << '\n';
        cin >> option;
        if(option == 1) {
                cout << "Enter size and element: ";
                cin >> size;
                def_array[size + 1];
                for(i = 0; i < size; i++)
                        cin >> def_array[i];
        }

        while(1) {
                cout << '\n' <<"--------Choose Operation-------" << '\n';
                cout << "1. Array Traversing." << '\n';
                cout << "2. Searching." << '\n';
                cout << "3. Sorting." << '\n';
                cout << "4. Deletion." << '\n';
                cout << "5. Insertion." << '\n';
                cout << "6. Marging." << '\n';
                cout << "7. Exit." << '\n';
                cin >> option;
                cout << '\n';
        switch(option) {
               case 1:
                        traverse(def_array, size);
                        break;
               case 2:
                        search(def_array, size);
                        break;
               case 3:
                        sort(def_array, size);
                        break;
               case 4:
                        deletion(def_array, size);
                        size--;
                        break;
               case 5:
                        insertion(def_array, size);
                        size++;
                        break;
               case 6:
                        size = marging(def_array, size);
                        break;
               default:
                        cout << "--------THANK YOU--------" << '\n';
                        return 0;

                }
        }
}

void traverse(int array[], int size)
{
        int i;
        cout << '\n' << "Your array:" << '\n';
        for(i = 0; i < size; i++)
                std::cout << array[i] << '\n';
        cout << "--------------------------" << '\n' << '\n';
}

void search(int array[], int size)
{
        int i, item;
        std::cout << '\n' << "Enter Item: ";
        std::cin >> item;
        for(i = 0; i < size; i++)
                if(array[i] == item) break;
        if(i < size) cout << "Item is found in the array." << '\n';
        else cout << "Item isn't in the array." << '\n';
        cout << "--------------------------" << '\n' << '\n';
}

void sort(int array[], int size)
{
        int i, j, option, temp;
        std::cout << "Enter 1 for accending order. 2 for decending order." << '\n';
        cin >> option;
        if(option == 1) {
                for(i = 0; i < size - 1; i++) {
                        for(j = 0; j < size - i - 1; j++) {
                                if(array[j] > array[j + 1]) {
                                        temp = array[j];
                                        array[j] = array[j + 1];
                                        array[j + 1] = temp;
                                }
                        }
                }
        }
        else {
                for(i = 0; i < size - 1; i++) {
                        for(j = 0; j < size - i - 1; j++) {
                                if(array[j] < array[j + 1]) {
                                        temp = array[j];
                                        array[j] = array[j + 1];
                                        array[j + 1] = temp;
                                }
                        }
                }
        }
        cout << '\n' <<"Array after sorting:" << '\n';
        for(i = 0; i < size; i++)
                cout << array[i] << '\n';
        cout << "--------------------------" << '\n' << '\n';
}

void deletion(int array[], int size)
{
        int i, position;
        cout << "Enter position: ";
        cin >> position;
        for(i = position - 1; i < size - 1; i++)
                array[i] = array[i + 1];
        cout << "Array after deletion:" << '\n';
        for(i = 0; i < size - 1; i++)
                cout << array[i] << '\n';
        cout << "--------------------------" << '\n' << '\n';
}

void insertion(int array[], int size)
{
        int i, item, position;
        cout << "Enter Item: ";
        cin >> item;
        cout << "Enter position: ";
        cin >> position;
        for(i = size; i >= position - 1; i--)
                array[i] = array[i - 1];
        array[position - 1] = item;
        cout << "Array after insertion:" << '\n';
        for(i = 0; i <= size; i++)
                cout << array[i] << '\n';
        cout << "--------------------------" << '\n' << '\n';
}

int marging(int array[], int size)
{
        int temp[] = {22, 24, 28, 26, 30};
        int new_size = size + 5, option, i, j;
        cout << "Do you want to creat another array??" << '\n' <<"1. YES" << '\n' << "2. NO" << '\n';
        cin >> option;
        if(option == 1) {
                cout << "Enter size and element: ";
                cin >> new_size;
                new_size += size;
                for(i = size; i < new_size; i++)
                        cin >> array[i];
        }
        else {
                for(i = size, j = 0; i < new_size; i++, j++)
                        array[i] = temp[j];
        }
        cout << "Array after marging:" << '\n';
        for(i = 0; i < new_size; i++)
                cout << array[i] << '\n';
        cout << "--------------------------" << '\n' << '\n';

        return new_size;
}
