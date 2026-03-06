// 函数名称: sub_61a150
// 虚拟地址: 0x61a150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_61a150(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = arg1
    int32_t* result = arg1
    int32_t ecx = result[0xd]
    int32_t var_2c = ecx
    
    while (result[7] != 0)
        int32_t* edx_1 = *result
        result[7] -= 1
        int32_t* var_18_1 = edx_1
        int32_t* var_1c_1 = result[5]
        int32_t i_1 = result[6]
        int32_t i = i_1
        
        if (i_1 != 0)
            int32_t eax_3 = ecx & 0x70
            
            do
                int32_t eax_5 = *var_18_1
                i -= 1
                uint32_t edi_1 = zx.d((eax_5 u>> 0x10).b)
                uint32_t edx_5 = zx.d(eax_5.b)
                int32_t eax_7 = *var_1c_1
                uint32_t var_c_1 = zx.d((eax_5 u>> 8).b)
                uint32_t esi_2 = eax_5 u>> 0x18
                uint32_t var_8_1 = zx.d((eax_7 u>> 8).b)
                uint32_t var_14_1 = edi_1
                uint32_t ecx_6 = zx.d((eax_7 u>> 0x10).b)
                uint32_t ebx_4 = zx.d(eax_7.b)
                
                if ((ecx & 0x30) != 0 && edx_5 u< 0xff)
                    esi_2 = edx_5 * esi_2 u/ 0xff
                    var_14_1 = edx_5 * edi_1 u/ 0xff
                    edi_1 = var_14_1
                    var_c_1 = edx_5 * var_c_1 u/ 0xff
                
                if (eax_3 == 0x10)
                    ebx_4 = esi_2 + (0xff - edx_5) * ebx_4 u/ 0xff
                    var_8_1 = (0xff - edx_5) * var_8_1 u/ 0xff + var_14_1
                    ecx_6 = (0xff - edx_5) * ecx_6 u/ 0xff + var_c_1
                else if (eax_3 == 0x20)
                    ebx_4 += esi_2
                    
                    if (ebx_4 u> 0xff)
                        ebx_4 = 0xff
                    
                    uint32_t eax_16 = var_8_1 + edi_1
                    var_8_1 = eax_16
                    
                    if (eax_16 u> 0xff)
                        var_8_1 = 0xff
                    
                    ecx_6 += var_c_1
                    
                    if (ecx_6 u> 0xff)
                        ecx_6 = 0xff
                else if (eax_3 == 0x40)
                    ebx_4 = ebx_4 * esi_2 u/ 0xff
                    var_8_1 = var_8_1 * edi_1 u/ 0xff
                    ecx_6 = ecx_6 * var_c_1 u/ 0xff
                
                var_18_1 = &var_18_1[1]
                *var_1c_1 = (ecx_6 << 8 | var_8_1) << 8 | ebx_4
                var_1c_1 = &var_1c_1[1]
            while (i != 0)
            
            result = arg1
            ecx = var_2c
        
        *result += result[3]
        result[5] += result[8]
    
    result[7] -= 1
    return result
}
