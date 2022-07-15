//
//  main.c
//  Cars for Sale
//
//  Created by Hunter Snyder on 2/20/22.
//

#include <stdio.h>

#define APPRECIATION_RATE_DC = 302 / 100;
#define APPRECIATION_RATE_PC = 291 / 100;
#define APPRECIATION_RATE_FM = 201 / 100;
#define APPRECIATION_RATE_PGTO = 251 / 100;
#define APPRECIATION_RATE_CN = 335 / 100;

int main()
{
    int dc2004Retail = 2500;
    int py2004Retail = 7400;
    int fm2004Retail = 55000;
    int pgto2004Retail = 29000;
    int cn2004Retail = 2500;
    int dc2008Retail = 10875;
    int py2008Retail = 177684;
    int fm2008Retail = 28934;
    int pgto2008Retail = 165550;
    int cn2008Retail = 101790;
    int changeInValue;
    int appRateDc;
    int dcAppPer;
    int numberOfYears = 4;
    int appValue2008;
    
    appRateDc = dc2004Retail - dc2004Retail;
    dcAppPer = (appRateDc / dc2004Retail) * 100;
    
    printf("App rate %d%", dcAppPer);
    
    
    /*changeInValue = dc2008Retail - dc2004Retail;
    appRate = (changeInValue / dc2004Retail) * 100;
    appFactor = (1 + appRate) * numberOfYears;
    appValue2008 = appFactor * dc2004Retail;
    
    printf("%d", appValue2008);*/
    
    
    
    
    
    return 0;
}
