// 函数名称: sub_688692
// 虚拟地址: 0x688692
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_688692(void* arg1 @ ebp, int80_t arg2 @ st0)
{
    // 第一条实际指令: *(arg1 - 0x9e) = arg2
    *(arg1 - 0x9e) = arg2
    long double result = *(arg1 - 0x9e)
    
    if ((*(arg1 - 0x97) & 0x40) == 0)
        *(arg1 - 0x90) = 1
        return result + fconvert.t(1.0)
    
    *(arg1 - 0x90) = 7
    return result
}
