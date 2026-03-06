// 函数名称: sub_616b90
// 虚拟地址: 0x616b90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_616b90(void* arg1)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    uint32_t eax = zx.d(*(esi + 0x3c))
    uint32_t edx = zx.d(*(esi + 0x3e))
    uint32_t eax_1 = zx.d(*(esi + 0x3f))
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(*(esi + 8) << 0x10)
    int32_t edi = *(esi + 0x1c)
    uint32_t ecx = zx.d(*(esi + 0x3d))
    int32_t ebx = *(esi + 0x34)
    int32_t ecx_1 = 0
    int32_t var_8 = 0
    int32_t var_14 = 0
    *(esi + 0x18)
    int32_t result = divs.dp.d(sx.q(*(esi + 4) << 0x10), *(esi + 0x18))
    int32_t result_1 = result
    
    if (edi != 0)
        int32_t ebx_1 = ebx
        
        do
            int32_t result_3 = *(esi + 0x14)
            result = 0xffffffff
            *(esi + 0x1c) -= 1
            int32_t edi_1 = 0x10000
            int32_t result_2 = result_3
            void* edx_4 = *(esi + 0x18)
            int32_t* var_1c_1 = nullptr
            arg1 = edx_4
            int32_t var_18_1 = 0xffffffff
            int32_t var_10_1 = 0x10000
            
            if (ecx_1 s>= 0x10000)
                uint32_t eax_10 = ecx_1 u>> 0x10
                var_8 += eax_10
                result = eax_10 * 0xffff0000
                ecx_1 += result
                var_14 = ecx_1
            
            if (edx_4 != 0)
                int32_t edx_6 = ebx_1 & 1
                int32_t var_24_1 = edx_6
                
                while (true)
                    arg1 -= 1
                    
                    if (edi_1 s>= 0x10000)
                        uint32_t eax_12 = edi_1 u>> 0x10
                        int32_t ecx_3 = var_18_1 + eax_12
                        var_18_1 = ecx_3
                        var_10_1 = edi_1 + eax_12 * 0xffff0000
                        var_1c_1 = *(esi + 0xc) * var_8 + (ecx_3 << 2) + *esi
                    
                    int32_t eax_18 = *var_1c_1
                    uint32_t var_c_1 = zx.d((eax_18 u>> 0x10).b)
                    uint32_t ebx_3 = zx.d((eax_18 u>> 8).b)
                    uint32_t edi_3 = zx.d(eax_18.b)
                    uint32_t ecx_10 = 0xff
                    
                    if (edx_6 != 0)
                        edi_3 = edi_3 * eax u/ 0xff
                        ebx_3 = ebx_3 * ecx u/ 0xff
                        var_c_1 = var_c_1 * edx u/ 0xff
                    
                    if ((ebx_1 & 2) != 0)
                        ecx_10 = eax_1 * 0xff u/ 0xff
                    
                    edi_1 = var_10_1 + result_1
                    result = result_2 + 4
                    *(result - 4) = ((ecx_10 << 8 | edi_3) << 8 | ebx_3) << 8 | var_c_1
                    var_10_1 = edi_1
                    result_2 = result
                    
                    if (arg1 == 0)
                        break
                    
                    edx_6 = var_24_1
                
                ebx_1 = ebx
                ecx_1 = var_14
            
            ecx_1 += divs.dp.d(edx_1:eax_4, edi)
            *(esi + 0x14) += *(esi + 0x20)
            var_14 = ecx_1
        while (*(esi + 0x1c) != 0)
    
    *(esi + 0x1c) -= 1
    return result
}
