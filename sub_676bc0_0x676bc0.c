// 函数名称: sub_676bc0
// 虚拟地址: 0x676bc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_676bc0(void* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t edx = arg3[1]
    int32_t edx = arg3[1]
    int32_t ebx = *arg3
    int32_t* ecx = arg3[2]
    int32_t edx_1 = *ecx
    int32_t edx_2 = ecx[1]
    int32_t edx_3 = ecx[2]
    int32_t i_7 = ecx[4]
    __builtin_memset(arg1 + 0xb3c, 0, 0x20)
    *(ebx + (*(arg1 + (*(arg1 + 0x1454) << 2) + 0xb5c) << 2) + 2) = 0
    int32_t i_1 = 0
    int32_t ecx_3 = *(arg1 + 0x1454) + 1
    int32_t var_2c = ebx
    int32_t i_6 = i_7
    int32_t i_4 = 0
    
    if (ecx_3 s>= 0x23d)
        return 
    
    void* var_10_1 = arg1 + (ecx_3 << 2) + 0xb5c
    int32_t i_3 = 0x23d - ecx_3
    int32_t var_14_1 = 0x23d + 0
    int32_t i
    
    do
        int32_t edx_7 = *var_10_1
        int32_t i_8 = zx.d(*(ebx + (zx.d(*(ebx + (edx_7 << 2) + 2)) << 2) + 2)) + 1
        
        if (i_8 s> i_7)
            i_1 += 1
            i_8 = i_7
            i_4 = i_1
        
        *(ebx + (edx_7 << 2) + 2) = i_8.w
        
        if (edx_7 s<= edx)
            *(arg1 + (i_8 << 1) + 0xb3c) += 1
            int32_t esi = 0
            
            if (edx_7 s>= edx_3)
                esi = *(edx_2 + ((edx_7 - edx_3) << 2))
            
            uint32_t edi_2 = zx.d(*(ebx + (edx_7 << 2)))
            *(arg1 + 0x16a8) += (i_8 + esi) * edi_2
            
            if (edx_1 != 0)
                *(arg1 + 0x16ac) += (zx.d(*(edx_1 + (edx_7 << 2) + 2)) + esi) * edi_2
            
            i_7 = i_6
            i_1 = i_4
        
        var_10_1 += 4
        i = i_3
        i_3 -= 1
    while (i != 1)
    
    if (i_1 == 0)
        return 
    
    void* edi_3 = arg1 + (i_7 << 1) + 0xb3c
    
    do
        int32_t ecx_12 = i_6 - 1
        void* edx_11 = arg1 + (ecx_12 << 1) + 0xb3c
        
        if (*(arg1 + (ecx_12 << 1) + 0xb3c) == 0)
            do
                edx_11 -= 2
                ecx_12 -= 1
            while (*edx_11 == 0)
        
        *(arg1 + (ecx_12 << 1) + 0xb3e) += 2
        *(arg1 + (ecx_12 << 1) + 0xb3c) -= 1
        *edi_3 -= 1
        i_1 -= 2
    while (i_1 s> 0)
    
    int32_t i_5 = i_6
    
    if (i_5 == 0)
        return 
    
    void* var_18_1 = edi_3
    int32_t i_2
    
    do
        uint32_t j = zx.d(*edi_3)
        uint32_t j_1 = j
        
        if (j != 0)
            void* esi_3 = arg1 + (var_14_1 << 2) + 0xb5c
            
            do
                int32_t ecx_14 = *(esi_3 - 4)
                var_14_1 -= 1
                esi_3 -= 4
                
                if (ecx_14 s<= edx)
                    uint32_t edi_4 = zx.d(*(ebx + (ecx_14 << 2) + 2))
                    int16_t* esi_4 = ebx + (ecx_14 << 2) + 2
                    
                    if (edi_4 != i_5)
                        ebx = var_2c
                        *(arg1 + 0x16a8) += (i_5 - edi_4) * zx.d(*(ebx + (ecx_14 << 2)))
                        *esi_4 = i_5.w
                    
                    j_1 -= 1
                    j = j_1
            while (j != 0)
        
        edi_3 = var_18_1 - 2
        i_2 = i_5
        i_5 -= 1
        var_18_1 = edi_3
    while (i_2 != 1)
}
