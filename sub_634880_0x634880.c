// 函数名称: sub_634880
// 虚拟地址: 0x634880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_634880(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx = arg1[9]
    int32_t edx = arg1[9]
    void* esi = arg1[0xb]
    int32_t eax = arg1[6]
    int32_t edx_3 = *(*(arg1[0xa] + 4) + 4)
    int32_t i = arg1[7]
    uint32_t edx_4 = zx.d(*(arg1 + 0x3f))
    uint32_t edx_5 = zx.d(*(esi + 9))
    int32_t eax_2
    int32_t edx_6
    edx_6:eax_2 = sx.q(eax + 7)
    void* result = arg1[4] - (((edx_6 & 7) + eax_2) s>> 3) + eax
    void* var_18 = *arg1
    char* ecx_1 = arg1[5]
    char* var_10 = ecx_1
    void* result_1 = result
    
    while (i != 0)
        i -= 1
        arg1:3.b = 0
        void* result_2 = nullptr
        
        if (eax s> 0)
            do
                int32_t edx_9
                
                if ((result_2.b & 7) == 0)
                    char* eax_5 = var_18
                    edx_9.b = *eax_5
                    arg1:3.b = edx_9.b
                    var_18 = &eax_5[1]
                
                result.b = arg1:3.b
                result.b u>>= 7
                uint32_t eax_6 = zx.d(result.b)
                char* eax_7 = edx_3 + (eax_6 << 2)
                uint32_t var_c_1
                uint32_t var_8_1
                uint32_t ebx
                uint32_t edi_14
                uint32_t eax_11
                
                if (edx_5 - 1 u> 3)
                    edi_14 = 0
                    var_8_1 = 0
                    var_c_1 = 0
                    ebx = 0
                else
                    switch (edx_5)
                        case 1
                            eax_11 = zx.d(*ecx_1)
                        label_634960:
                            ebx = zx.d(*(((*(esi + 0xc) & eax_11) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                            var_c_1 = zx.d(*(((*(esi + 0x10) & eax_11) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                            var_8_1 = zx.d(*(((*(esi + 0x14) & eax_11) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            edi_14 = zx.d(*(((*(esi + 0x18) & eax_11) u>> *(esi + 0x23))
                                + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            ecx_1 = var_10
                        case 2
                            eax_11 = zx.d(*ecx_1)
                            goto label_634960
                        case 3
                            ebx = zx.d(ecx_1[zx.d(*(esi + 0x20)) u>> 3])
                            var_c_1 = zx.d(ecx_1[zx.d(*(esi + 0x21)) u>> 3])
                            var_8_1 = zx.d(ecx_1[zx.d(*(esi + 0x22)) u>> 3])
                            edi_14 = 0xff
                        case 4
                            eax_11 = *ecx_1
                            goto label_634960
                int32_t eax_21
                int32_t edx_14
                edx_14:eax_21 = mulu.dp.d(0x80808081, (zx.d(*eax_7) - ebx) * edx_4)
                uint32_t ebx_1 = ebx + (edx_14 u>> 7)
                int32_t eax_22
                int32_t edx_19
                edx_19:eax_22 =
                    mulu.dp.d(0x80808081, (zx.d(*(edx_3 + (eax_6 << 2) + 1)) - var_c_1) * edx_4)
                uint32_t var_c_2 = var_c_1 + (edx_19 u>> 7)
                int32_t eax_23
                int32_t edx_24
                edx_24:eax_23 = mulu.dp.d(0x80808081, (zx.d(eax_7[2]) - var_8_1) * edx_4)
                uint32_t var_8_2 = var_8_1 + (edx_24 u>> 7)
                int32_t edi_15 = edi_14 + edx_4 - edi_14 * edx_4 u/ 0xff
                
                if (edx_5 - 1 u<= 3)
                    switch (edx_5)
                        case 1
                            edx_9.b = (edi_15 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                            edx_9.b |= (var_8_2 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                            edx_9.b |= (var_c_2 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                            edx_9.b |= (ebx_1 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                            *var_10 = edx_9.b
                            ecx_1 = var_10
                        case 2
                            uint16_t edi_16 = (edi_15 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                | (var_8_2 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                | (var_c_2 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                            *var_10 = edi_16 | (ebx_1 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            ecx_1 = var_10
                        case 3
                            *((zx.d(*(esi + 0x20)) u>> 3) + ecx_1) = ebx_1.b
                            *((zx.d(*(esi + 0x21)) u>> 3) + ecx_1) = var_c_2.b
                            *((zx.d(*(esi + 0x22)) u>> 3) + ecx_1) = var_8_2.b
                        case 4
                            uint32_t edi_20 = edi_15 u>> *(esi + 0x1f) << *(esi + 0x23)
                                | var_8_2 u>> *(esi + 0x1e) << *(esi + 0x22)
                                | var_c_2 u>> *(esi + 0x1d) << *(esi + 0x21)
                            *var_10 = edi_20 | ebx_1 u>> *(esi + 0x1c) << *(esi + 0x20)
                            ecx_1 = var_10
                
                ecx_1 = &ecx_1[edx_5]
                arg1:3.b <<= 1
                result = result_2 + 1
                var_10 = ecx_1
                result_2 = result
            while (result s< eax)
            
            result = result_1
        
        ecx_1 = &ecx_1[edx]
        var_18 += result
        var_10 = ecx_1
    
    return result
}
