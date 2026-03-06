// 函数名称: sub_616730
// 虚拟地址: 0x616730
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_616730(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = arg1
    int32_t* result = arg1
    int32_t ecx = result[0xd]
    
    while (result[7] != 0)
        int32_t* ecx_1 = result[5]
        result[7] -= 1
        int32_t* var_14_1 = ecx_1
        int32_t i_1 = result[6]
        int32_t* var_10_1 = *result
        int32_t i = i_1
        
        if (i_1 != 0)
            int32_t eax_1 = ecx & 0x70
            
            do
                int32_t eax_2 = *var_10_1
                i -= 1
                uint32_t edx_3 = zx.d((eax_2 u>> 0x10).b)
                uint32_t edx_4 = zx.d((eax_2 u>> 8).b)
                uint32_t edx_5 = zx.d(eax_2.b)
                int32_t eax_4 = *var_14_1
                uint32_t esi_1 = zx.d((eax_4 u>> 0x10).b)
                uint32_t edi_1 = zx.d((eax_4 u>> 8).b)
                uint32_t ebx_5 = zx.d(eax_4.b)
                uint32_t ecx_7 = eax_4 u>> 0x18
                
                if (eax_1 == 0x10)
                    edi_1 = edx_4
                    ebx_5 = edx_3
                    esi_1 = edx_5
                    ecx_7 = 0xff
                else if (eax_1 == 0x20)
                    esi_1 += edx_5
                    
                    if (esi_1 u> 0xff)
                        esi_1 = 0xff
                    
                    edi_1 += edx_4
                    
                    if (edi_1 u> 0xff)
                        edi_1 = 0xff
                    
                    ebx_5 += edx_3
                    
                    if (ebx_5 u> 0xff)
                        ebx_5 = 0xff
                else if (eax_1 == 0x40)
                    esi_1 = esi_1 * edx_5 u/ 0xff
                    edi_1 = edi_1 * edx_4 u/ 0xff
                    ebx_5 = ebx_5 * edx_3 u/ 0xff
                
                uint32_t* eax_9 = var_14_1
                var_10_1 = &var_10_1[1]
                *eax_9 = ((ecx_7 << 8 | esi_1) << 8 | edi_1) << 8 | ebx_5
                var_14_1 = &eax_9[1]
            while (i != 0)
            
            result = arg1
        
        int32_t edx_12 = result[8]
        *result += result[3]
        result[5] += edx_12
    
    result[7] -= 1
    return result
}
