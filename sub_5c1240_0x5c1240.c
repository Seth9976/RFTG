// 函数名称: sub_5c1240
// 虚拟地址: 0x5c1240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c1240(char* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t temp0 = *(arg1 + 0xc)
    int32_t temp0 = *(arg1 + 0xc)
    
    if (arg3 u>= temp0 && (arg3 u> temp0 || arg2 u> *(arg1 + 8)))
        *arg1 = 0
        return 0xffffffff
    
    *arg1 = 1
    *(arg1 + 0x10) = arg2
    *(arg1 + 0x14) = arg3
    return 0
}
