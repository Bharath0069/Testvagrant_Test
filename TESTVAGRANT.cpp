#include <iostream>
#include <cmath>
using namespace std;
class basket{
public:
    string ProductName;
    int ProductPrice;
    int GSTPercent;
    int ProductQuantity;


    basket(string productname,int productprice,int gstpercent,int productquality){
        ProductName=productname;
        ProductPrice=productprice;
        GSTPercent=gstpercent;
        ProductQuantity=productquality; }

    int GSTofeachproduct(int ProductPrice ,int GSTPercent){
        int GSTamount=0;
        GSTamount=ProductPrice*(GSTPercent/100);
        return GSTamount;}


    int AmounttopayafterGST(int ProductPrice ,int GSTPercent,int ProductQuantity){
        int result=0;
        result=(ProductQuantity*ProductPrice)-(ProductPrice*(GSTPercent/100));
        return result;

    }
    int discount( int ProductPrice){
        int priceafterdiscount=0
        if(ProductPrice>500){
            priceafterdiscount=ProductPrice-(ProductPrice*0.05);
        }
        else
            priceafterdiscount=ProductPrice;
    }
};
    
int main(){
    int result=0;
    int GST1,GST2,GST3,GST4;
    basket p1("Leatherwallet",1045,18,1);
    basket p2("Umbrella",855,12,4);
    basket p3("Cigarette",200,28,3);
    basket p4("Honey",100,0,2);
    p1.AmounttopayafterGST(1045,18,1);
    result+=result;
    p2.AmounttopayafterGST(855,12,4);
    result+=result;
    p3.AmounttopayafterGST(200,28,3);
    result+=result;
    p4.AmounttopayafterGST(100,0,2);
    result+=result;
    cout<<"THE TOTAL AMOUNT TO BE PAID IS" <<result<<endl;
    GST1=p1.GSTofeachproduct(1045,18);
    GST2=p2.GSTofeachproduct(845,12);
    GST3=p3.GSTofeachproduct(200,28);
    GST4=p4.GSTofeachproduct(100,0);
    
    cout<<"THE PAID MAX GST AMOUNT IS"<<max(GST1,GST2,GST3,GST)<<endl;
}
