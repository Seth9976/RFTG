// 函数名称: sub_5c8950
// 虚拟地址: 0x5c8950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c8950(int32_t* arg1 @ edi, int32_t* arg2)
{
    // 第一条实际指令: int32_t i = *arg2
    int32_t i = *arg2
    
    if (i s> 0 && *arg1 != 0)
        do
            int32_t ecx_1 = *(*arg1 + (i << 2) - 4)
            i -= 1
            int32_t var_10_1 = ecx_1
            sub_5d0af0()
        while (i != 0)
    
    int32_t var_10_2 = *arg1
    int32_t result = sub_5d0af0()
    *arg1 = 0
    *arg2 = 0
    return result
}
