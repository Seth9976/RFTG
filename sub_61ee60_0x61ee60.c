// 函数名称: sub_61ee60
// 虚拟地址: 0x61ee60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_61ee60(void* arg1)
{
    // 第一条实际指令: void* ecx = arg1
    void* ecx = arg1
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*(ecx + 8) << 0x10)
    int32_t edi = *(ecx + 0x1c)
    int32_t ebx = *(ecx + 0x34)
    int32_t esi = 0
    int32_t var_40 = ebx
    int32_t var_18 = 0
    int32_t var_24 = 0
    *(ecx + 0x18)
    int32_t result = divs.dp.d(sx.q(*(ecx + 4) << 0x10), *(ecx + 0x18))
    int32_t result_1 = result
    
    if (edi != 0)
        do
            int32_t result_2 = *(ecx + 0x14)
            int32_t edx_4 = *(ecx + 0x18)
            result = 0xffffffff
            *(ecx + 0x1c) -= 1
            int32_t var_14_1 = edx_4
            int32_t edx_5 = 0x10000
            int32_t* var_2c_1 = nullptr
            int32_t var_28_1 = 0xffffffff
            int32_t var_10_1 = 0x10000
            
            if (esi s>= 0x10000)
                uint32_t eax_8 = esi u>> 0x10
                var_18 += eax_8
                result = eax_8 * 0xffff0000
                esi += result
                var_24 = esi
            
            if (var_14_1 != 0)
                int32_t eax_12 = ebx & 0x70
                
                while (true)
                    var_14_1 -= 1
                    
                    if (edx_5 s>= 0x10000)
                        uint32_t eax_14 = edx_5 u>> 0x10
                        int32_t esi_2 = var_28_1 + eax_14
                        var_28_1 = esi_2
                        var_10_1 = edx_5 + eax_14 * 0xffff0000
                        var_2c_1 = *(ecx + 0xc) * var_18 + (esi_2 << 2) + *ecx
                    
                    int32_t eax_20 = *var_2c_1
                    uint32_t esi_3 = zx.d((eax_20 u>> 8).b)
                    uint32_t edx_11 = zx.d(eax_20.b)
                    int32_t eax_22 = *result_2
                    uint32_t var_c_1 = zx.d((eax_20 u>> 0x10).b)
                    uint32_t edi_3 = eax_20 u>> 0x18
                    uint32_t var_8_1 = zx.d((eax_22 u>> 8).b)
                    uint32_t var_1c_1 = esi_3
                    uint32_t ecx_5 = zx.d((eax_22 u>> 0x10).b)
                    uint32_t ebx_4 = zx.d(eax_22.b)
                    
                    if ((ebx & 0x30) != 0 && edx_11 u< 0xff)
                        var_1c_1 = edx_11 * esi_3 u/ 0xff
                        var_c_1 = edx_11 * var_c_1 u/ 0xff
                        esi_3 = var_1c_1
                        edi_3 = edx_11 * edi_3 u/ 0xff
                    
                    if (eax_12 == 0x10)
                        ebx_4 = (0xff - edx_11) * ebx_4 u/ 0xff + var_1c_1
                        var_8_1 = (0xff - edx_11) * var_8_1 u/ 0xff + var_c_1
                        ecx_5 = edi_3 + (0xff - edx_11) * ecx_5 u/ 0xff
                    else if (eax_12 == 0x20)
                        ebx_4 += esi_3
                        
                        if (ebx_4 u> 0xff)
                            ebx_4 = 0xff
                        
                        uint32_t eax_31 = var_8_1 + var_c_1
                        var_8_1 = eax_31
                        
                        if (eax_31 u> 0xff)
                            var_8_1 = 0xff
                        
                        ecx_5 += edi_3
                        
                        if (ecx_5 u> 0xff)
                            ecx_5 = 0xff
                    else if (eax_12 == 0x40)
                        ebx_4 = ebx_4 * esi_3 u/ 0xff
                        var_8_1 = var_8_1 * var_c_1 u/ 0xff
                        ecx_5 = ecx_5 * edi_3 u/ 0xff
                    
                    result = result_2 + 4
                    *(result - 4) = (ecx_5 << 8 | var_8_1) << 8 | ebx_4
                    var_10_1 += result_1
                    ecx = arg1
                    result_2 = result
                    
                    if (var_14_1 == 0)
                        break
                    
                    edx_5 = var_10_1
                
                esi = var_24
                ebx = var_40
            
            esi += divs.dp.d(edx:eax_2, edi)
            *(ecx + 0x14) += *(ecx + 0x20)
            var_24 = esi
        while (*(ecx + 0x1c) != 0)
    
    *(ecx + 0x1c) -= 1
    return result
}
