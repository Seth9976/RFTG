// 函数名称: sub_59ef50
// 虚拟地址: 0x59ef50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_59ef50(void* arg1 @ esi, void* arg2)
{
    // 第一条实际指令: char* eax = *(arg1 + 0xa8)
    char* eax = *(arg1 + 0xa8)
    char eax_2
    
    if (eax u< *(arg1 + 0xac))
        char ecx = *eax
        *(arg1 + 0xa8) = &eax[1]
        eax_2 = ecx
    else if (*(arg1 + 0x20) == 0)
        eax_2 = 0
    else
        int32_t eax_4 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        
        if (eax_4 != 0)
            *(arg1 + 0xa8) = arg1 + 0x28
            *(arg1 + 0xac) = eax_4 + arg1 + 0x28
        else
            *(arg1 + 0x20) = eax_4
            char* eax_6 = *(arg1 + 0xac) - 1
            *(arg1 + 0xa8) = eax_6
            *eax_6 = 0
        
        char* eax_8 = *(arg1 + 0xa8)
        char ecx_2 = *eax_8
        *(arg1 + 0xa8) = &eax_8[1]
        eax_2 = ecx_2
    
    uint32_t ecx_3 = zx.d(eax_2)
    int32_t eax_10 = 1 << ecx_3.b
    uint32_t var_10 = ecx_3 + 1
    int32_t ecx_5 = 0
    int32_t ebx_1 = (1 << (ecx_3 + 1).b) - 1
    int32_t var_20 = eax_10
    int32_t var_24 = 1
    int32_t var_14 = 0
    int32_t var_c = 0
    
    if (eax_10 s> 0)
        char* edx_3 = arg2 + 0x822
        
        do
            *edx_3 = ecx_5.b
            edx_3[1] = ecx_5.b
            *(edx_3 - 2) = 0xffff
            ecx_5 += 1
            edx_3 = &edx_3[4]
        while (ecx_5 s< eax_10)
    
    uint32_t var_8 = 0
    
    while (true)
        int32_t var_1c_1 = 0xffffffff
        int32_t var_18_1 = eax_10 + 2
        
        while (true)
            if (var_c s>= var_10)
                var_c -= var_10
                int32_t edi_11 = var_14 & ebx_1
                var_14 s>>= var_10.b
                
                if (edi_11 == eax_10)
                    var_10 = ecx_3 + 1
                    var_24 = 0
                    ebx_1 = (1 << (ecx_3 + 1).b) - 1
                    break
                
                if (edi_11 != eax_10 + 1)
                    if (edi_11 s<= var_18_1)
                        if (var_24 != 0)
                            data_273ac1c = "no clear code"
                            return 0
                        
                        if (var_1c_1 s>= 0)
                            void* edx_14 = arg2 + (var_18_1 << 2) + 0x820
                            int32_t eax_25 = var_18_1 + 1
                            var_18_1 = eax_25
                            
                            if (eax_25 s> 0x1000)
                                data_273ac1c = "too many codes"
                                return 0
                            
                            *edx_14 = var_1c_1.w
                            int32_t ecx_20
                            ecx_20.b = *(arg2 + (var_1c_1 << 2) + 0x822)
                            *(edx_14 + 2) = ecx_20.b
                            
                            if (edi_11 != eax_25)
                                *(edx_14 + 3) = *(arg2 + (edi_11 << 2) + 0x822)
                            else
                                *(edx_14 + 3) = ecx_20.b
                            
                            goto label_59f227
                        
                        if (edi_11 != var_18_1)
                        label_59f227:
                            sub_59ee60(arg2, edi_11.w)
                            
                            if ((ebx_1 & var_18_1) == 0 && var_18_1 s<= 0xfff)
                                int32_t ebx_3 = 1 << (var_10 + 1).b
                                var_10 += 1
                                ebx_1 = ebx_3 - 1
                            
                            eax_10 = var_20
                            var_1c_1 = edi_11
                            continue
                    
                    data_273ac1c = "illegal code in raster"
                    return 0
                
                int32_t ecx_25
                int32_t edx_12
                
                if (*(arg1 + 0x10) != 0)
                    edx_12 = *(arg1 + 0xac)
                    ecx_25 = edx_12 - *(arg1 + 0xa8)
                
                if (*(arg1 + 0x10) == 0 || ecx_25 s>= var_8)
                    *(arg1 + 0xa8) += var_8
                else
                    int32_t ecx_26 = *(arg1 + 0x14)
                    int32_t eax_33 = *(arg1 + 0x1c)
                    *(arg1 + 0xa8) = edx_12
                    ecx_26(eax_33, var_8 - ecx_25)
                
                while (true)
                    char* eax_38 = *(arg1 + 0xa8)
                    
                    if (eax_38 u>= *(arg1 + 0xac))
                        if (*(arg1 + 0x20) == 0)
                            return *(arg2 + 8)
                        
                        int32_t eax_35
                        eax_35, edx_12 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                        
                        if (eax_35 != 0)
                            *(arg1 + 0xa8) = arg1 + 0x28
                            *(arg1 + 0xac) = arg1 + 0x28 + eax_35
                        else
                            char* eax_37 = *(arg1 + 0xac) - 1
                            *(arg1 + 0x20) = 0
                            *(arg1 + 0xa8) = eax_37
                            *eax_37 = 0
                        
                        eax_38 = *(arg1 + 0xa8)
                    
                    edx_12.b = *eax_38
                    uint32_t eax_39 = zx.d(edx_12.b)
                    *(arg1 + 0xa8) = &eax_38[1]
                    
                    if (eax_39 s<= 0)
                        return *(arg2 + 8)
                    
                    if (*(arg1 + 0x10) != 0)
                        int32_t edi_14 = *(arg1 + 0xac)
                        edx_12 = edi_14 - &eax_38[1]
                        
                        if (edx_12 s< eax_39)
                            int32_t edx_20 = *(arg1 + 0x1c)
                            int32_t eax_41 = *(arg1 + 0x14)
                            *(arg1 + 0xa8) = edi_14
                            eax_41(edx_20, eax_39 - edx_12)
                            continue
                    
                    *(arg1 + 0xa8) = &eax_38[1 + eax_39]
            else
                uint32_t ecx_8
                
                if (var_8 == 0)
                    char* edi_2 = *(arg1 + 0xa8)
                    
                    if (edi_2 u>= *(arg1 + 0xac))
                        if (*(arg1 + 0x20) == 0)
                            return *(arg2 + 8)
                        
                        int32_t eax_12
                        eax_12, ecx_8 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                        
                        if (eax_12 != 0)
                            *(arg1 + 0xa8) = arg1 + 0x28
                            *(arg1 + 0xac) = arg1 + 0x28 + eax_12
                        else
                            *(arg1 + 0x20) = eax_12
                            char* eax_14 = *(arg1 + 0xac) - 1
                            *(arg1 + 0xa8) = eax_14
                            *eax_14 = 0
                        
                        char* eax_15 = *(arg1 + 0xa8)
                        ecx_8.b = *eax_15
                        *(arg1 + 0xa8) = &eax_15[1]
                        eax_10 = var_20
                        var_8 = zx.d(ecx_8.b)
                    else
                        ecx_8.b = *edi_2
                        *(arg1 + 0xa8) = &edi_2[1]
                        var_8 = zx.d(ecx_8.b)
                    
                    if (var_8 == 0)
                        return *(arg2 + 8)
                
                char* edi_6 = *(arg1 + 0xa8)
                var_8 -= 1
                
                if (edi_6 u< *(arg1 + 0xac))
                    ecx_8.b = *edi_6
                    *(arg1 + 0xa8) = &edi_6[1]
                    var_14 |= zx.d(ecx_8.b) << var_c.b
                    var_c += 8
                else if (*(arg1 + 0x20) == 0)
                    var_c += 8
                else
                    int32_t eax_18 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                    
                    if (eax_18 != 0)
                        *(arg1 + 0xa8) = arg1 + 0x28
                        *(arg1 + 0xac) = arg1 + 0x28 + eax_18
                    else
                        *(arg1 + 0x20) = eax_18
                        char* eax_20 = *(arg1 + 0xac) - 1
                        *(arg1 + 0xa8) = eax_20
                        *eax_20 = 0
                    
                    char* eax_21 = *(arg1 + 0xa8)
                    uint32_t edx_10 = zx.d(*eax_21) << var_c.b
                    *(arg1 + 0xa8) = &eax_21[1]
                    eax_10 = var_20
                    var_14 |= edx_10
                    var_c += 8
}
