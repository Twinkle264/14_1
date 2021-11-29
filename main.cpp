#include <iostream>
#include <vector>
using namespace std;

void c_matrix(const vector<vector<int>> &a) {
    for (int i = 0; i < a[0].size(); ++i) {
        cout << a[0][i] << " ";
    }
    cout << endl;
    for (int i = 0; i < a[1].size(); ++i) {
        cout << a[1][i] << " ";
    }
    cout << endl << endl;
}

int main() {
    vector<vector<int>> cutlery {{4, 3, 3, 3, 3, 3}, {4, 3, 3, 3, 3, 3}};
    vector<vector<int>> plates {{3, 2, 2, 2, 2, 2}, {3, 2, 2, 2, 2, 2}};
    vector<vector <int>> chairs {2, vector<int> (6)};

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 6; ++j) {
            chairs[i][j] = 1;

        }
    }

    cutlery[0].insert(cutlery[0].begin() + 5, 0);
    plates[0].insert(plates[0].begin() + 5, 0);
    chairs[0].insert(chairs[0].begin() + 5, 1);

    cutlery[1][2] = 2;
    cutlery[1][0]--;
    cutlery[1][2]++;

    plates[1][0]--;

    cout << "Cutlery: " << endl;
    c_matrix(cutlery);
    cout << "Plates: " << endl;
    c_matrix(plates);
    cout << "Chairs: " << endl;
    c_matrix(chairs);

    return 0;
}
