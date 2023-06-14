#include <stdio.h>
int main()
{
    int choice, qty, total, totalamt;
    char ch;
    do
    {
    Menu:
        printf("\n---------- Menu ----------\n");
        printf("1.Pizza           price = 180rs/pcs\n");
        printf("2.Burger          price = 100rs/pcs\n");
        printf("3.Dosa            price = 120rs/pcs\n");
        printf("4.Idli            price = 50rs/pcs\n");
        printf("\nPlease Enter your choice... : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("\nYou have selected Pizza.\n");
            printf("Enter the quantity : ");
            scanf("%d", &qty);
            for (int i = 1; i <= qty; i++)
            {
                total = 180 * qty;
            }
            printf("Amount : %d", total);
            break;
        }
        case 2:
        {
            printf("\nYou have selected Burger.\n");
            printf("Enter the quantity : ");
            scanf("%d", &qty);
            for (int i = 1; i <= qty; i++)
            {
                total = 100 * qty;
            }
            printf("Amount : %d", total);
            break;
        }
        case 3:
        {
            printf("\nYou have selected Dosa.\n");
            printf("Enter the quantity : ");
            scanf("%d", &qty);
            for (int i = 1; i <= qty; i++)
            {
                total = 120 * qty;
            }
            printf("Amount : %d", total);
            break;
        }
        case 4:
        {
            printf("\nYou have selected Idli.\n");
            printf("Enter the quantity : ");
            scanf("%d", &qty);
            for (int i = 1; i <= qty; i++)
            {
                total = 50 * qty;
            }
            printf("Amount : %d", total);
            break;
        }
        default:
        {
            printf("Not exists in menu...");
            printf("\n");
            goto Menu;
            break;
        }
        }

        totalamt += total;
        printf("\nTotal amount is = %d", totalamt);
        printf("\nDo you want place more orders ? y & n : ");
        scanf("%s", &ch);

    } while (ch != 'n');
    if (ch == 'n')
    {
        printf("\nYour Bill");
        printf("\nTotal amount is = %d", totalamt);
        printf("\nThank You...\2");
    }

    return 0;
}
