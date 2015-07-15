//
//  main.c
//  kadai06B.c
//
//  Created by yuki koshima on 2015/07/14.
//  Copyright (c) 2015年 後間雄樹. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int month;
    
    printf("月入力-->");
    scanf("%d",&month);
    
    switch (month) {
        case 2:
            printf("28日");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30日");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31日");
            break;
        default:
            printf("月の入力エラー");
            break;
    }
    return 0;
}
