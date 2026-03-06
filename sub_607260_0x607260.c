// 函数名称: sub_607260
// 虚拟地址: 0x607260
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_607260(void* arg1)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 4)
    int32_t eax = *(arg1 + 4)
    char* esi = *(*(arg1 + 0x34) + 0xc)
    int32_t edx = *(arg1 + 8)
    uint32_t eax_1 = zx.d(*esi)
    int32_t (* var_1c)(void* arg1, int32_t arg2, int32_t arg3, void* arg4, void* arg5)
    int32_t (* var_c)(void* arg1, int16_t* arg2, void* arg3, void* arg4, void* arg5)
    
    if (eax_1 != 2)
        var_1c = sub_606930
        var_c = sub_606930
    else
        var_c = sub_6064b0
        var_1c = sub_606760
    
    int32_t __saved_ebx = *(arg1 + 0xc) * *(arg1 + 0x10)
    int32_t result = sub_5d0ac0()
    *(arg1 + 0x14) = result
    
    if (result == 0)
        return result
    
    int32_t __saved_ebx_1 = *(arg1 + 0xc) * *(arg1 + 0x10)
    int32_t var_30 = 0
    int32_t result_1 = result
    sub_5cd100()
    int32_t var_8 = *(arg1 + 0x14)
    void* esi_1 = &esi[0x1c]
    
    while (true)
        int32_t edi_1 = 0
        
        do
            uint32_t ebx_1
            
            if (eax_1 != 2)
                ebx_1 = zx.d(*(esi_1 + 2))
                edi_1 += zx.d(*esi_1)
                esi_1 += 4
            else
                ebx_1 = zx.d(*(esi_1 + 1))
                edi_1 += zx.d(*esi_1)
                esi_1 += 2
            
            if (ebx_1 != 0)
                esi_1 += var_c(var_8 + (edi_1 << 2), esi_1, ebx_1, esi, eax)
                edi_1 += ebx_1
            else if (edi_1 == 0)
                return 1
        while (edi_1 s< edx)
        
        if (eax_1 == 2)
            esi_1 += esi_1 & 2
        
        int32_t ebx_2 = 0
        
        do
            uint32_t edi_2 = zx.d(*(esi_1 + 2))
            ebx_2 += zx.d(*esi_1)
            esi_1 += 4
            
            if (edi_2 != 0)
                esi_1 += var_1c(var_8 + (ebx_2 << 2), esi_1, edi_2, esi, eax)
                ebx_2 += edi_2
        while (ebx_2 s< edx)
        
        var_8 += *(arg1 + 0x10) s>> 2 << 2
}
