// 函数名称: sub_615d00
// 虚拟地址: 0x615d00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_615d00(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = arg1
    int32_t* result = arg1
    int32_t ecx = result[0xd]
    
    while (result[7] != 0)
        int32_t i = result[6]
        result[7] -= 1
        int32_t* esi_1 = result[5]
        int32_t* var_10_1 = *result
        int32_t* var_14_1 = esi_1
        
        if (i != 0)
            int32_t eax_1 = ecx & 0x70
            
            do
                int32_t eax_3 = *var_10_1
                uint32_t edx_2 = zx.d((eax_3 u>> 0x10).b)
                uint32_t edx_3 = zx.d((eax_3 u>> 8).b)
                uint32_t edx_4 = zx.d(eax_3.b)
                int32_t eax_4 = *esi_1
                uint32_t esi_2 = zx.d(eax_4.b)
                uint32_t ecx_8 = zx.d((eax_4 u>> 0x10).b)
                uint32_t edi_1 = zx.d((eax_4 u>> 8).b)
                
                if (eax_1 == 0x10)
                    edi_1 = edx_3
                    ecx_8 = edx_2
                    esi_2 = edx_4
                else if (eax_1 == 0x20)
                    esi_2 += edx_4
                    
                    if (esi_2 u> 0xff)
                        esi_2 = 0xff
                    
                    edi_1 += edx_3
                    
                    if (edi_1 u> 0xff)
                        edi_1 = 0xff
                    
                    ecx_8 += edx_2
                    
                    if (ecx_8 u> 0xff)
                        ecx_8 = 0xff
                else if (eax_1 == 0x40)
                    esi_2 = esi_2 * edx_4 u/ 0xff
                    edi_1 = edi_1 * edx_3 u/ 0xff
                    ecx_8 = ecx_8 * edx_2 u/ 0xff
                
                var_10_1 = &var_10_1[1]
                *var_14_1 = (ecx_8 << 8 | edi_1) << 8 | esi_2
                i -= 1
                esi_1 = &var_14_1[1]
                var_14_1 = esi_1
            while (i != 0)
            
            result = arg1
        
        int32_t ecx_14 = result[8]
        *result += result[3]
        result[5] += ecx_14
    
    result[7] -= 1
    return result
}
