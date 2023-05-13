class Solution {
public:
    int countSeniors(vector<string>& details) {
          int c = 0;
        for (string passenger : details) {
            int age = stoi(passenger.substr(11, 2));
            if (age > 60) {
                c++;
            }
        }
        return c;
    }
};