// 函数名称: sub_61ae50
// 虚拟地址: 0x61ae50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_61ae50(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = arg1
    int32_t* result = arg1
    int32_t ecx = result[0xd]
    int32_t var_30 = ecx
    
    while (result[7] != 0)
        int32_t* edx_1 = *result
        result[7] -= 1
        int32_t* var_1c_1 = edx_1
        int32_t* var_20_1 = result[5]
        int32_t i_1 = result[6]
        int32_t i = i_1
        
        if (i_1 != 0)
            int32_t eax_3 = ecx & 0x70
            
            do
                int32_t eax_5 = *var_1c_1
                i -= 1
                uint32_t var_10_1 = zx.d((eax_5 u>> 0x10).b)
                uint32_t eax_6 = zx.d(eax_5.b)
                uint32_t var_14_1 = zx.d((eax_5 u>> 8).b)
                int32_t eax_7 = *var_20_1
                uint32_t ebx_1 = zx.d((eax_7 u>> 0x10).b)
                uint32_t esi_1 = zx.d((eax_7 u>> 8).b)
                uint32_t edi_2 = eax_5 u>> 0x18
                uint32_t ecx_7 = eax_7 u>> 0x18
                uint32_t var_8_1 = zx.d(eax_7.b)
                
                if ((ecx & 0x30) != 0 && eax_6 u< 0xff)
                    edi_2 = eax_6 * edi_2 u/ 0xff
                    var_10_1 = eax_6 * var_10_1 u/ 0xff
                    var_14_1 = eax_6 * var_14_1 u/ 0xff
                
                if (eax_3 == 0x10)
                    ebx_1 = edi_2 + (0xff - eax_6) * ebx_1 u/ 0xff
                    var_8_1 = (0xff - eax_6) * var_8_1 u/ 0xff + var_14_1
                    ecx_7 = (0xff - eax_6) * ecx_7 u/ 0xff + eax_6
                    esi_1 = (0xff - eax_6) * esi_1 u/ 0xff + var_10_1
                else if (eax_3 == 0x20)
                    ebx_1 += edi_2
                    
                    if (ebx_1 u> 0xff)
                        ebx_1 = 0xff
                    
                    esi_1 += var_10_1
                    
                    if (esi_1 u> 0xff)
                        esi_1 = 0xff
                    
                    uint32_t eax_18 = var_8_1 + var_14_1
                    var_8_1 = eax_18
                    
                    if (eax_18 u> 0xff)
                        var_8_1 = 0xff
                else if (eax_3 == 0x40)
                    ebx_1 = ebx_1 * edi_2 u/ 0xff
                    var_8_1 = var_8_1 * var_14_1 u/ 0xff
                    esi_1 = esi_1 * var_10_1 u/ 0xff
                
                var_1c_1 = &var_1c_1[1]
                *var_20_1 = ((ecx_7 << 8 | ebx_1) << 8 | esi_1) << 8 | var_8_1
                var_20_1 = &var_20_1[1]
            while (i != 0)
            
            result = arg1
            ecx = var_30
        
        *result += result[3]
        result[5] += result[8]
    
    result[7] -= 1
    return result
}
