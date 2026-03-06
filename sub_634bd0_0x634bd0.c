// 函数名称: sub_634bd0
// 虚拟地址: 0x634bd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_634bd0(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx = arg1[9]
    int32_t edx = arg1[9]
    void* esi = arg1[0xb]
    int32_t ebx = arg1[6]
    int32_t i = arg1[7]
    int32_t eax_2 = *(*(arg1[0xa] + 4) + 4)
    uint32_t edx_2 = zx.d(*(arg1 + 0x3f))
    int32_t eax_3 = arg1[0xe]
    uint32_t edx_3 = zx.d(*(esi + 9))
    int32_t eax_5
    int32_t edx_4
    edx_4:eax_5 = sx.q(ebx + 7)
    int32_t var_18 = *arg1
    int32_t* ecx_1 = arg1[5]
    int32_t result = (eax_5 + (edx_4 & 7)) s>> 3
    int32_t edi_3 = arg1[4] - result + ebx
    int32_t var_38 = ebx
    int32_t* var_10 = ecx_1
    int32_t var_3c = edi_3
    
    while (i != 0)
        i -= 1
        result = 0
        arg1:3.b = 0
        int32_t result_1 = 0
        
        if (ebx s> 0)
            do
                uint32_t edx_5
                
                if ((result.b & 7) == 0)
                    edx_5.b = *var_18
                    arg1:3.b = edx_5.b
                    var_18 += 1
                
                result.b = arg1:3.b
                result.b u>>= 7
                uint32_t eax_8 = zx.d(result.b)
                
                if (eax_8 != eax_3)
                    uint32_t var_c_1
                    uint32_t var_8_1
                    uint32_t ebx_2
                    uint32_t edi_17
                    uint32_t eax_12
                    
                    if (edx_3 - 1 u> 3)
                        edi_17 = 0
                        var_8_1 = 0
                        var_c_1 = 0
                        ebx_2 = 0
                    else
                        switch (edx_3)
                            case 1
                                eax_12 = zx.d(*ecx_1)
                            label_634cba:
                                ebx_2 = zx.d(*(((*(esi + 0xc) & eax_12) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_1 = zx.d(*(((*(esi + 0x10) & eax_12) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                var_8_1 = zx.d(*(((*(esi + 0x14) & eax_12) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                edi_17 = zx.d(*(((*(esi + 0x18) & eax_12) u>> *(esi + 0x23))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                                ecx_1 = var_10
                            case 2
                                eax_12 = zx.d(*ecx_1)
                                goto label_634cba
                            case 3
                                ebx_2 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ecx_1))
                                var_c_1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ecx_1))
                                var_8_1 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ecx_1))
                                edi_17 = 0xff
                            case 4
                                eax_12 = *ecx_1
                                goto label_634cba
                    int32_t eax_22
                    int32_t edx_9
                    edx_9:eax_22 =
                        mulu.dp.d(0x80808081, (zx.d(*(eax_2 + (eax_8 << 2))) - ebx_2) * edx_2)
                    uint32_t ebx_3 = ebx_2 + (edx_9 u>> 7)
                    int32_t eax_23
                    int32_t edx_14
                    edx_14:eax_23 =
                        mulu.dp.d(0x80808081, (zx.d(*(eax_2 + (eax_8 << 2) + 1)) - var_c_1) * edx_2)
                    uint32_t var_c_2 = var_c_1 + (edx_14 u>> 7)
                    int32_t eax_24
                    int32_t edx_19
                    edx_19:eax_24 =
                        mulu.dp.d(0x80808081, (zx.d(*(eax_2 + (eax_8 << 2) + 2)) - var_8_1) * edx_2)
                    uint32_t var_8_2 = var_8_1 + (edx_19 u>> 7)
                    uint32_t edi_18 = edi_17 + edx_2 - edi_17 * edx_2 u/ 0xff
                    
                    if (edx_3 - 1 u<= 3)
                        switch (edx_3)
                            case 1
                                edx_5.b = (edi_18 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                edx_5.b |= (var_8_2 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                edx_5.b |= (var_c_2 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                edx_5.b |= (ebx_3 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                                *var_10 = edx_5.b
                                ecx_1 = var_10
                            case 2
                                uint16_t edi_19 = (edi_18 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                    | (var_8_2 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (var_c_2 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                *var_10 = edi_19 | (ebx_3 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                ecx_1 = var_10
                            case 3
                                *((zx.d(*(esi + 0x20)) u>> 3) + ecx_1) = ebx_3.b
                                *((zx.d(*(esi + 0x21)) u>> 3) + ecx_1) = var_c_2.b
                                *((zx.d(*(esi + 0x22)) u>> 3) + ecx_1) = var_8_2.b
                            case 4
                                uint32_t edi_23 = edi_18 u>> *(esi + 0x1f) << *(esi + 0x23)
                                    | var_8_2 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | var_c_2 u>> *(esi + 0x1d) << *(esi + 0x21)
                                *var_10 = edi_23 | ebx_3 u>> *(esi + 0x1c) << *(esi + 0x20)
                                ecx_1 = var_10
                
                ecx_1 += edx_3
                ebx = var_38
                arg1:3.b <<= 1
                result = result_1 + 1
                var_10 = ecx_1
                result_1 = result
            while (result s< ebx)
            
            edi_3 = var_3c
        
        ecx_1 += edx
        var_18 += edi_3
        var_10 = ecx_1
    
    return result
}
