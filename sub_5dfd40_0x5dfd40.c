// 函数名称: sub_5dfd40
// 虚拟地址: 0x5dfd40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dfd40(void* arg1)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t eax = *(edi + 0x18)
    int32_t esi = *(edi + 0x10)
    int16_t* edx = esi + eax - 2
    int32_t* esi_1 = esi + (eax << 1) - 4
    uint32_t i_2 = eax u>> 1
    
    if (i_2 != 0)
        uint32_t i_1 = i_2
        uint32_t i
        
        do
            int32_t eax_2 = sx.d(*edx) << 0x10
            *esi_1 =
                ((eax_2 & 0xff0000) | eax_2 u>> 0x10) u>> 8 | ((eax_2 & 0xff00) | eax_2 << 0x10) << 8
            edx -= 2
            esi_1 -= 4
            i = i_1
            i_1 -= 1
        while (i != 1)
        edi = arg1
    
    int32_t eax_4 = *(edi + 0x18)
    *(edi + 0x50) += 1
    *(edi + 0x18) = eax_4 * 2
    int32_t result = *(edi + 0x50)
    
    if (*(edi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edi + (result << 2) + 0x28))(edi, 0x9020)
}
