// 函数名称: sub_440430
// 虚拟地址: 0x440430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_440430(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* entry_ebx
    int32_t eax_1 = arg1(entry_ebx + 0x20)
    int32_t var_8_1 = eax_1
    int32_t i = 1
    
    if (*(entry_ebx + 0x458) s<= 1)
        return eax_1
    
    void* esi_1 = entry_ebx + 0xd4
    
    do
        if (var_8_1 s<= arg1(esi_1))
            var_8_1 = arg1(esi_1)
        
        i += 1
        esi_1 += 0xb4
    while (i s< sx.d(*(entry_ebx + 0x458)))
    
    return var_8_1
}
