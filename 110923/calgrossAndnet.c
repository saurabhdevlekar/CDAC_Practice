#include<stdio.h>

int main()
{
    float basic_sal,da,hra,pf,ta,gross_sal,net_sal;
    printf("Enter the Basic salary :");
    scanf("%f",&basic_sal);

     da=0.4*basic_sal;
     hra=0.24*basic_sal;
     pf=0.2 *basic_sal;
     ta=0.3 *basic_sal;

    // da=(40*basic_sal)/100;
    // hra=(25*basic_sal)/100;
    // pf=(20*basic_sal)/100;
    // ta=(30*basic_sal)/100;

    gross_sal=basic_sal+da+hra+ta;
    printf("basic gross sal is %f\n:",gross_sal);

    net_sal=gross_sal-pf;
    printf("basic net sal is %f\n:",net_sal);

    // printf("basic salary of HRA is :",hra);
    // printf("basic salary of PF is :",pf);
    // printf("basic salary of TA is :",ta);
    
    return 0;
}
