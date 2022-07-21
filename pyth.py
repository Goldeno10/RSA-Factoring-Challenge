#!/usr/bin/python3

def factorizer(num=4, line=1):
#      check_arg(num, line_num);
#        n = atoi(num);
    b = 0;
    for i in range(num//2,1, -1):
        for x in range(1, num):
#             if (check(i) && check(x)
            ans = i*x;
            if ans == num:
                print(f"{num} = {i}*{x}\n")
                b = 1;
                break
                x += 1
        if b == 1:
            return
        i += 1

    print(f"{num} has no rsa factors\n");

#factorizer(1718944270642558716715)
factorizer(999)


"""
bool check(int factor)
{
        int i;

        for (i = 2; i < factor; i++)
        {
                if((factor % i) == 0)
                {
                        return(0);
                }
        }
        return(1);
}
"""
