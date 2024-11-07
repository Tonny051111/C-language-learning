#include <stdio.h>
#include <windows.h>

int main(void) 
{ 
    SetConsoleOutputCP(65001);
    
    //计数
    int i;
    i=1;

    while (1)
     {
        // 模拟按下回车键
        keybd_event(VK_RETURN, 0, 0, 0);

        // 模拟释放回车键
        keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);

        printf("回车键已敲击(%d)\n",i);

        // 等待5分钟（30000毫秒）
        Sleep(305000);  // Sleep单位是毫秒

        //计数
        i=i+1;
    }

    return 0;
}
