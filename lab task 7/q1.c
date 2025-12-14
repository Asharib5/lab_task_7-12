int main() {
    float price[10], discount, Finalprice[10], total;
    int i;
    for(i=0; i<10; i++)
    {
        printf("Enter price of product %d: ", i+1);
        scanf("%f", &price[i]);
    }
    for (i=0; i<10; i++)
    {
        if(price[i]<1000)
            discount = price[i] * 0.05;
        else if(price[i]<=3000)
            discount = price[i] * 0.10;
        else if(price[i]<=5000)
            discount = price[i] * 0.15;
        else
            discount = price[i] * 0.18;

        Finalprice[i] = price[i] - discount;
        printf("Item %d: Original = %.2f, Discounted = %.2f\n", i+1, price[i], Finalprice[i]);
        total += Finalprice[i];
    }
    printf("\nTotal Purchase Amount: Rs. %.2f\n", total);
    if (total > 25000)
        printf("Congratulations! You earned a Gold Voucher!\n");
    return 0;
}