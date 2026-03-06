// 函数名称: sub_618a40
// 虚拟地址: 0x618a40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_618a40(void* arg1)
{
    // 第一条实际指令: void* ecx = arg1
    void* ecx = arg1
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*(ecx + 8) << 0x10)
    int32_t edi = *(ecx + 0x1c)
    int32_t ebx = *(ecx + 0x34)
    int32_t esi = 0
    int32_t var_44 = ebx
    int32_t var_24 = 0
    int32_t var_2c = 0
    *(ecx + 0x18)
    int32_t result = divs.dp.d(sx.q(*(ecx + 4) << 0x10), *(ecx + 0x18))
    int32_t result_1 = result
    
    if (edi != 0)
        do
            int32_t result_2 = *(ecx + 0x14)
            int32_t edx_4 = *(ecx + 0x18)
            result = 0xffffffff
            *(ecx + 0x1c) -= 1
            int32_t var_20_1 = edx_4
            int32_t edx_5 = 0x10000
            int32_t* var_34_1 = nullptr
            int32_t var_30_1 = 0xffffffff
            int32_t var_1c_1 = 0x10000
            
            if (esi s>= 0x10000)
                uint32_t eax_8 = esi u>> 0x10
                var_24 += eax_8
                result = eax_8 * 0xffff0000
                esi += result
                var_2c = esi
            
            if (var_20_1 != 0)
                int32_t eax_12 = ebx & 0x70
                
                while (true)
                    var_20_1 -= 1
                    
                    if (edx_5 s>= 0x10000)
                        uint32_t eax_14 = edx_5 u>> 0x10
                        int32_t esi_2 = var_30_1 + eax_14
                        var_30_1 = esi_2
                        var_1c_1 = edx_5 + eax_14 * 0xffff0000
                        var_34_1 = *(ecx + 0xc) * var_24 + (esi_2 << 2) + *ecx
                    
                    int32_t eax_20 = *var_34_1
                    uint32_t var_10_1 = zx.d((eax_20 u>> 0x10).b)
                    int32_t eax_22 = *result_2
                    uint32_t var_18_1 = zx.d(eax_20.b)
                    uint32_t ebx_1 = zx.d((eax_22 u>> 0x10).b)
                    uint32_t var_14_1 = zx.d((eax_20 u>> 8).b)
                    uint32_t esi_3 = zx.d((eax_22 u>> 8).b)
                    uint32_t edi_3 = eax_20 u>> 0x18
                    uint32_t ecx_5 = eax_22 u>> 0x18
                    uint32_t var_8_1 = zx.d(eax_22.b)
                    
                    if ((ebx & 0x30) != 0 && edi_3 u< 0xff)
                        var_10_1 = var_10_1 * edi_3 u/ 0xff
                        var_14_1 = var_14_1 * edi_3 u/ 0xff
                        var_18_1 = var_18_1 * edi_3 u/ 0xff
                    
                    if (eax_12 == 0x10)
                        ebx_1 = (0xff - edi_3) * ebx_1 u/ 0xff + var_10_1
                        var_8_1 = (0xff - edi_3) * var_8_1 u/ 0xff + var_18_1
                        ecx_5 = edi_3 + (0xff - edi_3) * ecx_5 u/ 0xff
                        esi_3 = (0xff - edi_3) * esi_3 u/ 0xff + var_14_1
                    else if (eax_12 == 0x20)
                        ebx_1 += var_10_1
                        
                        if (ebx_1 u> 0xff)
                            ebx_1 = 0xff
                        
                        esi_3 += var_14_1
                        
                        if (esi_3 u> 0xff)
                            esi_3 = 0xff
                        
                        uint32_t eax_32 = var_8_1 + var_18_1
                        var_8_1 = eax_32
                        
                        if (eax_32 u> 0xff)
                            var_8_1 = 0xff
                    else if (eax_12 == 0x40)
                        ebx_1 = ebx_1 * var_10_1 u/ 0xff
                        var_8_1 = var_8_1 * var_18_1 u/ 0xff
                        esi_3 = esi_3 * var_14_1 u/ 0xff
                    
                    result = result_2 + 4
                    *(result - 4) = ((ecx_5 << 8 | ebx_1) << 8 | esi_3) << 8 | var_8_1
                    var_1c_1 += result_1
                    ecx = arg1
                    result_2 = result
                    
                    if (var_20_1 == 0)
                        break
                    
                    edx_5 = var_1c_1
                
                esi = var_2c
                ebx = var_44
            
            esi += divs.dp.d(edx:eax_2, edi)
            *(ecx + 0x14) += *(ecx + 0x20)
            var_2c = esi
        while (*(ecx + 0x1c) != 0)
    
    *(ecx + 0x1c) -= 1
    return result
}
