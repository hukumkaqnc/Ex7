#include <iostream>
#include <list>
#include <set>
#include <chrono>
using namespace std;

inline bool find(const list<int>& lst, int val) {
    for (auto iter{ lst.begin() }; iter != lst.end(); ++iter) {
        if (*iter == val) {
            return true;
        }
    }

    return false;

}
inline bool find(const set<int>& st, int val) {
    for (auto iter{ st.begin() }; iter != st.end(); ++iter) {
        if (*iter == val) {
            return true;
        }
    }

    return false;

}

int main()
{
    list<int> lst;
    int M = 4, N = 100000;
    //for (int i = 0; i < N; i++) {
    //    lst.push_back(i * 2);
    //}
    //int k = 0;
    //auto start = chrono::steady_clock::now();
    //for (int i = (2 * N - M) / 2; i < (2 * N + M) / 2; i++)
    //{
    //    if (find(lst, i)) { k++; }
    //}
    //auto stop = chrono::steady_clock::now();
    //cout << k << endl;
    //auto dt = chrono::duration_cast<chrono::microseconds>(stop - start).count();
    //cout << dt << endl;
    set<int> st;
    for (int i = 0; i < N; i++) {
        st.insert(i * 2);
    }
    int k = 0;
    auto start = chrono::steady_clock::now();
    for (int i = (2 * N - M) / 2; i < (2 * N + M) / 2; i++)
    {
        if (find(st, i)) { k++; }
    }
    auto stop = chrono::steady_clock::now();
    cout << k << endl;
    auto dt = chrono::duration_cast<chrono::microseconds>(stop - start).count();
    cout << dt << endl;
}

