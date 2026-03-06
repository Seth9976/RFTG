// 函数名称: __nan2
// 虚拟地址: 0x6886e7
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double__nan2(void* arg1 @ ebp, int80_t arg2 @ st0, long double arg3 @ st1)
{
    // 第一条实际指令: *(arg1 - 0x9e) = arg2
    *(arg1 - 0x9e) = arg2
    long double x87_r0 = *(arg1 - 0x9e)
    
    if ((*(arg1 - 0x97) & 0x40) != 0)
        long double x87_r0_1 = arg3
        arg3 = x87_r0
        *(arg1 - 0x9e) = x87_r0_1
        x87_r0 = *(arg1 - 0x9e)
    
    if ((*(arg1 - 0x97) & 0x40) == 0 || (*(arg1 - 0x97) & 0x40) == 0)
        *(arg1 - 0x90) = 1
    else
        *(arg1 - 0x90) = 7
    
    return arg3 + x87_r0
}
