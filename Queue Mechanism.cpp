#include<iostream>
#include<conio.h>

using namespace std;
const int MAX = 10;

class Queue {
public:
    int arr[MAX];
    int front = -1, rear = -1;

    bool isFull() {
        if (rear == MAX - 1)
            return 1;
        else
        return 0;
    }

    bool isEmpty() {
        if (front == -1)
            return 1;
        return 0;
    }

    void enqueue(int e) {
        if (isEmpty()) {
            front++;
            rear++;
            arr[rear] = e;
        } else {
            if (!isFull())
                arr[++rear] = e;
            else
                cout << "Overflow";
        }
    }

    int dequeue() {
        if (!isEmpty())
            return arr[front++];
        else
            return 0;
    }

    void display() {
        cout << "QUEUE:\n";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << endl;
        }
    }
};

int menu() {
    Queue q;
    int i, j;
    while (1) {
        system("CLS");
        cout << "1.Enqueue\t2.Dequeue\n3.Display\t4.Exit\n";
        cin >> i;
        system("CLS");
        switch (i) {
            case 1:
                cout << "Enter number:";
                cin >> j;
                q.enqueue(j);
                cout << "EnQueued!";
                _getch();
                break;
            case 2:
                j = q.dequeue();
                cout << "DeQueued:" << j;
                _getch();
                break;
            case 3:
                q.display();
                _getch();
                break;
            case 4:
                return 0;
            default:
                cout << "Wrong Input!";

        }
    }
    return 0;
}

int main() {
    menu();
    return 0;
}
