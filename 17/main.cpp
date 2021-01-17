Задание 1:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
int n, k, l;
double avg = 0;
cin >> n;
int* a = new int[n];
for (int i = 0; i < n; i++) {
    cin >> a[i];
}
cin >> k >> l;
for (int i = k; i <= l; i++) {
    avg += a[i];
}
cout << avg / (l-k+1);
}

2 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
    bool flag = true;
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int r = a[1] - a[0];
    for (int i = 2; i < n; i++) {
        if (a[i] - a[i - 1] != r) {
            flag = false;
            break;
        }
    }
    if (flag == true) cout << "YES";
    else cout << "NO";
}

3 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
    int n, min = 2000007;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i += 2) { //надеюсь что 0 тоже четный элемент
        if (a[i] < min) min = a[i];
    }
    cout << min;
}

4 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int MAX = max(a[n - 1], max(a[n - 2], a[n - 3]));
    if (MAX == a[n - 1]) cout << n - 1;
    else if (MAX == a[n - 2]) cout << n - 2;
    else cout << n - 3;
}

5 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
    int n, first = -1, second = -1;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i] == a[j]) {
                first = i;
                second = j;
                break;
            }
        }
    }
    cout << min(first, second) << " " << max(first, second);
}
