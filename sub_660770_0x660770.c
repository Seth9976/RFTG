// 函数名称: sub_660770
// 虚拟地址: 0x660770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_660770(int32_t* arg1, char* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t* arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    if (esi[0x16] s< 2)
        return 0xffffff7d
    
    int32_t i
    
    do
        int32_t ecx
        void* edx
        
        if (esi[0x16] == 4)
            int32_t var_8
            int32_t eax_2
            eax_2, ecx, edx = sub_64ae40(&esi[0x78], &var_8)
            int32_t ebx_1 = eax_2
            int32_t var_10_1 = ebx_1
            
            if (ebx_1 != 0)
                if (ebx_1 s<= 0)
                    return ebx_1
                
                void* eax_6
                
                if (esi[1] == 0 || esi[0x16] s< 3)
                    eax_6 = esi[0x12]
                else
                    eax_6 = (esi[0x18] << 5) + esi[0x12]
                
                int32_t edi = *(eax_6 + 4)
                int32_t eax_8 = edi * arg5
                int32_t temp0 = divs.dp.d(sx.q(arg3), eax_8)
                int32_t var_c = edi
                
                if (ebx_1 s> temp0)
                    var_10_1 = temp0
                    ebx_1 = temp0
                
                if (ebx_1 s<= 0)
                    return 0xffffff7d
                
                if (arg8 != 0)
                    arg8(var_8, edi, ebx_1, arg9)
                
                if (arg5 != 1)
                    int32_t edx_9 = neg.d(arg6)
                    int32_t edx_12 = (sbb.d(edx_9, edx_9, arg6 != 0) & 0xffff8000) + 0x8000
                    int32_t var_14_2 = edx_12
                    
                    if (arg4 != 0)
                        int32_t edi_6 = 0
                        
                        if (ebx_1 s> 0)
                            char* ecx_10 = arg2
                            
                            do
                                int32_t esi_4 = 0
                                
                                if (var_c s> 0)
                                    do
                                        int32_t eax_23 = int.d(fconvert.t(fconvert.d(
                                            fconvert.t(*(*(var_8 + (esi_4 << 2)) + (edi_6 << 2)))
                                            * fconvert.t(32768.0))))
                                        
                                        if (eax_23 s> 0x7fff)
                                            eax_23 = 0x7fff
                                        else if (eax_23 s< 0xffff8000)
                                            eax_23 = 0xffff8000
                                        
                                        int32_t eax_24 = eax_23 + edx_12
                                        *ecx_10 = (eax_24 s>> 8).b
                                        edx_12 = var_14_2
                                        ecx_10[1] = eax_24.b
                                        esi_4 += 1
                                        ecx_10 = &ecx_10[2]
                                    while (esi_4 s< var_c)
                                
                                edi_6 += 1
                            while (edi_6 s< ebx_1)
                            
                            esi = arg1
                    else
                        int32_t ecx_6 = 0
                        int32_t var_10_2 = 0
                        
                        if (arg6 == 0)
                            if (edi s> 0)
                                char* edx_15 = arg2
                                char* var_1c_1 = edx_15
                                
                                do
                                    int32_t eax_19 = *(var_8 + (ecx_6 << 2))
                                    int32_t eax_20 = 0
                                    
                                    if (ebx_1 s> 0)
                                        do
                                            int32_t ecx_9 = int.d(fconvert.t(fconvert.d(
                                                fconvert.t(*(eax_19 + (eax_20 << 2)))
                                                * fconvert.t(32768.0))))
                                            
                                            if (ecx_9 s> 0x7fff)
                                                ecx_9 = 0x7fff
                                            else if (ecx_9 s< 0xffff8000)
                                                ecx_9 = 0xffff8000
                                            
                                            *edx_15 = var_14_2.w + ecx_9.w
                                            eax_20 += 1
                                            edx_15 = &edx_15[edi * 2]
                                        while (eax_20 s< ebx_1)
                                        
                                        ecx_6 = var_10_2
                                        edi = var_c
                                        esi = arg1
                                    
                                    ecx_6 += 1
                                    edx_15 = &var_1c_1[2]
                                    var_10_2 = ecx_6
                                    var_1c_1 = edx_15
                                while (ecx_6 s< edi)
                        else if (edi s> 0)
                            char* edx_13 = arg2
                            char* var_18_1 = edx_13
                            
                            do
                                int32_t esi_2 = *(var_8 + (ecx_6 << 2))
                                int32_t eax_17 = 0
                                
                                if (ebx_1 s> 0)
                                    do
                                        int32_t ecx_7 = int.d(fconvert.t(fconvert.d(
                                            fconvert.t(*(esi_2 + (eax_17 << 2)))
                                            * fconvert.t(32768.0))))
                                        
                                        if (ecx_7 s> 0x7fff)
                                            ecx_7 = 0x7fff
                                        else if (ecx_7 s< 0xffff8000)
                                            ecx_7 = 0xffff8000
                                        
                                        *edx_13 = ecx_7.w
                                        eax_17 += 1
                                        edx_13 = &edx_13[var_c * 2]
                                    while (eax_17 s< ebx_1)
                                    
                                    ecx_6 = var_10_2
                                
                                ecx_6 += 1
                                edx_13 = &var_18_1[2]
                                var_10_2 = ecx_6
                                var_18_1 = edx_13
                            while (ecx_6 s< var_c)
                            
                            esi = arg1
                else
                    int32_t edx_5 = neg.d(arg6)
                    int32_t edi_1 = 0
                    
                    if (ebx_1 s> 0)
                        char* esi_1 = arg2
                        
                        do
                            int32_t eax_14 = 0
                            
                            if (var_c s> 0)
                                do
                                    int32_t ecx_5 = int.d(fconvert.t(fconvert.d(
                                        fconvert.t(*(*(var_8 + (eax_14 << 2)) + (edi_1 << 2)))
                                        * fconvert.t(128.0))))
                                    
                                    if (ecx_5 s> 0x7f)
                                        ecx_5 = 0x7f
                                    else if (ecx_5 s< 0xffffff80)
                                        ecx_5 = 0xffffff80
                                    
                                    *esi_1 =
                                        ecx_5.b + ((sbb.d(edx_5, edx_5, arg6 != 0)).b & 0x80) - 0x80
                                    eax_14 += 1
                                    esi_1 = &esi_1[1]
                                while (eax_14 s< var_c)
                                
                                ebx_1 = var_10_1
                            
                            edi_1 += 1
                        while (edi_1 s< ebx_1)
                        
                        esi = arg1
                
                sub_64aea0(&esi[0x78], ebx_1)
                int32_t eax_29
                int32_t edx_19
                edx_19:eax_29 = sx.q(ebx_1 << sub_68b620(esi[0x12]))
                int32_t temp5 = esi[0x14]
                esi[0x14] += eax_29
                esi[0x15] = adc.d(esi[0x15], edx_19, temp5 + eax_29 u< temp5)
                
                if (arg7 != 0)
                    *arg7 = esi[0x18]
                
                return eax_8 * ebx_1
        
        int32_t var_40_2 = 1
        int32_t var_44_2 = 1
        i, ecx, edx = sub_65f340(esi, edx, ecx, 0)
        
        if (i == 0xfffffffe)
            return 0
    while (i s> 0)
    
    return i
}
