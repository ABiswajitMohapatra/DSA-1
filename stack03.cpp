#include <iostream>
using namespace std;

class TwoStack {
    int *arr;
    int size;
    int top1, top2;

public:
    TwoStack(int s) {
        size = s;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    void push1(int num) {
        if (top1 + 1 < top2) {
            arr[++top1] = num;
        }
    }

    void push2(int num) {
        if (top1 + 1 < top2) {
            arr[--top2] = num;
        }
    }

    int pop1() {
        if (top1 >= 0) {
            return arr[top1--];
        } else {
            return -1;
        }
    }

    int pop2() {
        if (top2 < size) {
            return arr[top2++];
        } else {
            return -1;
        }
    }
};

int main() {
    int S, Q;
    cin >> S >> Q;

    TwoStack twoStack(S);

    for (int i = 0; i < Q; i++) {
        int type, stackNo, num;
        cin >> type >> stackNo;

        if (type == 1) {
            cin >> num;
            if (stackNo == 1) {
                twoStack.push1(num);
            } else {
                twoStack.push2(num);
            }
        } else {
            if (stackNo == 1) {
                cout << twoStack.pop1() << endl;
            } else {
                cout << twoStack.pop2() << endl;
            }
        }
    }

    return 0;
}
