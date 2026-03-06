// 函数名称: sub_614050
// 虚拟地址: 0x614050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_614050(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = arg1
    int32_t* result = arg1
    uint32_t edx = zx.d(result[0xf].b)
    int32_t ecx = result[0xd]
    uint32_t edx_1 = zx.d(*(result + 0x3d))
    uint32_t edx_2 = zx.d(*(result + 0x3e))
    uint32_t edx_3 = zx.d(*(result + 0x3f))
    int32_t var_44 = ecx
    
    while (result[7] != 0)
        int32_t* edx_4 = *result
        result[7] -= 1
        int32_t* var_18_1 = edx_4
        int32_t* var_1c_1 = result[5]
        int32_t i_1 = result[6]
        int32_t i = i_1
        
        if (i_1 != 0)
            int32_t ecx_1 = ecx & 0x70
            
            do
                int32_t eax_7 = *var_18_1
                i -= 1
                uint32_t edi_1 = zx.d((eax_7 u>> 0x10).b)
                uint32_t ebx_1 = zx.d((eax_7 u>> 8).b)
                uint32_t var_c_1 = zx.d(eax_7.b)
                int32_t eax_9 = *var_1c_1
                uint32_t ecx_5 = zx.d((eax_9 u>> 0x10).b)
                uint32_t esi_1 = zx.d(eax_9.b)
                uint32_t var_14_1 = 0xff
                uint32_t var_8_1 = zx.d((eax_9 u>> 8).b)
                
                if ((ecx & 1) != 0)
                    edi_1 = edi_1 * edx u/ 0xff
                    ebx_1 = ebx_1 * edx_1 u/ 0xff
                    var_c_1 = var_c_1 * edx_2 u/ 0xff
                
                uint32_t edx_24
                
                if ((ecx & 2) == 0)
                    edx_24 = 0xff
                else
                    edx_24 = edx_3 * 0xff u/ 0xff
                    var_14_1 = edx_24
                
                if ((ecx & 0x30) != 0 && edx_24 u< 0xff)
                    edi_1 = edx_24 * edi_1 u/ 0xff
                    ebx_1 = var_14_1 * ebx_1 u/ 0xff
                    var_c_1 = var_14_1 * var_c_1 u/ 0xff
                    edx_24 = var_14_1
                
                if (ecx_1 == 0x10)
                    var_8_1 = (0xff - edx_24) * var_8_1 u/ 0xff + ebx_1
                    esi_1 = (0xff - edx_24) * esi_1 u/ 0xff + edi_1
                    ecx_5 = (0xff - edx_24) * ecx_5 u/ 0xff + var_c_1
                else if (ecx_1 == 0x20)
                    esi_1 += edi_1
                    
                    if (esi_1 u> 0xff)
                        esi_1 = 0xff
                    
                    uint32_t eax_22 = var_8_1 + ebx_1
                    var_8_1 = eax_22
                    
                    if (eax_22 u> 0xff)
                        var_8_1 = 0xff
                    
                    ecx_5 += var_c_1
                    
                    if (ecx_5 u> 0xff)
                        ecx_5 = 0xff
                else if (ecx_1 == 0x40)
                    var_8_1 = var_8_1 * ebx_1 u/ 0xff
                    esi_1 = esi_1 * edi_1 u/ 0xff
                    ecx_5 = ecx_5 * var_c_1 u/ 0xff
                
                var_18_1 = &var_18_1[1]
                *var_1c_1 = (ecx_5 << 8 | var_8_1) << 8 | esi_1
                var_1c_1 = &var_1c_1[1]
            while (i != 0)
            
            ecx = var_44
            result = arg1
        
        *result += result[3]
        result[5] += result[8]
    
    result[7] -= 1
    return result
}
