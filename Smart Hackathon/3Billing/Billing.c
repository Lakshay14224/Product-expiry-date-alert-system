#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
float amount(float rate, int quantity, float discount, float gst);
void main()
{
    system("clear");
    int j, quantity, cash, w = 0;
    long cash_received, newt_amount;
    float rate, discount, gst, t_amount=0, amount1, float_part;
    char itemcode[5], date[20];
    printf("\t\t\t\tPHARMACY\n");
    printf("\t\t\t\tAddress line 1\n");
    printf("\t\t\t\tAddress line 2\n");
    printf("----------------------------------------------------------------------------------------------------------------\n");
    printf("    PRODUCTS AVAILABLE AT OUR STORE:\n");
    printf(" 1. Crocin (650 mg) @ Rs.50.00\n\t\t@ 5%s discount\t@ 12%s GST\n", "%", "%");
    printf(" 2. Paracetamol Dolo 650 @ Rs.40.00\n\t\t@ 2%s discount\t@ 12%s GST\n", "%", "%");
    printf(" 3. Mega cv (625 mg) @ Rs.152.00\n\t\t@ 14%s discount\t @ 12%s GST\n", "%", "%");
    printf(" 4. metrogyl 400 @ Rs.90.00\n\t\t@ 5%s discount\t @ 12%s GST\n", "%", "%");
    printf(" 5. monocef 200 @ Rs.60.00\n\t\t\t\t @ 12%s GST\n", "%");
    printf(" 6. Losartan @ Rs.300.00\n\t\t@ 14%s discount\t @ 12%s GST\n", "%", "%");
    printf(" 7. Aciloc 150 @ Rs.93.95\n\t\t@ 10%s discount\t@ 12%s GST\n", "%", "%");
    printf(" 8. Zerodal-P @ Rs.170.00\n\t\t@ 12%s discount\t @ 12%s GST\n", "%", "%");
    printf(" 9. Pantop-D @ Rs.107.00\n\t\t@ 7%s discount\t @ 12%s GST\n", "%", "%");
    printf("10. Oflooxacin @ Rs.200.00\n\t\t@ 9%s discount\t @ 12%s GST\n", "%", "%");
    printf("----------------------------------------------------------------------------------------------------------------\n");
    printf("BILL NUMBER: \n");
{
time_t current_time =time(NULL);
struct tm*tm=localtime(&current_time);
printf("\nDate and Time:\n");
printf("%s\n", asctime(tm));
}

    printf("\t\t\tCASH MEMO - RETAIL INVOICE\n");
    printf("----------------------------------------------------------------------------------------------------------------\n");
    printf("CODE\tITEM NAME\t\t\t\t\t\t\t\t\t\tQUANTITY\n");
    printf("\t\tAMOUNT(Rs.)\n");
    printf("----------------------------------------------------------------------------------------------------------------\n");
    for(j = 1; j!= 0; j++)
    {
        fgets(itemcode, 5, stdin);
        if(strcmp(itemcode, "1\n") == 0)
        {
            printf("\tCrocin (650mg)\t\t\t\t\t\t\t\t\t\t   ");
            scanf("%d", &quantity);
            getchar();
            rate = 50.00;
            discount = 5;
            gst = 12;
            amount1 = amount(rate, quantity, discount, gst);
            printf("\t\t%0.2f\n", amount1);
            t_amount += amount1;
            w += quantity;
        }
        else if(strcmp(itemcode, "2\n") == 0)
        {
            printf("\tParacetamol Dolo 650\t\t\t\t\t\t\t\t\t   ");
            scanf("%d", &quantity);
            getchar();
            rate = 40.00;
            discount = 2;
            gst = 12;
            amount1 = amount(rate, quantity, discount, gst);
            printf("\t%0.2f\n", amount1);
            t_amount += amount1;
            w += quantity;
        }
        else if(strcmp(itemcode, "3\n") == 0)
        {
            printf("\tMega CV (625mg)\t\t\t\t\t\t\t\t\t\t   ");
            scanf("%d", &quantity);
            getchar();
            rate = 152.00;
            discount = 14;
            gst = 12;
            amount1 = amount(rate, quantity, discount, gst);
            printf("\t%0.2f\n", amount1);
            t_amount += amount1;
            w += quantity;
        }
        else if(strcmp(itemcode, "4\n") == 0)
        {
            printf("\tmatrogyn 400\t\t\t\t\t\t\t\t\t\t   ");
            scanf("%d", &quantity);
            getchar();
            rate = 90.00;
            discount = 5;
            gst = 12;
            amount1 = amount(rate, quantity, discount, gst);
            printf("\t%0.2f\n", amount1);
            t_amount += amount1;
            w += quantity;
        }
        else if(strcmp(itemcode, "5\n") == 0)
        {
            printf("\tmonocef 200\t\t\t\t\t\t\t\t\t\t   ");
            scanf("%d", &quantity);
            getchar();
            rate = 260.00;
            discount = 12;
            gst = 12;
            amount1 = amount(rate, quantity, discount, gst);
            printf("\t%0.2f\n", amount1);
            t_amount += amount1;
            w += quantity;
        }
        else if(strcmp(itemcode, "6\n") == 0)
        {
            printf("\tLosarton \t\t\t\t\t\t\t\t\t\t   ");
            scanf("%d", &quantity);
            getchar();
            rate = 300.00;
            discount = 14;
            gst = 12;
            amount1 = amount(rate, quantity, discount, gst);
            printf("\t%0.2f\n", amount1);
            t_amount += amount1;
            w += quantity;
        }
        else if(strcmp(itemcode, "7\n") == 0)
        {
            printf("\tAsiloc (150mg)\t\t\t\t\t\t\t\t\t\t   ");
            scanf("%d", &quantity);
            getchar();
            rate = 93.00;
            discount = 10;
            gst = 12;
            amount1 = amount(rate, quantity, discount, gst);
            printf("\t%0.2f\n", amount1);
            t_amount += amount1;
            w += quantity;
        }
        else if(strcmp(itemcode, "8\n") == 0)
        {
            printf("\tZerodal-P\t\t\t\t\t\t\t\t\t\t   ");
            scanf("%d", &quantity);
            getchar();
            rate = 170.00;
            discount = 12;
            gst = 12;
            amount1 = amount(rate, quantity, discount, gst);
            printf("\t%0.2f\n", amount1);
            t_amount += amount1;
            w += quantity;
        }
        else if(strcmp(itemcode, "9\n") == 0)
        {
            printf("\tPentop-D\t\t\t\t\t\t\t\t\t\t   ");
            scanf("%d", &quantity);
            getchar();
            rate = 107.00;
            discount = 7;
            gst = 12;
            amount1 = amount(rate, quantity, discount, gst);
            printf("\t%0.2f\n", amount1);
            t_amount += amount1;
            w += quantity;
        }
        else if(strcmp(itemcode, "10\n") == 0)
        {
            printf("\tOflooxocin)\t\t\t\t\t\t\t\t\t\t   ");
            scanf("%d", &quantity);
            getchar();
            rate = 200.00;
            discount = 9;
            gst = 12;
            amount1 = amount(rate, quantity, discount, gst);
            printf("\t%0.2f\n", amount1);
            t_amount += amount1;
            w += quantity;
        }
        else if(strcmp(itemcode, " \n") == 0)
        {
            printf("TOTAL AMOUNT :\t%0.2f\n", t_amount);
            printf("----------------------------------------------------------------------------------------------------------------\n");
            j = -1;
        }
        else
        {
            printf("PRODUCT DOES NOT EXIST\n");
        }
    }
    printf("Total number of items sold = %d\n", w);
    printf("BALANCE DUE                = %0.2f\n", t_amount);
    newt_amount = t_amount;
    float_part = t_amount - newt_amount;
    if(float_part > 0.50)
        newt_amount += 1;
    printf("BALANCE DUE AFTER ROUNDING = %ld\n", newt_amount);
    A:
    printf("CASH RECEIVED              = ");
    scanf("%ld", &cash_received);
    if(cash_received < newt_amount)
    {
        printf("Amount insufficient. Please provide more money.\n");
        goto A;
    }
    printf("CHANGE TO BE RETURNED      = %ld\n", cash_received - newt_amount);
    printf("----------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\tCustomer Care Phone # : 9915042168\n");
    printf("\t\t\tCustomer Care E-mail : lakshayjainfzr@gmail.com\n");
    printf("\t\t\tStore Phone # : 080-23316509\n");
    printf("\n\t\t\tCALL FOR FREE HOME DELIVERY.\n");
    printf("\n\t\t\t\tNo cash refunds.\n");
    printf("\t\t\tTerms and conditions apply.*\n");
    printf("\t\t\t** Thank you for shopping with us **\n");
    printf("\n*Any goods purchased from us can be exchanged along with presenting the original cash memo within 15 days from the date of purchase on any working day. Any electrical appliance purchased, is eligible for repair under warranty only if the original cash memo is shown.\n");
}
float amount(float p, int q, float r, float s)
{
    float z;
    z = ((p * q) - (p * q * r / 100)) + (((p * q) - (p * q * r / 100)) * s / 100);
    return z;
}