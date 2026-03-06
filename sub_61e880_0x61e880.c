// 函数名称: sub_61e880
// 虚拟地址: 0x61e880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_61e880(void* arg1)
{
    // 第一条实际指令: void* ecx = arg1
    void* ecx = arg1
    uint32_t eax = zx.d(*(ecx + 0x3c))
    uint32_t edx = zx.d(*(ecx + 0x3d))
    uint32_t eax_1 = zx.d(*(ecx + 0x3e))
    uint32_t edx_1 = zx.d(*(ecx + 0x3f))
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q(*(ecx + 8) << 0x10)
    int32_t ebx = *(ecx + 0x1c)
    int32_t esi = 0
    int32_t edi = *(ecx + 0x34)
    int32_t var_58 = edi
    int32_t var_20 = 0
    int32_t var_28 = 0
    *(ecx + 0x18)
    int32_t result = divs.dp.d(sx.q(*(ecx + 4) << 0x10), *(ecx + 0x18))
    int32_t result_1 = result
    
    if (ebx != 0)
        do
            int32_t result_2 = *(ecx + 0x14)
            int32_t edx_6 = *(ecx + 0x18)
            result = 0xffffffff
            *(ecx + 0x1c) -= 1
            int32_t var_1c_1 = edx_6
            int32_t edx_7 = 0x10000
            int32_t* var_30_1 = nullptr
            int32_t var_2c_1 = 0xffffffff
            int32_t var_18_1 = 0x10000
            
            if (esi s>= 0x10000)
                uint32_t eax_10 = esi u>> 0x10
                var_20 += eax_10
                result = eax_10 * 0xffff0000
                esi += result
                var_28 = esi
            
            if (var_1c_1 != 0)
                int32_t eax_18 = edi & 0x70
                
                while (true)
                    var_1c_1 -= 1
                    
                    if (edx_7 s>= 0x10000)
                        uint32_t eax_20 = edx_7 u>> 0x10
                        int32_t esi_2 = var_2c_1 + eax_20
                        var_2c_1 = esi_2
                        var_18_1 = edx_7 + eax_20 * 0xffff0000
                        var_30_1 = *(ecx + 0xc) * var_20 + (esi_2 << 2) + *ecx
                    
                    int32_t eax_26 = *var_30_1
                    uint32_t var_c_1 = zx.d((eax_26 u>> 0x10).b)
                    uint32_t ebx_2 = zx.d((eax_26 u>> 8).b)
                    uint32_t var_14_1 = zx.d(eax_26.b)
                    int32_t eax_28 = *result_2
                    uint32_t ecx_4 = zx.d((eax_28 u>> 0x10).b)
                    uint32_t edi_1 = zx.d((eax_28 u>> 8).b)
                    uint32_t esi_4 = eax_26 u>> 0x18
                    uint32_t var_8_1 = zx.d(eax_28.b)
                    
                    if ((edi & 1) != 0)
                        ebx_2 = ebx_2 * eax u/ 0xff
                        var_c_1 = var_c_1 * edx u/ 0xff
                        esi_4 = esi_4 * eax_1 u/ 0xff
                    
                    uint32_t eax_34
                    
                    if ((edi & 2) == 0)
                        eax_34 = var_14_1
                    else
                        eax_34 = var_14_1 * edx_1 u/ 0xff
                        var_14_1 = eax_34
                    
                    if ((edi & 0x30) != 0 && eax_34 u< 0xff)
                        ebx_2 = eax_34 * ebx_2 u/ 0xff
                        var_c_1 = var_14_1 * var_c_1 u/ 0xff
                        eax_34 = var_14_1
                        esi_4 = var_14_1 * esi_4 u/ 0xff
                    
                    if (eax_18 == 0x10)
                        ecx_4 = ebx_2 + (0xff - eax_34) * ecx_4 u/ 0xff
                        edi_1 = (0xff - eax_34) * edi_1 u/ 0xff + var_c_1
                        var_8_1 = (0xff - eax_34) * var_8_1 u/ 0xff + esi_4
                    else if (eax_18 == 0x20)
                        ecx_4 += ebx_2
                        
                        if (ecx_4 u> 0xff)
                            ecx_4 = 0xff
                        
                        edi_1 += var_c_1
                        
                        if (edi_1 u> 0xff)
                            edi_1 = 0xff
                        
                        uint32_t eax_42 = var_8_1 + esi_4
                        var_8_1 = eax_42
                        
                        if (eax_42 u> 0xff)
                            var_8_1 = 0xff
                    else if (eax_18 == 0x40)
                        ecx_4 = ecx_4 * ebx_2 u/ 0xff
                        edi_1 = edi_1 * var_c_1 u/ 0xff
                        var_8_1 = var_8_1 * esi_4 u/ 0xff
                    
                    result = result_2 + 4
                    *(result - 4) = (ecx_4 << 8 | edi_1) << 8 | var_8_1
                    var_18_1 += result_1
                    ecx = arg1
                    result_2 = result
                    
                    if (var_1c_1 == 0)
                        break
                    
                    edx_7 = var_18_1
                
                esi = var_28
                edi = var_58
            
            esi += divs.dp.d(edx_2:eax_4, ebx)
            *(ecx + 0x14) += *(ecx + 0x20)
            var_28 = esi
        while (*(ecx + 0x1c) != 0)
    
    *(ecx + 0x1c) -= 1
    return result
}
