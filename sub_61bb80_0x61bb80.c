// 函数名称: sub_61bb80
// 虚拟地址: 0x61bb80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_61bb80(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edx = arg1
    int32_t* edx = arg1
    int32_t result = edx[0xd]
    int32_t result_1 = result
    
    if (edx[7] != 0)
        uint32_t ebx
        uint32_t var_30_1 = ebx
        
        do
            int32_t* ecx_1 = *edx
            edx[7] -= 1
            int32_t* var_18_1 = ecx_1
            int32_t* var_1c_1 = edx[5]
            int32_t i_1 = edx[6]
            int32_t i = i_1
            
            if (i_1 != 0)
                int32_t eax = result & 0x70
                
                do
                    int32_t eax_2 = *var_18_1
                    i -= 1
                    uint32_t var_10_1 = zx.d((eax_2 u>> 0x10).b)
                    uint32_t edi_1 = zx.d(eax_2.b)
                    int32_t eax_4 = *var_1c_1
                    uint32_t var_c_1 = zx.d((eax_2 u>> 8).b)
                    uint32_t esi_2 = eax_2 u>> 0x18
                    uint32_t var_14_1 = edi_1
                    uint32_t ecx_13 = zx.d((eax_4 u>> 0x10).b)
                    ebx = zx.d((eax_4 u>> 8).b)
                    uint32_t var_8_1 = zx.d(eax_4.b)
                    
                    if ((result & 0x30) != 0 && esi_2 u< 0xff)
                        var_14_1 = edi_1 * esi_2 u/ 0xff
                        var_c_1 = var_c_1 * esi_2 u/ 0xff
                        edi_1 = var_14_1
                        var_10_1 = var_10_1 * esi_2 u/ 0xff
                        edx = arg1
                    
                    if (eax == 0x10)
                        ecx_13 = (0xff - esi_2) * ecx_13 u/ 0xff + var_14_1
                        ebx = (0xff - esi_2) * ebx u/ 0xff + var_c_1
                        var_8_1 = (0xff - esi_2) * var_8_1 u/ 0xff + var_10_1
                        edx = arg1
                    else if (eax == 0x20)
                        ecx_13 += edi_1
                        
                        if (ecx_13 u> 0xff)
                            ecx_13 = 0xff
                        
                        ebx += var_c_1
                        
                        if (ebx u> 0xff)
                            ebx = 0xff
                        
                        uint32_t eax_14 = var_8_1 + var_10_1
                        var_8_1 = eax_14
                        
                        if (eax_14 u> 0xff)
                            var_8_1 = 0xff
                    else if (eax == 0x40)
                        ecx_13 = ecx_13 * edi_1 u/ 0xff
                        ebx = ebx * var_c_1 u/ 0xff
                        var_8_1 = var_8_1 * var_10_1 u/ 0xff
                        edx = arg1
                    
                    var_18_1 = &var_18_1[1]
                    *var_1c_1 = (ecx_13 << 8 | ebx) << 8 | var_8_1
                    var_1c_1 = &var_1c_1[1]
                while (i != 0)
                
                result = result_1
            
            *edx += edx[3]
            edx[5] += edx[8]
        while (edx[7] != 0)
    
    edx[7] -= 1
    return result
}
