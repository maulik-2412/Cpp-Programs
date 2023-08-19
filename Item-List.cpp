#define _GLIBCXX_USE_CXX11_ABI 0


#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

class Item{
    private:
    string name;
    float price;
    int quan;
    public:
    Item(){}
    Item(string n,float p,int q);
    string getName() const {
        return name;
    }
    float getprice() const {
        return price;
    }
    int getquan() const {
        return quan;
    }
    friend ifstream & operator>>(ifstream &fis,Item &i);
    friend ofstream & operator<<(ofstream &fos,Item &i);



};

int main(){
    int n;
    string name;
    float price;
    int quan;
    cout<<"Enter no. of items: ";
    cin>>n;
    cout<<endl;
    Item *list[n];
    for(int i=0;i<n;i++){
        cout<<"Enter item "<<i+1<<endl<<"Name: ";
        cin>>name;
        cout<<endl;
        cout<<"Price(in rupees): ";
        cin>>price;
        cout<<endl;
        cout<<"Quantity: ";
        cin>>quan;
        cout<<endl;
        list[i]=new Item(name,price,quan);
    }

    ofstream ofs("myfile.txt");
    for(int i=0;i<n;i++){
        ofs<<*list[i];
    }
    Item item;
    vector<Item> items;
    ifstream ifs("myfile.txt");
     while (ifs>>item) {
        if(!ifs.eof()){
        items.push_back(item);
        }
    }

    for(const Item& item : items){
        cout<<"Name: "<<item.getName()<<endl<<"Price: "<<item.getprice()<<endl<<"Quantity: "<<item.getquan()<<endl;
    }
}

Item::Item(string n,float p,int q)
{
 name=n;
 price=p;
 quan=q;
}
ofstream & operator<<(ofstream &fos,Item &i)
{
 fos<<i.name<<endl<<i.price<<endl<<i.quan<<endl;
 return fos;
}
ifstream & operator>>(ifstream &fis,Item &i)
{
 fis>>i.name>>i.price>>i.quan;
 return fis;
}