// 函数名称: sub_5deea0
// 虚拟地址: 0x5deea0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

CRITICAL_SECTION**sub_5deea0()
{
    // 第一条实际指令: int32_t var_8 = 0x14
    int32_t var_8 = 0x14
    CRITICAL_SECTION** result = sub_5d0ac0()
    
    if (result == 0)
        sub_5cd050(0)
    else
        *result = sub_5d1140()
        result[3] = sub_5dac50(0)
        void** eax_2 = sub_5dac50(0)
        bool cond:0_1 = *result == 0
        result[4] = eax_2
        result[2] = 0
        result[1] = 0
        
        if (cond:0_1 || result[3] == 0 || eax_2 == 0)
            sub_5ded10(result)
            return 0
    
    return result
}
