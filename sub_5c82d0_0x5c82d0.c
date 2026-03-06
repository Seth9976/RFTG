// 函数名称: sub_5c82d0
// 虚拟地址: 0x5c82d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c82d0(int32_t* arg1, char arg2, int16_t arg3)
{
    // 第一条实际指令: if (sub_5c7830(0x650, 0xffffffff) != 1)
    if (sub_5c7830(0x650, 0xffffffff) != 1)
        return 0
    
    int32_t* ecx = *arg1
    int32_t* eax_1
    eax_1.b = arg2
    int32_t var_3c = 0x650
    int32_t edx = *ecx
    ecx.w = arg3
    int32_t var_34 = edx
    char var_30 = eax_1.b
    int16_t var_2c = ecx.w
    int32_t eax_3 = sub_5c76a0(&var_3c) - 1
    int32_t eax_4 = neg.d(eax_3)
    return sbb.d(eax_4, eax_4, eax_3 != 0) + 1
}
