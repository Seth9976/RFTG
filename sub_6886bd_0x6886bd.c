// 函数名称: sub_6886bd
// 虚拟地址: 0x6886bd
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_6886bd(void* arg1 @ ebp, long double arg2 @ st0, int80_t arg3 @ st1)
{
    // 第一条实际指令: *(arg1 - 0x9e) = arg3
    *(arg1 - 0x9e) = arg3
    long double x87_r0_1 = *(arg1 - 0x9e)
    
    if ((*(arg1 - 0x97) & 0x40) == 0)
        *(arg1 - 0x90) = 1
    else
        *(arg1 - 0x90) = 7
    
    return arg2 + x87_r0_1
}
