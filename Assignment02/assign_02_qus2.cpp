#include<bits/stdc++.h>
using namespace std;

struct Product {
    string productId;
    float rating;
};

void noOfRating(int& top, int& avg, int& low, int n, Product p[]) {
    for (int i = 0; i < n; i++) {
        if (p[i].rating >= 4) {
            top++;
        }
        else if (p[i].rating >= 3 && p[i].rating < 4) {
            avg++;
        }
        else {
            low++;
        }
    }
}
int main() {
    int n, top = 0, avg = 0, low = 0;
    cout << "Enter the number of product: ";
    cin >> n;
    Product p[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the product id: ";
        cin >> p[i].productId;
        cout << "Enter the rating: ";
        cin >> p[i].rating;
    }
    noOfRating(top, avg, low, n, p);
    cout << "No of top rated products are " << top << endl << "No of average rated products are " << avg << endl << "No of low rated products are " << low;


    return 0;
}
