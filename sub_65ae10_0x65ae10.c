// 函数名称: sub_65ae10
// 虚拟地址: 0x65ae10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_65ae10(void* arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, float arg5)
{
    // 第一条实际指令: float i_3 = arg5
    float i_3 = arg5
    int32_t ecx = 0
    
    if (i_3 s<= 0)
        return 
    
    int32_t* eax_1 = arg3
    float i
    
    do
        if (*(arg4 - arg3 + eax_1) != 0)
            arg3[ecx] = *eax_1
            ecx += 1
        
        eax_1 = &eax_1[1]
        i = i_3
        i_3 -= 1
    while (i != 1)
    
    if (ecx == 0)
        return 
    
    int32_t* edi_3 = *arg2
    int32_t edx_2 = edi_3[3]
    int32_t i_5 = edi_3[2]
    int32_t temp0 = divs.dp.d(sx.q(edi_3[1] - *edi_3), i_5)
    int32_t* var_c = edi_3
    float eax_8 = sub_649ad0(arg1, ecx << 2)
    int32_t ecx_1 = ecx
    int32_t esi = 0
    float var_10 = eax_8
    
    if (ecx_1 s> 0)
        int32_t edi_6 = temp0 * 4
        
        do
            int128_t* eax_9 = sub_649ad0(arg1, edi_6)
            *(var_10 i+ (esi << 2)) = eax_9
            sub_5abfc0(eax_9, 0, edi_6)
            esi += 1
        while (esi s< ecx)
        
        edi_3 = var_c
        eax_8 = var_10
        ecx_1 = ecx
    
    int32_t esi_1 = 0
    int32_t var_14 = 0
    
    if (temp0 s> 0)
        int32_t var_28_1 = 0
        int32_t edx_12
        
        do
            int32_t edx_6 = *edi_3 + esi_1
            int32_t var_30_1 = edx_6
            
            if (ecx_1 s> 0)
                arg5 = eax_8
                int32_t var_24_1 = ecx_1
                
                while (true)
                    int32_t i_4 = i_5
                    int32_t edi_7 = 0
                    int32_t ebx_3 = 0
                    int32_t var_20_1 = 0
                    
                    if (i_4 s> 0)
                        int32_t* ecx_4 = *(arg3 i- eax_8 i+ arg5) + (edx_6 << 2)
                        int32_t i_1
                        
                        do
                            int32_t eax_13
                            int32_t edx_7
                            edx_7:eax_13 = sx.q(*ecx_4)
                            int32_t eax_15 = (eax_13 ^ edx_7) - edx_7
                            
                            if (eax_15 s> ebx_3)
                                ebx_3 = eax_15
                            
                            edi_7 += eax_15
                            ecx_4 = &ecx_4[1]
                            i_1 = i_4
                            i_4 -= 1
                        while (i_1 != 1)
                        var_20_1 = edi_7
                    
                    int32_t eax_16 = sub_685f40(float.t(var_20_1)
                        * fconvert.t(fconvert.s(fconvert.t(100.0) / float.t(i_5))))
                    int32_t i_2 = 0
                    
                    if (edx_2 - 1 s> 0)
                        void* edx_9 = &var_c[0x286]
                        
                        do
                            if (ebx_3 s<= *(edx_9 - 0x100))
                                int32_t esi_6 = *edx_9
                                
                                if (esi_6 s< 0)
                                    break
                                
                                if (eax_16 s< esi_6)
                                    break
                            
                            i_2 += 1
                            edx_9 += 4
                        while (i_2 s< edx_2 - 1)
                    
                    int32_t temp3_1 = var_24_1
                    var_24_1 -= 1
                    *(*arg5 + (var_14 << 2)) = i_2
                    arg5 += 4
                    
                    if (temp3_1 == 1)
                        break
                    
                    edx_6 = var_30_1
                
                edi_3 = var_c
                eax_8 = var_10
                ecx_1 = ecx
                esi_1 = var_28_1
            
            esi_1 += i_5
            edx_12 = var_14 + 1
            var_14 = edx_12
            var_28_1 = esi_1
        while (edx_12 s< temp0)
    
    arg2[0xa] += 1
}
