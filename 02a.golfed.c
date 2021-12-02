main(){int h=0,d=0,n;char*s;while(scanf("%s%u",s,&n)==2)if('f'==*s)h+=n;else d=('d'==*s)?d+n:((d>n)?(d-n):0);printf("%u",h*d);}
