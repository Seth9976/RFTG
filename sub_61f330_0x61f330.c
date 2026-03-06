// 函数名称: sub_61f330
// 虚拟地址: 0x61f330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_61f330(int32_t* arg1)
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
        void* var_1c_1 = result[5]
        int32_t i_1 = result[6]
        int32_t i = i_1
        
        if (i_1 != 0)
            int32_t ecx_1 = ecx & 0x70
            
            do
                int32_t eax_7 = *var_18_1
                i -= 1
                uint32_t var_c_1 = zx.d((eax_7 u>> 0x10).b)
                int32_t eax_9 = *var_1c_1
                uint32_t var_14_1 = zx.d(eax_7.b)
                uint32_t ebx_1 = zx.d((eax_7 u>> 8).b)
                uint32_t edi_1 = zx.d(eax_9.b)
                uint32_t esi_2 = eax_7 u>> 0x18
                uint32_t ecx_8 = zx.d((eax_9 u>> 0x10).b)
                uint32_t var_8_1 = zx.d((eax_9 u>> 8).b)
                
                if ((ecx & 1) != 0)
                    ebx_1 = ebx_1 * edx u/ 0xff
                    var_c_1 = var_c_1 * edx_1 u/ 0xff
                    esi_2 = esi_2 * edx_2 u/ 0xff
                
                uint32_t eax_14
                
                if ((ecx & 2) == 0)
                    eax_14 = var_14_1
                else
                    eax_14 = var_14_1 * edx_3 u/ 0xff
                    var_14_1 = eax_14
                
                if ((ecx & 0x30) != 0 && eax_14 u< 0xff)
                    ebx_1 = eax_14 * ebx_1 u/ 0xff
                    var_c_1 = var_14_1 * var_c_1 u/ 0xff
                    eax_14 = var_14_1
                    esi_2 = var_14_1 * esi_2 u/ 0xff
                
                if (ecx_1 == 0x10)
                    var_8_1 = (0xff - eax_14) * var_8_1 u/ 0xff + var_c_1
                    ecx_8 = esi_2 + (0xff - eax_14) * ecx_8 u/ 0xff
                    edi_1 = (0xff - eax_14) * edi_1 u/ 0xff + ebx_1
                else if (ecx_1 == 0x20)
                    edi_1 += ebx_1
                    
                    if (edi_1 u> 0xff)
                        edi_1 = 0xff
                    
                    uint32_t eax_22 = var_8_1 + var_c_1
                    var_8_1 = eax_22
                    
                    if (eax_22 u> 0xff)
                        var_8_1 = 0xff
                    
                    ecx_8 += esi_2
                    
                    if (ecx_8 u> 0xff)
                        ecx_8 = 0xff
                else if (ecx_1 == 0x40)
                    var_8_1 = var_8_1 * var_c_1 u/ 0xff
                    ecx_8 = ecx_8 * esi_2 u/ 0xff
                    edi_1 = edi_1 * ebx_1 u/ 0xff
                
                var_18_1 = &var_18_1[1]
                *var_1c_1 = (ecx_8 << 8 | var_8_1) << 8 | edi_1
                var_1c_1 += 4
            while (i != 0)
            
            ecx = var_44
            result = arg1
        
        *result += result[3]
        result[5] += result[8]
    
    result[7] -= 1
    return result
}
