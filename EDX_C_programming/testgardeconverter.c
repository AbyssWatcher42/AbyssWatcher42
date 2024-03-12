#include <stdio.h>

int    main(void)
{
    int i;
    int choose_num;
    int cur_num;
    int total_num;
    double num4;
    double ans;


    i = 0;
    choose_num = 0;
    total_num = 0;
    num4 = 0; //this is where i made changes for the different outcome for each testcase.
    scanf("%d", &choose_num);
    num4 = choose_num;	 //takes in numbers of grade to put in from command line.
    while (i < choose_num)
    {
        cur_num = 0;
        scanf("%d", &cur_num);
        total_num += cur_num;
        i++;
    }
    ans = (double)total_num/num4; // total accumulated numbers divided by num4
    printf("%.2lf", (double)ans); //prints out the answer.
}
