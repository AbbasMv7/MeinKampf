#include <iostream>
using namespace std;
class HugeInteger{
public:
    HugeInteger(){
        ptr = new int[size];
        init();
    }
    HugeInteger(string str){
        ptr = new int[size];
        init();
        int s = str.length();
        int index = size - s;
        for(int i = index, j=0; i< size; i++,j++){
            ptr[i] = str[j] - 48;
        }
    }
    void init(){
        for (int i = 0; i < size ; ++i) {
            ptr[i] = 0;
        }
    }

    void display(){
        for (int i = 0; i < size; ++i) {
            if(ptr[i] != 0 )
                cout<<ptr[i];
        }
    }

    HugeInteger add(HugeInteger h){
        HugeInteger result;
        return result;
    }

private:
    const int size = 40;
    int *ptr;
};
int main() {
    HugeInteger hugeInteger1("457889");
    HugeInteger hugeInteger2("647737");
    hugeInteger1.display();
    cout<<endl;
    hugeInteger2.display();
    return 0;
}