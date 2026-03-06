// 函数名称: sub_61a690
// 虚拟地址: 0x61a690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_61a690(void* arg1)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t eax = *(esi + 0x34)
    uint32_t edx = zx.d(*(esi + 0x3d))
    uint32_t eax_1 = zx.d(*(esi + 0x3e))
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(*(esi + 8) << 0x10)
    int32_t edi = *(esi + 0x1c)
    uint32_t ecx = zx.d(*(esi + 0x3c))
    int32_t ecx_1 = 0
    arg1 = nullptr
    int32_t var_10 = 0
    *(esi + 0x18)
    int32_t result = divs.dp.d(sx.q(*(esi + 4) << 0x10), *(esi + 0x18))
    int32_t result_1 = result
    
    if (edi != 0)
        do
            int32_t result_3 = *(esi + 0x14)
            int32_t i_1 = *(esi + 0x18)
            result = 0xffffffff
            *(esi + 0x1c) -= 1
            int32_t result_2 = result_3
            int32_t edx_4 = 0x10000
            int32_t* var_18_1 = nullptr
            int32_t i = i_1
            int32_t var_14_1 = 0xffffffff
            int32_t var_8_1 = 0x10000
            
            if (ecx_1 s>= 0x10000)
                uint32_t eax_10 = ecx_1 u>> 0x10
                arg1 += eax_10
                result = eax_10 * 0xffff0000
                ecx_1 += result
                var_10 = ecx_1
            
            if (i_1 != 0)
                do
                    i -= 1
                    
                    if (edx_4 s>= 0x10000)
                        uint32_t eax_14 = edx_4 u>> 0x10
                        int32_t ecx_3 = var_14_1 + eax_14
                        edx_4 += eax_14 * 0xffff0000
                        var_14_1 = ecx_3
                        var_8_1 = edx_4
                        var_18_1 = *(esi + 0xc) * arg1 + (ecx_3 << 2) + *esi
                    
                    int32_t eax_20 = *var_18_1
                    uint32_t edi_2 = eax_20 u>> 0x18
                    uint32_t ebx_1 = zx.d((eax_20 u>> 0x10).b)
                    uint32_t ecx_7 = zx.d((eax_20 u>> 8).b)
                    
                    if ((eax & 1) != 0)
                        edi_2 = edi_2 * ecx u/ 0xff
                        ebx_1 = ebx_1 * edx u/ 0xff
                        ecx_7 = ecx_7 * eax_1 u/ 0xff
                        edx_4 = var_8_1
                    
                    edx_4 += result_1
                    *result_2 = (ecx_7 << 8 | ebx_1) << 8 | edi_2
                    result = result_2 + 4
                    var_8_1 = edx_4
                    result_2 = result
                while (i != 0)
                
                ecx_1 = var_10
            
            ecx_1 += divs.dp.d(edx_1:eax_4, edi)
            *(esi + 0x14) += *(esi + 0x20)
            var_10 = ecx_1
        while (*(esi + 0x1c) != 0)
    
    *(esi + 0x1c) -= 1
    return result
}
