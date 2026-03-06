// 函数名称: sub_610ee0
// 虚拟地址: 0x610ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_610ee0(int32_t arg1, char arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t esi = 0xffffffff
    int32_t esi = 0xffffffff
    int32_t var_3c = 0x14
    char var_6 = 0
    char var_7 = 0
    char var_8 = 0
    char var_5 = 0
    int32_t var_10 = 0
    int32_t var_18 = 0xffffffff
    int32_t* eax = sub_5d0ac0()
    int32_t i_1 = arg5
    int32_t* var_c = eax
    int32_t var_2c = 0
    int32_t var_28 = 0
    int32_t var_24 = 0
    int32_t var_20 = 0
    int32_t i = i_1
    
    if (i_1 s< arg7 + i_1)
        int32_t j_2 = arg4
        
        do
            int32_t j = j_2
            int32_t j_1 = j_2
            
            if (j_2 s< arg6 + j_2)
                do
                    void* esi_1 = *(arg3 + 4)
                    uint32_t edx_2 = zx.d(*(esi_1 + 9))
                    int32_t* eax_6 = edx_2 * j + *(arg3 + 0x10) * i + *(arg3 + 0x14)
                    uint32_t ecx = 0
                    
                    if (edx_2 - 1 u<= 3)
                        switch (edx_2)
                            case 1
                                ecx = zx.d(*eax_6)
                            case 2
                                ecx = zx.d(*eax_6)
                            case 3
                                ecx = not.d(*(esi_1 + 0x18)) & *eax_6
                            case 4
                                ecx = *eax_6
                    
                    sub_5d7f70(ecx, esi_1, &var_6, &var_7, &var_8, &var_5)
                    int32_t eax_9
                    
                    if (arg1 u> 3)
                        eax_9 = var_10
                    else
                        switch (arg1)
                            case 0
                                eax_9 = sbb.d(arg1, arg1, var_5 u< 1) + 1
                                var_10 = eax_9
                            case 1
                                eax_9 = sbb.d(arg1, arg1, var_5 u< arg2) + 1
                                var_10 = eax_9
                            case 2
                                eax_9 = sbb.d(arg1, arg1, arg2 u< var_5) + 1
                                var_10 = eax_9
                            case 3
                                int32_t eax_12 = arg2.d
                                
                                if (eax_12.b != var_6 || (eax_12 u>> 8).b != var_7
                                        || (eax_12 u>> 0x10).b != var_8)
                                    eax_9 = 1
                                    var_10 = 1
                                else
                                    eax_9 = 0
                                    var_10 = 0
                    
                    esi = var_18
                    
                    if (esi == 0xffffffff)
                        esi = eax_9
                        var_18 = esi
                    else if (esi != eax_9)
                        *var_c = 0
                        int32_t eax_17
                        int32_t edx_7
                        edx_7:eax_17 = sx.q(arg6)
                        int32_t eax_20
                        int32_t edx_8
                        edx_8:eax_20 = sx.q(arg7)
                        int32_t esi_7 = (eax_17 - edx_7) s>> 1
                        int32_t edi_7 = (eax_20 - edx_8) s>> 1
                        var_c[1] = sub_610ee0(arg1, arg2.d, arg3, arg4, arg5, esi_7, edi_7)
                        var_c[2] = sub_610ee0(arg1, arg2.d, arg3, arg4 + esi_7, arg5, esi_7, edi_7)
                        int32_t ecx_15 = arg5 + edi_7
                        var_c[3] = sub_610ee0(arg1, arg2.d, arg3, arg4, ecx_15, esi_7, edi_7)
                        var_c[4] = sub_610ee0(arg1, arg2.d, arg3, arg4 + esi_7, ecx_15, esi_7, edi_7)
                        return var_c
                    
                    j_2 = arg4
                    j = j_1 + 1
                    j_1 = j
                while (j s< arg6 + j_2)
                
                i_1 = arg5
            
            i += 1
            eax = var_c
        while (i s< arg7 + i_1)
    
    int32_t esi_3 = neg.d(esi - 1)
    *eax = sbb.d(esi_3, esi_3, esi != 1) + 2
    eax[1] = arg4
    eax[2] = arg5
    eax[3] = arg6
    eax[4] = arg7
    return eax
}
