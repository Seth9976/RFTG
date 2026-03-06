// 函数名称: sub_678f40
// 虚拟地址: 0x678f40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_678f40(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: void* eax_1 = *arg1
    void* eax_1 = *arg1
    int32_t* ecx = *(eax_1 + 0x14)
    char* esi
    
    if (ecx s<= 0 || ecx s> *(eax_1 + 0x74))
        int32_t esi_1 = *(eax_1 + 0x78)
        
        if (esi_1 == 0)
            *(eax_1 + 0x18) = ecx
            esi = **(eax_1 + 0x70)
        else
            int32_t edx_2 = *(eax_1 + 0x7c)
            
            if (ecx s>= edx_2 && ecx s<= *(eax_1 + 0x80))
                esi = *(esi_1 + ((ecx - edx_2) << 2))
                goto label_678f7c
            
            *(eax_1 + 0x18) = ecx
            esi = **(eax_1 + 0x70)
    else
        esi = *(*(eax_1 + 0x70) + (ecx << 2))
    label_678f7c:
        
        if (esi == 0)
            *(eax_1 + 0x18) = ecx
            esi = **(eax_1 + 0x70)
    
    ecx.b = *esi
    char* edx_3 = esi
    
    while (ecx.b != 0)
        edx_3 = &edx_3[1]
        
        if (ecx.b == 0x25)
            if (*edx_3 != 0x73)
                break
            
            void* __saved_edi_1 = eax_1 + 0x18
            return sub_5a733b(arg2, esi)
        
        ecx.b = *edx_3
    
    int32_t __saved_edi = *(eax_1 + 0x34)
    int32_t var_10 = *(eax_1 + 0x30)
    int32_t var_14 = *(eax_1 + 0x2c)
    int32_t var_18 = *(eax_1 + 0x28)
    int32_t var_1c = *(eax_1 + 0x24)
    int32_t var_20 = *(eax_1 + 0x20)
    int32_t var_24 = *(eax_1 + 0x1c)
    int32_t var_28 = *(eax_1 + 0x18)
    return sub_5a733b(arg2, esi)
}
