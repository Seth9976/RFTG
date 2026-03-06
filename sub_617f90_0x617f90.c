// 函数名称: sub_617f90
// 虚拟地址: 0x617f90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_617f90(void* arg1)
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
    int32_t var_1c = 0
    int32_t var_2c = 0
    *(ecx + 0x18)
    int32_t result = divs.dp.d(sx.q(*(ecx + 4) << 0x10), *(ecx + 0x18))
    int32_t result_1 = result
    
    if (edi != 0)
        do
            int32_t result_3 = *(ecx + 0x14)
            result = 0xffffffff
            *(ecx + 0x1c) -= 1
            int32_t edi_2 = 0x10000
            int32_t result_2 = result_3
            int32_t* var_34_1 = nullptr
            int32_t var_18_1 = *(ecx + 0x18)
            int32_t var_30_1 = 0xffffffff
            int32_t var_14_1 = 0x10000
            
            if (esi s>= 0x10000)
                uint32_t eax_8 = esi u>> 0x10
                var_1c += eax_8
                result = eax_8 * 0xffff0000
                esi += result
                var_2c = esi
            
            if (var_18_1 != 0)
                int32_t edx_5 = ebx & 0x70
                int32_t var_24_1 = edx_5
                
                while (true)
                    var_18_1 -= 1
                    
                    if (edi_2 s>= 0x10000)
                        uint32_t eax_12 = edi_2 u>> 0x10
                        int32_t esi_2 = var_30_1 + eax_12
                        var_30_1 = esi_2
                        var_14_1 = edi_2 + eax_12 * 0xffff0000
                        var_34_1 = *(ecx + 0xc) * var_1c + (esi_2 << 2) + *ecx
                    
                    int32_t eax_18 = *var_34_1
                    uint32_t esi_3 = zx.d((eax_18 u>> 0x10).b)
                    uint32_t var_c_1 = zx.d((eax_18 u>> 8).b)
                    uint32_t var_10_1 = zx.d(eax_18.b)
                    int32_t eax_20 = *result_2
                    uint32_t edi_5 = eax_18 u>> 0x18
                    uint32_t var_8_1 = zx.d((eax_20 u>> 8).b)
                    uint32_t var_20_1 = esi_3
                    uint32_t ecx_10 = zx.d((eax_20 u>> 0x10).b)
                    uint32_t ebx_4 = zx.d(eax_20.b)
                    
                    if ((ebx & 0x30) != 0 && edi_5 u< 0xff)
                        var_20_1 = esi_3 * edi_5 u/ 0xff
                        var_c_1 = var_c_1 * edi_5 u/ 0xff
                        esi_3 = var_20_1
                        var_10_1 = var_10_1 * edi_5 u/ 0xff
                        edx_5 = var_24_1
                    
                    if (edx_5 == 0x10)
                        ebx_4 = (0xff - edi_5) * ebx_4 u/ 0xff + var_20_1
                        var_8_1 = (0xff - edi_5) * var_8_1 u/ 0xff + var_c_1
                        ecx_10 = (0xff - edi_5) * ecx_10 u/ 0xff + var_10_1
                        edx_5 = var_24_1
                    else if (edx_5 == 0x20)
                        ebx_4 += esi_3
                        
                        if (ebx_4 u> 0xff)
                            ebx_4 = 0xff
                        
                        uint32_t eax_28 = var_8_1 + var_c_1
                        var_8_1 = eax_28
                        
                        if (eax_28 u> 0xff)
                            var_8_1 = 0xff
                        
                        ecx_10 += var_10_1
                        
                        if (ecx_10 u> 0xff)
                            ecx_10 = 0xff
                    else if (edx_5 == 0x40)
                        ebx_4 = ebx_4 * esi_3 u/ 0xff
                        var_8_1 = var_8_1 * var_c_1 u/ 0xff
                        ecx_10 = ecx_10 * var_10_1 u/ 0xff
                        edx_5 = var_24_1
                    
                    result = result_2 + 4
                    *(result - 4) = (ecx_10 << 8 | var_8_1) << 8 | ebx_4
                    var_14_1 += result_1
                    ecx = arg1
                    result_2 = result
                    
                    if (var_18_1 == 0)
                        break
                    
                    edi_2 = var_14_1
                
                esi = var_2c
                ebx = var_40
            
            esi += divs.dp.d(edx:eax_2, edi)
            *(ecx + 0x14) += *(ecx + 0x20)
            var_2c = esi
        while (*(ecx + 0x1c) != 0)
    
    *(ecx + 0x1c) -= 1
    return result
}
