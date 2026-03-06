// 函数名称: sub_616880
// 虚拟地址: 0x616880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_616880(void* arg1)
{
    // 第一条实际指令: void* ecx = arg1
    void* ecx = arg1
    int32_t eax = *(ecx + 0x34)
    int32_t eax_3
    int32_t edx
    edx:eax_3 = sx.q(*(ecx + 8) << 0x10)
    int32_t edi = *(ecx + 0x1c)
    int32_t esi = 0
    int32_t var_c = 0
    int32_t var_20 = 0
    *(ecx + 0x18)
    int32_t result = divs.dp.d(sx.q(*(ecx + 4) << 0x10), *(ecx + 0x18))
    int32_t result_1 = result
    
    if (edi != 0)
        do
            int32_t result_3 = *(ecx + 0x14)
            int32_t edi_1 = *(ecx + 0x18)
            result = 0xffffffff
            *(ecx + 0x1c) -= 1
            int32_t result_2 = result_3
            int32_t edx_3 = 0x10000
            int32_t* var_28_1 = nullptr
            int32_t var_1c_1 = edi_1
            int32_t var_24_1 = 0xffffffff
            int32_t var_8_1 = 0x10000
            
            if (esi s>= 0x10000)
                uint32_t eax_9 = esi u>> 0x10
                var_c += eax_9
                result = eax_9 * 0xffff0000
                esi += result
                var_20 = esi
            
            if (edi_1 != 0)
                int32_t eax_11 = eax & 0x70
                
                while (true)
                    var_1c_1 -= 1
                    
                    if (edx_3 s>= 0x10000)
                        uint32_t eax_13 = edx_3 u>> 0x10
                        int32_t esi_2 = var_24_1 + eax_13
                        var_24_1 = esi_2
                        var_8_1 = edx_3 + eax_13 * 0xffff0000
                        var_28_1 = *(ecx + 0xc) * var_c + (esi_2 << 2) + *ecx
                    
                    int32_t eax_19 = *var_28_1
                    uint32_t ecx_2 = zx.d((eax_19 u>> 0x10).b)
                    uint32_t ecx_3 = zx.d((eax_19 u>> 8).b)
                    uint32_t edx_9 = zx.d(eax_19.b)
                    int32_t eax_21 = *result_2
                    uint32_t esi_3 = zx.d((eax_21 u>> 0x10).b)
                    uint32_t edi_2 = zx.d((eax_21 u>> 8).b)
                    uint32_t ebx_5 = zx.d(eax_21.b)
                    uint32_t ecx_5 = eax_21 u>> 0x18
                    
                    if (eax_11 == 0x10)
                        edi_2 = ecx_3
                        ebx_5 = ecx_2
                        esi_3 = edx_9
                        ecx_5 = 0xff
                    else if (eax_11 == 0x20)
                        esi_3 += edx_9
                        
                        if (esi_3 u> 0xff)
                            esi_3 = 0xff
                        
                        edi_2 += ecx_3
                        
                        if (edi_2 u> 0xff)
                            edi_2 = 0xff
                        
                        ebx_5 += ecx_2
                        
                        if (ebx_5 u> 0xff)
                            ebx_5 = 0xff
                    else if (eax_11 == 0x40)
                        esi_3 = esi_3 * edx_9 u/ 0xff
                        edi_2 = edi_2 * ecx_3 u/ 0xff
                        ebx_5 = ebx_5 * ecx_2 u/ 0xff
                    
                    *result_2 = ((ecx_5 << 8 | esi_3) << 8 | edi_2) << 8 | ebx_5
                    var_8_1 += result_1
                    ecx = arg1
                    result = result_2 + 4
                    result_2 = result
                    
                    if (var_1c_1 == 0)
                        break
                    
                    edx_3 = var_8_1
                
                esi = var_20
            
            esi += divs.dp.d(edx:eax_3, edi)
            *(ecx + 0x14) += *(ecx + 0x20)
            var_20 = esi
        while (*(ecx + 0x1c) != 0)
    
    *(ecx + 0x1c) -= 1
    return result
}
