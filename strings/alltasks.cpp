#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

// Вывести 3, 6, 9, 12 и тд. символы.
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = 0; i <= str.length(); i += 3) {
        if (i <= str.length()) {
            cout << str[i - 1] << " ";
        }
    }
    return 0;
}

// Вывести первый, последний и средний (Если такой имеется) символы.
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    if (str.length() >= 2) {
        cout << "First symbol: " << str[0] << endl;
        cout << "Last symbol: " << str.back() << endl;
        if (str.length() % 2 != 0) {
            cout << "Middle symbol: " << str[str.length() / 2] << endl;
        }
    } else {
        cout << "The string must have at least 2 symbols." << endl;
    }
    return 0;
}

// Заменить каждый чётный символ на "a", а если он уже "a" - заменить на "b".
string replaceChars(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (i % 2 != 0 && str[i] != 'a') {
            str[i] = 'a';
        } else if (i % 2 != 0 && str[i] == 'a') {
            str[i] = 'b';
        }
    }
    return str;
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Modified string: " << replaceChars(str) << endl;
    return 0;
}

// Замена xabc
bool t =true;
bool r=true;
int main() {
    int n=0,k=0,p;
    string s,s1;
    getline(cin,s);
    if (s.substr(0,4) == "xabc")
        s = s.erase(0, 1);
    s = " " + s;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'x' && s.substr(i + 1, 3) == "abc" && t == true && i >= 2){
            s = s.erase(i, 1);
            t = false;
            i = i - 2;
        }
        else if (s[i] == 'x' && s.substr(i + 1, 3) == "abc" && t == false && i >= 2){
            if (s[i - 1] == 'x') {
                s = s.erase(i, 1);
                i = i - 2;
            }
            else if (s[i - 1] != 'x')
                t = true;
        }
    }
    s = s.erase(0, 1);
    cout << s;
}

// Заменить несколько подряд идущих пробелов на 1.
string replaceSpaces(string str) {
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            if (i + 1 < str.length() && str[i + 1] == ' ') {
                str.erase(i, 1);
                i--;
            } else {
                str.replace(i, 1, " ");
            }
        }
        i++;
    }
    return str;
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Modified string: " << replaceSpaces(str) << endl;
    return 0;
}

// Палиндром.
bool isPalindrome(string str, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (str[start] != str[end]) {
        return false;
    }
    return isPalindrome(str, start + 1, end - 1);
}
bool isPalindrome(string str) {
    return isPalindrome(str, 0, str.length() - 1);
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    }
    else {
        cout << "The string is not a palindrome." << endl;
    }
}

// Скобки.
bool isValid(string str) {
    stack<char> stack;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            stack.push(str[i]);
        } else if (str[i] == ')' || str[i] == '}' || str[i] == ']') {
            if (stack.empty()) {
                return false;
            }
            if (str[i] == ')' && stack.top() != '(') {
                return false;
            }
            if (str[i] == '}' && stack.top() != '{') {
                return false;
            }
            if (str[i] == ']' && stack.top() != '[') {
                return false;
            }
            stack.pop();
        }
    }
    return stack.empty();
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    if (isValid(str)) {
        cout << "The string has a valid bracket sequence." << endl;
    } else {
        cout << "The string does not have a valid bracket sequence." << endl;
    }
    return 0;
}

// Перестановка с сохранением последовательности.
int main() {
    string s, t, rez = "";
    cin >> s >> t;
    for (int i = 0; i < t.size(); i++) {
        for (int j = 0; j < s.size(); j++) {
            if (t[i] == s[j]) {
                rez += to_string(j) + " ";
            }
        }
    }
    if (rez == "")
        cout << "NO";
    else
        cout << rez;
}