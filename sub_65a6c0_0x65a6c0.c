// 函数名称: sub_65a6c0
// 虚拟地址: 0x65a6c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_65a6c0(void* arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* edi = *arg2
    int32_t* edi = *arg2
    int32_t edx = edi[3]
    int32_t i_3 = edi[2]
    int32_t temp0 = divs.dp.d(sx.q(edi[1] - *edi), i_3)
    int32_t* var_c = edi
    void* eax_6 = sub_649ad0(arg1, arg4 << 2)
    int32_t ecx_1 = arg4
    int32_t esi = 0
    void* var_10 = eax_6
    
    if (ecx_1 s> 0)
        int32_t edi_3 = temp0 * 4
        
        do
            int128_t* eax_7 = sub_649ad0(arg1, edi_3)
            *(var_10 + (esi << 2)) = eax_7
            sub_5abfc0(eax_7, 0, edi_3)
            esi += 1
        while (esi s< arg4)
        
        edi = var_c
        eax_6 = var_10
        ecx_1 = arg4
    
    int32_t esi_1 = 0
    int32_t var_14 = 0
    
    if (temp0 s> 0)
        int32_t var_28_1 = 0
        int32_t edx_11
        
        do
            int32_t edx_5 = *edi + esi_1
            int32_t var_30_1 = edx_5
            
            if (ecx_1 s> 0)
                void* var_8_1 = eax_6
                int32_t var_24_1 = ecx_1
                
                while (true)
                    int32_t i_2 = i_3
                    int32_t edi_4 = 0
                    int32_t ebx_1 = 0
                    int32_t var_20_1 = 0
                    
                    if (i_2 s> 0)
                        int32_t* ecx_4 = *(arg3 - eax_6 + var_8_1) + (edx_5 << 2)
                        int32_t i
                        
                        do
                            int32_t eax_11
                            int32_t edx_6
                            edx_6:eax_11 = sx.q(*ecx_4)
                            int32_t eax_13 = (eax_11 ^ edx_6) - edx_6
                            
                            if (eax_13 s> ebx_1)
                                ebx_1 = eax_13
                            
                            edi_4 += eax_13
                            ecx_4 = &ecx_4[1]
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
                        var_20_1 = edi_4
                    
                    int32_t eax_14 = sub_685f40(float.t(var_20_1)
                        * fconvert.t(fconvert.s(fconvert.t(100.0) / float.t(i_3))))
                    int32_t i_1 = 0
                    
                    if (edx - 1 s> 0)
                        void* edx_8 = &var_c[0x286]
                        
                        do
                            if (ebx_1 s<= *(edx_8 - 0x100))
                                int32_t esi_6 = *edx_8
                                
                                if (esi_6 s< 0)
                                    break
                                
                                if (eax_14 s< esi_6)
                                    break
                            
                            i_1 += 1
                            edx_8 += 4
                        while (i_1 s< edx - 1)
                    
                    int32_t* eax_15 = var_8_1
                    int32_t temp2_1 = var_24_1
                    var_24_1 -= 1
                    *(*eax_15 + (var_14 << 2)) = i_1
                    var_8_1 = &eax_15[1]
                    
                    if (temp2_1 == 1)
                        break
                    
                    edx_5 = var_30_1
                
                edi = var_c
                eax_6 = var_10
                ecx_1 = arg4
                esi_1 = var_28_1
            
            esi_1 += i_3
            edx_11 = var_14 + 1
            var_14 = edx_11
            var_28_1 = esi_1
        while (edx_11 s< temp0)
    
    arg2[0xa] += 1
}
