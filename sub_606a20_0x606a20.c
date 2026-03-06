// 函数名称: sub_606a20
// 虚拟地址: 0x606a20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_606a20(char* arg1)
{
    // 第一条实际指令: void* eax_1 = **(arg1 + 0x34)
    void* eax_1 = **(arg1 + 0x34)
    
    if (eax_1 == 0)
        return 0xffffffff
    
    void* edi = *(eax_1 + 4)
    
    if (*(*(arg1 + 4) + 8) != 0x20)
        return 0xffffffff
    
    int32_t edx = *(edi + 0x10)
    uint32_t ecx_1 = zx.d(*(edi + 9))
    int32_t esi = *(edi + 0xc)
    int32_t eax_6 = esi | edx | *(edi + 0x14)
    int32_t (* var_24)(int32_t arg1, int32_t* arg2, int32_t arg3, void* arg4, void* arg5)
    int32_t (* var_20)(int32_t arg1, int32_t* arg2, int32_t arg3, void* arg4, void* arg5)
    void* eax_10
    
    if (ecx_1 == 2)
        if (eax_6 == 0x7fff)
            if (edx != 0x3e0 && esi != 0x3e0 && *(edi + 0x14) != 0x3e0)
                return 0xffffffff
            
            var_24 = sub_606680
        else
            if (eax_6 != 0xffff || (edx != 0x7e0 && esi != 0x7e0 && *(edi + 0x14) != 0x7e0))
                return 0xffffffff
            
            var_24 = sub_6065a0
        
        var_20 = sub_6063d0
        eax_10 = (*(arg1 + 8) * 6 + 8) * *(arg1 + 0xc) + 2
    else
        if (ecx_1 != 4 || eax_6 != 0xffffff)
            return 0xffffffff
        
        var_20 = sub_606870
        var_24 = sub_606870
        eax_10 = (((*(arg1 + 8) + 1) * *(arg1 + 0xc)) << 3) + 4
    
    void* var_48 = eax_10 + 0x1c
    char* eax_17 = sub_5d0ac0()
    
    if (eax_17 == 0)
        sub_5cd050(eax_17)
        return 0xffffffff
    
    *eax_17 = *(edi + 9)
    *(eax_17 + 4) = *(edi + 0xc)
    *(eax_17 + 8) = *(edi + 0x10)
    *(eax_17 + 0xc) = *(edi + 0x14)
    *(eax_17 + 0x10) = *(edi + 0x18)
    eax_17[0x14] = *(edi + 0x1c)
    eax_17[0x15] = *(edi + 0x1d)
    eax_17[0x16] = *(edi + 0x1e)
    eax_17[0x17] = *(edi + 0x1f)
    eax_17[0x18] = *(edi + 0x20)
    eax_17[0x19] = *(edi + 0x21)
    eax_17[0x1a] = *(edi + 0x22)
    eax_17[0x1b] = *(edi + 0x23)
    int32_t ecx_10 = *(arg1 + 8)
    void* edx_8 = *(arg1 + 4)
    void* esi_1 = &eax_17[0x1c]
    int32_t i_2 = *(arg1 + 0xc)
    int32_t var_10 = *(arg1 + 0x14)
    void* var_30 = esi_1
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            int32_t var_28_1 = 0
            int32_t var_c_1 = 0
            
            do
                int32_t edi_1 = var_c_1
                int32_t ebx_1 = ecx_10
                int32_t var_2c_1 = edi_1
                int32_t eax_20
                
                if (edi_1 s>= ebx_1)
                    eax_20 = var_10
                else
                    eax_20 = var_10
                    
                    while ((*(eax_20 + (edi_1 << 2)) & *(edx_8 + 0x18)) u>> *(edx_8 + 0x23) != 0xff)
                        edi_1 += 1
                        
                        if (edi_1 s>= ebx_1)
                            break
                    
                    var_c_1 = edi_1
                
                int32_t var_8_2 = edi_1
                
                if (edi_1 s< ebx_1)
                    do
                        ebx_1 = ecx_10
                        
                        if ((*(eax_20 + (edi_1 << 2)) & *(edx_8 + 0x18)) u>> *(edx_8 + 0x23) != 0xff)
                            break
                        
                        edi_1 += 1
                    while (edi_1 s< ebx_1)
                    
                    var_c_1 = edi_1
                
                int32_t ecx_17 = var_8_2 - var_2c_1
                
                if (ecx_17 == ebx_1)
                    var_28_1 = 1
                
                int32_t edi_2 = edi_1 - var_8_2
                
                if (ecx_17 s> 0xff)
                    int32_t j_2 = (ecx_17 - 0x100) u/ 0xff + 1
                    ecx_17 += j_2 * 0xffffff01
                    int32_t j
                    
                    do
                        if (*(edi + 9) != 4)
                            *esi_1 = 0xff
                            esi_1 += 2
                        else
                            *esi_1 = 0xff
                            *(esi_1 + 2) = 0
                            esi_1 += 4
                        
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                
                int32_t ebx_5 = edi_2
                
                if (edi_2 s>= 0xff)
                    ebx_5 = 0xff
                
                void* esi_2
                
                if (*(edi + 9) != 4)
                    *esi_1 = ecx_17.b
                    *(esi_1 + 1) = ebx_5.b
                    esi_2 = esi_1 + 2
                else
                    *esi_1 = ecx_17.w
                    *(esi_1 + 2) = ebx_5.w
                    esi_2 = esi_1 + 4
                
                int32_t var_8_3 = var_8_2 + ebx_5
                esi_1 = esi_2 + var_20(esi_2, var_10 + (var_8_2 << 2), ebx_5, edx_8, edi)
                int32_t edi_3 = edi_2 - ebx_5
                
                if (edi_2 != ebx_5)
                    int32_t ebx_7
                    int32_t temp4_1
                    
                    do
                        ebx_7 = edi_3
                        
                        if (edi_3 s>= 0xff)
                            ebx_7 = 0xff
                        
                        void* esi_3
                        
                        if (*(edi + 9) != 4)
                            *esi_1 = 0
                            *(esi_1 + 1) = ebx_7.b
                            esi_3 = esi_1 + 2
                        else
                            *esi_1 = 0
                            *(esi_1 + 2) = ebx_7.w
                            esi_3 = esi_1 + 4
                        
                        int32_t eax_30 = var_20(esi_3, var_10 + (var_8_3 << 2), ebx_7, edx_8, edi)
                        var_8_3 += ebx_7
                        esi_1 = esi_3 + eax_30
                        temp4_1 = edi_3
                        edi_3 -= ebx_7
                    while (temp4_1 != ebx_7)
            while (var_c_1 s< ecx_10)
            
            esi_1 += esi_1 & 2
            int32_t edi_4 = 0
            int32_t var_c_4 = 0
            
            do
                int32_t edx_27 = ecx_10
                int32_t var_2c_2 = edi_4
                
                if (edi_4 s< edx_27)
                    while (((*(var_10 + (edi_4 << 2)) & *(edx_8 + 0x18)) u>> *(edx_8 + 0x23)) - 1
                            u>= 0xfe)
                        edi_4 += 1
                        
                        if (edi_4 s>= edx_27)
                            break
                    
                    var_c_4 = edi_4
                
                int32_t var_8_4 = edi_4
                
                if (edi_4 s< edx_27)
                    do
                        edx_27 = ecx_10
                        
                        if (((*(var_10 + (edi_4 << 2)) & *(edx_8 + 0x18)) u>> *(edx_8 + 0x23)) - 1
                                u>= 0xfe)
                            break
                        
                        edi_4 += 1
                    while (edi_4 s< edx_27)
                    
                    var_c_4 = edi_4
                
                int32_t ecx_31 = var_8_4 - var_2c_2
                int32_t ebx_12
                ebx_12.b = ecx_31 == edx_27
                var_28_1 &= ebx_12
                int32_t ebx_14 = edi_4 - var_8_4
                
                if (ecx_31 s> 0xffff)
                    int32_t j_3 = (ecx_31 - 0x10000) u/ 0xffff + 1
                    ecx_31 += j_3 * 0xffff0001
                    int32_t j_1
                    
                    do
                        *esi_1 = 0xffff
                        *(esi_1 + 2) = 0
                        esi_1 += 4
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
                
                int32_t var_2c_3 = ebx_14
                
                if (ebx_14 s>= 0xffff)
                    var_2c_3 = 0xffff
                
                *esi_1 = ecx_31.w
                *(esi_1 + 2) = var_2c_3.w
                esi_1 = esi_1 + 4 + var_24(esi_1 + 4, var_10 + (var_8_4 << 2), var_2c_3, edx_8, edi)
                int32_t var_8_5 = var_8_4 + var_2c_3
                int32_t ebx_15 = ebx_14 - var_2c_3
                
                if (ebx_14 != var_2c_3)
                    int32_t edi_5
                    int32_t temp8_1
                    
                    do
                        edi_5 = ebx_15
                        
                        if (ebx_15 s>= 0xffff)
                            edi_5 = 0xffff
                        
                        *esi_1 = 0
                        *(esi_1 + 2) = edi_5.w
                        int32_t eax_43 = var_24(esi_1 + 4, var_10 + (var_8_5 << 2), edi_5, edx_8, edi)
                        var_8_5 += edi_5
                        esi_1 = esi_1 + 4 + eax_43
                        temp8_1 = ebx_15
                        ebx_15 -= edi_5
                    while (temp8_1 != edi_5)
                    edi_4 = var_c_4
                
                if (var_28_1 == 0)
                    var_30 = esi_1
            while (edi_4 s< ecx_10)
            
            i = i_1
            i_1 -= 1
            var_10 += *(arg1 + 0x10) s>> 2 << 2
        while (i != 1)
    
    void* esi_6
    
    if (*(edi + 9) != 4)
        *var_30 = 0
        esi_6 = var_30 + 2
    else
        *var_30 = 0
        esi_6 = var_30 + 4
    
    if ((*arg1 & 1) == 0)
        int32_t var_48_6 = *(arg1 + 0x14)
        sub_5d0af0()
        *(arg1 + 0x14) = 0
    
    void* var_48_7 = esi_6 - eax_17
    char* var_4c_5 = eax_17
    char* eax_47 = sub_5d0ae0()
    
    if (eax_47 == 0)
        eax_47 = eax_17
    
    *(*(arg1 + 0x34) + 0xc) = eax_47
    return 0
}
