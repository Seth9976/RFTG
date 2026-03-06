// 函数名称: sub_66e2f0
// 虚拟地址: 0x66e2f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_66e2f0(int32_t* arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t i_5 = *esi
    
    if (*(esi + 9) != 8)
        return 
    
    char* eax
    eax.b = esi[2].b
    uint32_t eax_7
    
    if (eax.b == 2 && arg3 != 0)
        char* ecx_1 = arg2
        char* edi = ecx_1
        
        if (i_5 != 0)
            int32_t i_3 = i_5
            int32_t i
            
            do
                eax.b = ((((zx.d(*ecx_1) & 0xf8) << 5 | (zx.d(ecx_1[1]) & 0xf8)) * 4)
                    | (zx.d(ecx_1[2]) s>> 3 & 0x1f))[arg3]
                *edi = eax.b
                ecx_1 = &ecx_1[3]
                edi = &edi[1]
                i = i_3
                i_3 -= 1
            while (i != 1)
            esi = arg1
        
        eax.b = *(esi + 9)
        *(esi + 0xb) = eax.b
        esi[2].b = 3
        *(esi + 0xa) = 1
        eax_7 = zx.d(eax.b)
        
        if (eax.b u>= 8)
            esi[1] = (eax_7 u>> 3) * i_5
            return 
        
        esi[1] = (eax_7 * i_5 + 7) u>> 3
        return 
    
    if (eax.b == 6 && arg3 != 0)
        char* ecx_2 = arg2
        char* edi_1 = ecx_2
        
        if (i_5 != 0)
            int32_t i_4 = i_5
            int32_t i_1
            
            do
                int32_t edx_5
                edx_5.b = ((((zx.d(*ecx_2) & 0xf8) << 5 | (zx.d(ecx_2[1]) & 0xf8)) * 4)
                    | (zx.d(ecx_2[2]) s>> 3 & 0x1f))[arg3]
                *edi_1 = edx_5.b
                ecx_2 = &ecx_2[4]
                edi_1 = &edi_1[1]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
            esi = arg1
        
        eax.b = *(esi + 9)
        *(esi + 0xb) = eax.b
        esi[2].b = 3
        *(esi + 0xa) = 1
        eax_7 = zx.d(eax.b)
        
        if (eax.b u>= 8)
            esi[1] = (eax_7 u>> 3) * i_5
            return 
        
        esi[1] = (eax_7 * i_5 + 7) u>> 3
        return 
    
    if (eax.b != 3 || arg4 == 0)
        return 
    
    eax = arg2
    
    if (i_5 == 0)
        return 
    
    int32_t i_2
    
    do
        uint32_t ecx_3
        ecx_3.b = *(zx.d(*eax) + arg4)
        *eax = ecx_3.b
        eax = &eax[1]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
}
