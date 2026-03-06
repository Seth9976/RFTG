// 函数名称: sub_6753d0
// 虚拟地址: 0x6753d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_6753d0(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* entry_ebx
    void* esi = *(entry_ebx + 0x1c)
    
    if (*(esi + 0x34) == 0)
        int32_t eax_1 = (*(entry_ebx + 0x20))(*(entry_ebx + 0x28), 1 << (*(esi + 0x24)).b, 1)
        *(esi + 0x34) = eax_1
        
        if (eax_1 == 0)
            return 1
    
    if (*(esi + 0x28) == 0)
        int32_t edx_2 = 1 << (*(esi + 0x24)).b
        *(esi + 0x30) = 0
        *(esi + 0x2c) = 0
        *(esi + 0x28) = edx_2
    
    void* edi_1 = arg1 - *(entry_ebx + 0x10)
    void* eax_3 = *(esi + 0x28)
    
    if (edi_1 u>= eax_3)
        sub_5ab990(*(esi + 0x34), *(entry_ebx + 0xc) - eax_3, eax_3)
        *(esi + 0x2c) = *(esi + 0x28)
        *(esi + 0x30) = 0
        return 0
    
    void* eax_6 = eax_3 - *(esi + 0x30)
    void* var_8_1 = eax_6
    
    if (eax_6 u> edi_1)
        var_8_1 = edi_1
        eax_6 = edi_1
    
    sub_5ab990(*(esi + 0x34) + *(esi + 0x30), *(entry_ebx + 0xc) - edi_1, eax_6)
    void* edi_2 = edi_1 - var_8_1
    
    if (edi_1 != var_8_1)
        sub_5ab990(*(esi + 0x34), *(entry_ebx + 0xc) - edi_2, edi_2)
        int32_t edx_6 = *(esi + 0x28)
        *(esi + 0x30) = edi_2
        *(esi + 0x2c) = edx_6
        return 0
    
    int32_t eax_10 = *(esi + 0x28)
    *(esi + 0x30) += var_8_1
    
    if (*(esi + 0x30) == eax_10)
        *(esi + 0x30) = 0
    
    void* edx_7 = *(esi + 0x2c)
    
    if (edx_7 u< eax_10)
        *(esi + 0x2c) = edx_7 + var_8_1
    
    return 0
}
