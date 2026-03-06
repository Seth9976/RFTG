// 函数名称: sub_5cdd90
// 虚拟地址: 0x5cdd90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_5cdd90(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* esi = arg1
    char* esi = arg1
    int32_t edi = 0
    char* var_c = esi
    int32_t var_8 = 0
    
    if (*esi == 0x2d)
        var_8 = 1
        esi = &esi[1]
    
    int32_t entry_ebx
    
    if (entry_ebx == 0x10)
        int32_t var_18_1 = 2
        void* const var_1c_1 = &data_88c83c
        char* var_20_1 = esi
        
        if (sub_5cd5d0() == 0)
            esi = &esi[2]
    
    while (true)
        uint32_t var_18_2 = zx.d(*esi)
        
        if (sub_5dece0() == 0)
            if (entry_ebx != 0x10)
                break
            
            int32_t eax_2
            eax_2.b = *esi
            
            if (eax_2.b s>= 0x41 && eax_2.b s<= 0x46)
                edi = edi * entry_ebx + sx.d(eax_2.b) - 0x37
                esi = &esi[1]
                continue
            
            if (eax_2.b s< 0x61)
                break
            
            if (eax_2.b s> 0x66)
                break
            
            edi = edi * entry_ebx + sx.d(eax_2.b) - 0x57
            esi = &esi[1]
        else
            edi = edi * entry_ebx + sx.d(*esi) - 0x30
            esi = &esi[1]
    
    if (arg2 != 0)
        if (var_8 != 0 && edi != 0)
            edi = neg.d(edi)
        
        *arg2 = edi
    
    return esi - var_c
}
