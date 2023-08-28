//---------------------------Brute Force -------------------------------
int majorityElement(vector<int> v) {

    int n = v.size();

    for (int i = 0; i < n; i++) {
     
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (v[j] == v[i]) {
                cnt++;
            }
        }
        if (cnt > (n / 2))
            return v[i];
    }
    return -1;
}
// --------------TC - O(N2)
// --------------MC - O(1)

/////----------------------------Better Solution----------------------

int majorityElement(vector<int> v) {

    int n = v.size();
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[v[i]]++;
    }

    for (auto it : mpp) {
        if (it.second > (n / 2)) {
            return it.first;
        }
    }
    return -1;
}

// --------------TC - O(N*logN) + O(N)
// --------------MC - O(N)

/////----------------------------Optimal  Solution----------------------
int majorityElement(vector<int> v) {
    int n = v.size();
    int cnt = 0; 
    int el; 
                                       //applying the algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        }
        else if (el == v[i]) cnt++;
        else cnt--;
    }

                                        //checking if the stored element is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) return el;
    return -1;
}

// --------------TC - O(N) + O(N)
// --------------MC - O(1)




