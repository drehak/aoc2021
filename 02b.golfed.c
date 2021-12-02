main(){int h=0,d=0,n,a=0,D;char*s;while(scanf("%s%u",s,&n)==2)if('f'==*s){h+=n;D=n*a;d=(D+d>0)?(D+d):0;}else a+=('d'==*s)?n:-n;printf("%u",h*d);}
