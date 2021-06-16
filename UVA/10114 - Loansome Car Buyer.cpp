#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int main()
{
    //FILE *f;
    //f = fopen("output.txt", "w");
    int month, i, depreciation;
    double down_payment, total_loan, x;

    while(cin>>month>>down_payment>>total_loan>>depreciation && month >= 0)
    {
        //total_loan += down_payment;
        int arr_current = 0, arr_month[depreciation];
        double arr_depreciation[depreciation], car_value = total_loan + down_payment, pay_per_month = total_loan / month;

        for(i=0; i<depreciation; i++)
            cin>>arr_month[i]>>arr_depreciation[i];

        i = 0;
        x = arr_depreciation[arr_current];
        arr_current++;
        //total_loan -= down_payment;
//        cout<<"car_value "<<car_value<<",    "<<car_value * x<<endl;
        car_value = car_value - (car_value * x);
//        cout<<total_loan<<"<____>"<<car_value<<endl;
        if(total_loan < car_value)
        {
            if(i == 1)
            {
                cout<<i<<" month"<<endl;
                //fprintf(f, "%d month\n", i);
            }
            else
            {
                cout<<i<<" months"<<endl;
                //fprintf(f, "%d months\n", i);
            }
            continue;
        }

        for(i=1; i<=month; i++)
        {
            if(i == arr_month[arr_current])
            {
                x = arr_depreciation[arr_current];
                arr_current++;
            }
            total_loan = total_loan - pay_per_month;
            car_value = car_value - (car_value * x);
            //cout<<pay_per_month<<endl;
//            cout<<total_loan<<"<____>"<<car_value<<endl;

            if(total_loan < car_value)
            {
                if(i == 1)
                {
                    cout<<i<<" month"<<endl;
                    //fprintf(f, "%d month\n", i);
                }
                else
                {
                    cout<<i<<" months"<<endl;
                    //fprintf(f, "%d months\n", i);
                }
                break;
            }
        }
    }

    //fclose(f);

    return 0;
}
