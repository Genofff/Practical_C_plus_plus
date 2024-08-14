#include <iostream>

using namespace std;

class IPAddress {
protected:
    string ip;
public:
    IPAddress(string ip) {
        this->ip = ip;
    }

    virtual void print() {
        cout << ip << " - IP address" <<endl;
    }

};

class IPAddressChecked : public IPAddress {
protected:
    bool is_ip_correct = false;
public:
    IPAddressChecked(string ip) : IPAddress(ip) {
        this->ip = ip;
    }

    void isIpCorrect() {
        string cut_ip = ip;
        size_t startPos = 0;
        size_t endPos = 0;


        endPos = cut_ip.find(".", startPos);
        string placeholder = cut_ip.substr(startPos, endPos - startPos);
        int int_ip1 = stoi(placeholder);

        startPos = endPos + 1;
        endPos = cut_ip.find(".", startPos);
        placeholder = cut_ip.substr(startPos, endPos - startPos);
        int int_ip2 = stoi(placeholder);

        startPos = endPos + 1;
        endPos = cut_ip.find(".", startPos);
        placeholder = cut_ip.substr(startPos, endPos - startPos);
        int int_ip3 = stoi(placeholder);

        startPos = endPos + 1;
        placeholder = cut_ip.substr(startPos);
        int int_ip4 = stoi(placeholder);

        if ((int_ip1 > 0 && int_ip1 <= 255) && (int_ip2 > 0 && int_ip2 <= 255) && (int_ip3 > 0 && int_ip3 <= 255) &&
            (int_ip4 > 0 && int_ip4 <= 255)) {
            this->is_ip_correct = true;
        }
    }

    void print() override {
        isIpCorrect();
        cout << ip;
        if (is_ip_correct) {
            cout << " - Correct" << endl;
        } else {
            cout << " - Not Correct" << endl;
        }

    }
};

int main() {

    while (true){
        string ip_address = "";
        cout << "Enter ip address or b:";
        cin >> ip_address;
        if (ip_address == "b") {
            break;
        }

        IPAddress* address = new IPAddress(ip_address);
        IPAddressChecked* addressChecked = new IPAddressChecked(ip_address);
        address->print();
        addressChecked->print();

    }
    return 0;
}