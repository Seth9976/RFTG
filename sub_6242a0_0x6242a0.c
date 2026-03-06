// 函数名称: sub_6242a0
// 虚拟地址: 0x6242a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_6242a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t i = arg1[7]
    int32_t i = arg1[7]
    int32_t* result = *arg1
    int32_t j_2 = arg1[6]
    int32_t esi = arg1[4]
    uint16_t* var_c = arg1[5]
    int32_t esi_2 = arg1[9]
    void* esi_3 = arg1[0xa]
    uint32_t edi = zx.d(*(esi_3 + 9))
    void* edi_1 = arg1[0xb]
    uint32_t ecx_1 = zx.d(*(edi_1 + 9))
    int32_t j_3 = j_2
    int32_t* result_1 = result
    
    while (i != 0)
        i -= 1
        int32_t j_1 = j_2
        
        if (j_2 != 0)
            int32_t j
            
            do
                uint32_t var_8_1
                uint32_t eax_3
                uint32_t edx_10
                uint32_t ebx
                
                if (edi - 1 u> 3)
                    ebx = 0
                    eax_3 = 0
                    edx_10 = 0
                    var_8_1 = 0
                else
                    switch (edi)
                        case 1
                            uint32_t eax = zx.d(*result)
                            ebx = zx.d(*(((*(esi_3 + 0xc) & eax) u>> *(esi_3 + 0x20))
                                + (&data_8bac68)[zx.d(*(esi_3 + 0x1c))]))
                            var_8_1 = zx.d(*(((*(esi_3 + 0x10) & eax) u>> *(esi_3 + 0x21))
                                + (&data_8bac68)[zx.d(*(esi_3 + 0x1d))]))
                            edx_10 = zx.d(*(((*(esi_3 + 0x14) & eax) u>> *(esi_3 + 0x22))
                                + (&data_8bac68)[zx.d(*(esi_3 + 0x1e))]))
                            int32_t* ecx_14 = *(esi_3 + 0x18) & eax
                            arg1 = ecx_14
                            eax_3 = zx.d(
                                *((ecx_14 u>> *(esi_3 + 0x23)) + (&data_8bac68)[zx.d(*(esi_3 + 0x1f))]))
                        case 2
                            uint32_t eax_4 = zx.d(*result)
                            ebx = zx.d(*(((*(esi_3 + 0xc) & eax_4) u>> *(esi_3 + 0x20))
                                + (&data_8bac68)[zx.d(*(esi_3 + 0x1c))]))
                            var_8_1 = zx.d(*(((*(esi_3 + 0x10) & eax_4) u>> *(esi_3 + 0x21))
                                + (&data_8bac68)[zx.d(*(esi_3 + 0x1d))]))
                            edx_10 = zx.d(*(((*(esi_3 + 0x14) & eax_4) u>> *(esi_3 + 0x22))
                                + (&data_8bac68)[zx.d(*(esi_3 + 0x1e))]))
                            int32_t* ecx_28 = *(esi_3 + 0x18) & eax_4
                            arg1 = ecx_28
                            eax_3 = zx.d(
                                *((ecx_28 u>> *(esi_3 + 0x23)) + (&data_8bac68)[zx.d(*(esi_3 + 0x1f))]))
                        case 3
                            ebx = zx.d(*((zx.d(*(esi_3 + 0x20)) u>> 3) + result))
                            var_8_1 = zx.d(*((zx.d(*(esi_3 + 0x21)) u>> 3) + result))
                            edx_10 = zx.d(*((zx.d(*(esi_3 + 0x22)) u>> 3) + result))
                            eax_3 = 0xff
                        case 4
                            int32_t eax_5 = *result
                            ebx = zx.d(*(((*(esi_3 + 0xc) & eax_5) u>> *(esi_3 + 0x20))
                                + (&data_8bac68)[zx.d(*(esi_3 + 0x1c))]))
                            var_8_1 = zx.d(*(((*(esi_3 + 0x10) & eax_5) u>> *(esi_3 + 0x21))
                                + (&data_8bac68)[zx.d(*(esi_3 + 0x1d))]))
                            edx_10 = zx.d(*(((*(esi_3 + 0x14) & eax_5) u>> *(esi_3 + 0x22))
                                + (&data_8bac68)[zx.d(*(esi_3 + 0x1e))]))
                            int32_t* ecx_43 = *(esi_3 + 0x18) & eax_5
                            arg1 = ecx_43
                            eax_3 = zx.d(
                                *((ecx_43 u>> *(esi_3 + 0x23)) + (&data_8bac68)[zx.d(*(esi_3 + 0x1f))]))
                
                if (ecx_1 - 1 u<= 3)
                    switch (ecx_1)
                        case 1
                            arg1:3.b = (eax_3 u>> *(edi_1 + 0x1f)).b << *(edi_1 + 0x23)
                                | (edx_10 u>> *(edi_1 + 0x1e)).b << *(edi_1 + 0x22)
                            *var_c = arg1:3.b | (var_8_1 u>> *(edi_1 + 0x1d)).b << *(edi_1 + 0x21)
                                | (ebx u>> *(edi_1 + 0x1c)).b << *(edi_1 + 0x20)
                        case 2
                            arg1.w = (var_8_1 u>> *(edi_1 + 0x1d)).w << *(edi_1 + 0x21)
                            uint16_t eax_9 = (eax_3 u>> *(edi_1 + 0x1f)).w << *(edi_1 + 0x23)
                                | (edx_10 u>> *(edi_1 + 0x1e)).w << *(edi_1 + 0x22) | arg1.w
                                | (ebx u>> *(edi_1 + 0x1c)).w << *(edi_1 + 0x20)
                            *var_c = eax_9
                        case 3
                            *((zx.d(*(edi_1 + 0x20)) u>> 3) + var_c) = ebx.b
                            ebx.b = var_8_1.b
                            *((zx.d(*(edi_1 + 0x21)) u>> 3) + var_c) = ebx.b
                            *((zx.d(*(edi_1 + 0x22)) u>> 3) + var_c) = edx_10.b
                        case 4
                            int32_t eax_14 = eax_3 u>> *(edi_1 + 0x1f) << *(edi_1 + 0x23)
                                | edx_10 u>> *(edi_1 + 0x1e) << *(edi_1 + 0x22)
                                | var_8_1 u>> *(edi_1 + 0x1d) << *(edi_1 + 0x21)
                            *var_c = eax_14 | ebx u>> *(edi_1 + 0x1c) << *(edi_1 + 0x20)
                
                result_1 += edi
                var_c += ecx_1
                j = j_1
                j_1 -= 1
                result = result_1
            while (j != 1)
            j_2 = j_3
        
        result += esi
        var_c += esi_2
        result_1 = result
    
    return result
}
