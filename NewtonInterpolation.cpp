#include<iostream>
#include<stdio.h>

class functions{
    private:
        int size = 0;
        double *x = new double[size];
        double *y = new double[size];  ve

    public:
    double *newtonElements = new double[size];

    void newton(double x_values[],double y_values[]){
        /*error if y_values != x_values
        /
        /
        /
        */
        int size = sizeof(y)/sizeof(x[0]);
        x = x_values;
        y = y_values;
        double polynom;

        double n[size];

        for(int i=0;i<=size+1;i++){
            n[i] = y[i];
            for(int j = i-1; j>=0;j--){
                n[j] = (n[j+1]-n[j])/(x[i]-x[j]);
            }

            for(int z = 0; z <= size+1; z++){
            //std::cout << "test: "<<i<<std::endl;
            std::cout << n[z]<<std::endl;
        }

            newtonElements[i] = n[0];
        }
        
         for(int i = 0; i <= size+1; i++){
            //std::cout << "test: "<<i<<std::endl;
            std::cout << newtonElements[i]<<std::endl;
        } 
    }   


    
};

int main(){
    functions f;
    int array[5]={1,2,3};
    double x[]= {1,2,4};
    double y[]= {-2,5,1};
    std::cout<<"test"<<sizeof(array)/sizeof(array[0])<<std::endl;

    f.newton(x,y);
    
    
    return 0;
}