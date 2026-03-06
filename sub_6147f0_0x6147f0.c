// 函数名称: sub_6147f0
// 虚拟地址: 0x6147f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6147f0(void* arg1)
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
            int32_t* edx_3 = *(ecx + 0x14)
            int32_t edi_1 = *(ecx + 0x18)
            *(ecx + 0x1c) -= 1
            int32_t* var_18_1 = edx_3
            int32_t edx_4 = 0x10000
            int32_t* var_28_1 = nullptr
            int32_t var_1c_1 = edi_1
            int32_t var_24_1 = 0xffffffff
            int32_t var_8_1 = 0x10000
            
            if (esi s>= 0x10000)
                uint32_t eax_9 = esi u>> 0x10
                var_c += eax_9
                esi += eax_9 * 0xffff0000
                var_20 = esi
            
            if (edi_1 != 0)
                int32_t eax_12 = eax & 0x70
                
                while (true)
                    var_1c_1 -= 1
                    
                    if (edx_4 s>= 0x10000)
                        uint32_t eax_14 = edx_4 u>> 0x10
                        int32_t esi_2 = var_24_1 + eax_14
                        var_24_1 = esi_2
                        var_8_1 = edx_4 + eax_14 * 0xffff0000
                        var_28_1 = *(ecx + 0xc) * var_c + (esi_2 << 2) + *ecx
                    
                    int32_t eax_20 = *var_28_1
                    uint32_t ecx_4 = zx.d((eax_20 u>> 8).b)
                    uint32_t eax_21 = zx.d(eax_20.b)
                    int32_t eax_22 = *var_18_1
                    uint32_t esi_3 = zx.d((eax_22 u>> 0x10).b)
                    uint32_t edi_2 = zx.d((eax_22 u>> 8).b)
                    uint32_t ebx_5 = zx.d(eax_22.b)
                    uint32_t ecx_7 = eax_22 u>> 0x18
                    uint32_t edx_8 = zx.d((eax_20 u>> 0x10).b)
                    
                    if (eax_12 == 0x10)
                        edi_2 = ecx_4
                        ebx_5 = eax_21
                        esi_3 = edx_8
                        ecx_7 = 0xff
                    else if (eax_12 == 0x20)
                        esi_3 += edx_8
                        
                        if (esi_3 u> 0xff)
                            esi_3 = 0xff
                        
                        edi_2 += ecx_4
                        
                        if (edi_2 u> 0xff)
                            edi_2 = 0xff
                        
                        ebx_5 += eax_21
                        
                        if (ebx_5 u> 0xff)
                            ebx_5 = 0xff
                    else if (eax_12 == 0x40)
                        esi_3 = esi_3 * edx_8 u/ 0xff
                        edi_2 = edi_2 * ecx_4 u/ 0xff
                        ebx_5 = ebx_5 * eax_21 u/ 0xff
                    
                    uint32_t* eax_27 = var_18_1
                    var_8_1 += result_1
                    *eax_27 = ((ecx_7 << 8 | esi_3) << 8 | edi_2) << 8 | ebx_5
                    ecx = arg1
                    var_18_1 = &eax_27[1]
                    
                    if (var_1c_1 == 0)
                        break
                    
                    edx_4 = var_8_1
                
                esi = var_20
            
            esi += divs.dp.d(edx:eax_3, edi)
            result = *(ecx + 0x20)
            *(ecx + 0x14) += result
            var_20 = esi
        while (*(ecx + 0x1c) != 0)
    
    *(ecx + 0x1c) -= 1
    return result
}
