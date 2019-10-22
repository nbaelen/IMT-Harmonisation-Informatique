//
// Created by Nathan Baelen on 16/10/2019.
//

int n1,n2,n;
float r;
int operations() {
    n1=5;n2=16;
    printf("(1) : %d\n",n1*n2);
    printf("(2) : %d\n",n2/n1);
    n=n2/n1;printf("(3) : %d\n",n);
    r=n2/n1;printf("(4) : %g\n",r);
    n=n2/(float)n1;printf("(5) : %d\n",n);
    r=n2/(float)n1;printf("(6) : %g\n",r);
    printf("(7) : %d\n",n1/4);
    printf("(8) : %f\n",n1/4.0);
    printf("(9) : %f\n",n1/4.);
    printf("(10) : %f\n",n1/(float)4);
    printf("(11) : %lf\n",n1/(double)4);
    printf("(13) : %d\n",n1%4);
    printf("(14) : %d\n",n1&n2);
    printf("(15) : %d\n",n1|n2);
    printf("(16) : %d\n",n1^n2);
    printf("(17) : %d\n",n1<<2);
    printf("(18) : %d\n",n1>>3);
    printf("(19) : %d\n",n1==n2);
    printf("(20) : %d\n",n1!=n2);
    printf("(21) : %d\n",n1>n2);
    printf("(22) : %d\n",n1>=n2);
    printf("(23) : %d\n",n2>=n1 && n1==n2);
    printf("(24) : %d\n",n2>=n1 || n1==n2);
    printf("(25) : %d\n",n1&&n2);
    printf("(26) : %d\n",n1||n2);
    printf("(27) : %d\n",n1==12);
    printf("(28) : %d\n",n1=12);
    return 0;
}