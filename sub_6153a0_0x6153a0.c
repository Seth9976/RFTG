// 函数名称: sub_6153a0
// 虚拟地址: 0x6153a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6153a0(void* arg1)
{
    // 第一条实际指令: void* ecx = arg1
    void* ecx = arg1
    int32_t eax = *(ecx + 0x34)
    int32_t eax_3
    int32_t edx
    edx:eax_3 = sx.q(*(ecx + 8) << 0x10)
    int32_t esi = *(ecx + 0x1c)
    int32_t edi = 0
    int32_t var_10 = 0
    int32_t var_c = 0
    int32_t result = divs.dp.d(sx.q(*(ecx + 4) << 0x10), *(ecx + 0x18))
    int32_t result_1 = result
    
    if (esi != 0)
        do
            int32_t* esi_1 = *(ecx + 0x14)
            int32_t ebx_1 = *(ecx + 0x18)
            *(ecx + 0x1c) -= 1
            int32_t var_20_1 = 0xffffffff
            int32_t edx_2 = 0x10000
            result = 0
            int32_t result_2 = 0
            int32_t* var_28_1 = esi_1
            int32_t var_8_1 = ebx_1
            int32_t var_1c_1 = 0x10000
            
            if (edi s>= 0x10000)
                uint32_t edi_1 = edi u>> 0x10
                var_10 += edi_1
                var_c += edi_1 * 0xffff0000
            
            if (var_8_1 != 0)
                while (true)
                    var_8_1 -= 1
                    
                    if (edx_2 s>= 0x10000)
                        uint32_t eax_9 = edx_2 u>> 0x10
                        int32_t edi_6 = var_20_1 + eax_9
                        var_1c_1 = edx_2 + eax_9 * 0xffff0000
                        result = *(ecx + 0xc) * var_10 + (edi_6 << 2) + *ecx
                        var_20_1 = edi_6
                        result_2 = result
                    
                    int32_t eax_12 = *result
                    uint32_t edx_6 = zx.d((eax_12 u>> 0x10).b)
                    uint32_t edx_7 = zx.d((eax_12 u>> 8).b)
                    uint32_t edx_8 = zx.d(eax_12.b)
                    int32_t eax_13 = *esi_1
                    uint32_t edi_7 = zx.d(eax_13.b)
                    result = eax & 0x70
                    uint32_t ecx_7 = zx.d((eax_13 u>> 0x10).b)
                    uint32_t esi_2 = zx.d((eax_13 u>> 8).b)
                    
                    if (result == 0x10)
                        esi_2 = edx_7
                        edi_7 = edx_6
                        ecx_7 = edx_8
                    else if (result == 0x20)
                        ecx_7 += edx_8
                        
                        if (ecx_7 u> 0xff)
                            ecx_7 = 0xff
                        
                        esi_2 += edx_7
                        
                        if (esi_2 u> 0xff)
                            esi_2 = 0xff
                        
                        edi_7 += edx_6
                        
                        if (edi_7 u> 0xff)
                            edi_7 = 0xff
                    else if (result == 0x40)
                        ecx_7 = ecx_7 * edx_8 u/ 0xff
                        esi_2 = esi_2 * edx_7 u/ 0xff
                        int32_t edx_13
                        edx_13:result = mulu.dp.d(0x80808081, edi_7 * edx_6)
                        edi_7 = edi_7 * edx_6 u/ 0xff
                    
                    edx_2 = var_1c_1 + result_1
                    *var_28_1 = (ecx_7 << 8 | esi_2) << 8 | edi_7
                    ecx = arg1
                    esi_1 = &var_28_1[1]
                    var_1c_1 = edx_2
                    var_28_1 = esi_1
                    
                    if (var_8_1 == 0)
                        break
                    
                    result = result_2
            
            edi = var_c + divs.dp.d(edx:eax_3, esi)
            *(ecx + 0x14) += *(ecx + 0x20)
            var_c = edi
        while (*(ecx + 0x1c) != 0)
    
    *(ecx + 0x1c) -= 1
    return result
}
