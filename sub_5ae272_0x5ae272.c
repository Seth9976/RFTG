// 函数名称: sub_5ae272
// 虚拟地址: 0x5ae272
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_5ae272(void* arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    sub_5abfc0(arg1 + 0x1c, 0, 0x101)
    *(arg1 + 4) = 0
    *(arg1 + 8) = 0
    *(arg1 + 0xc) = 0
    *(arg1 + 0x10) = 0
    void* edi_2 = arg1 + 0x14
    *edi_2 = 0
    *(edi_2 + 4) = 0
    void* eax_1 = arg1 + 0x1c
    int32_t i_3 = 0x101
    int32_t i
    
    do
        *eax_1 = *(0x8b8530 - arg1 + eax_1)
        eax_1 += 1
        i = i_3
        i_3 -= 1
    while (i != 1)
    void* result = arg1 + 0x11d
    int32_t i_2 = 0x100
    int32_t i_1
    
    do
        *result = *(result + 0x8b8530 - arg1)
        result += 1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    return result
}
