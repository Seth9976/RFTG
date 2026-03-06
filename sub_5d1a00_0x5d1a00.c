// 函数名称: sub_5d1a00
// 虚拟地址: 0x5d1a00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d1a00(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_esi = (data_bee778 + 1) * 0x2028
    int32_t __saved_esi = (data_bee778 + 1) * 0x2028
    int32_t var_c = data_3168018
    int32_t eax_3 = sub_5d0ae0()
    
    if (eax_3 == 0)
        sub_5cd050(0)
        return 0xffffffff
    
    int32_t edx = data_bee778
    data_3168018 = eax_3
    *(edx * 0x2028 + eax_3 + 0x2018) = 0
    int32_t* eax_5 = data_bee778 * 0x2028
    *(eax_5 + data_3168018) = arg1
    *(eax_5 + data_3168018 + 4) = arg2
    *(data_bee778 * 0x2028 + data_3168018 + 0x201c) = 0
    *(data_bee778 * 0x2028 + data_3168018 + 0x2024) = 0
    data_bee778 += 1
    return 0
}
