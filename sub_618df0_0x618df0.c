// 函数名称: sub_618df0
// 虚拟地址: 0x618df0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_618df0(void* arg1)
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
            void* edx_4 = *(esi + 0x14)
            *(esi + 0x1c) -= 1
            int32_t edi_1 = 0x10000
            void* var_20_1 = edx_4
            void* edx_5 = *(esi + 0x18)
            int32_t* var_1c_1 = nullptr
            arg1 = edx_5
            int32_t var_18_1 = 0xffffffff
            int32_t var_10_1 = 0x10000
            
            if (ecx_1 s>= 0x10000)
                uint32_t eax_10 = ecx_1 u>> 0x10
                var_8 += eax_10
                ecx_1 += eax_10 * 0xffff0000
                var_14 = ecx_1
            
            if (edx_5 != 0)
                int32_t edx_7 = ebx_1 & 1
                int32_t var_24_1 = edx_7
                
                while (true)
                    arg1 -= 1
                    
                    if (edi_1 s>= 0x10000)
                        uint32_t eax_13 = edi_1 u>> 0x10
                        int32_t ecx_3 = var_18_1 + eax_13
                        var_18_1 = ecx_3
                        var_10_1 = edi_1 + eax_13 * 0xffff0000
                        var_1c_1 = *(esi + 0xc) * var_8 + (ecx_3 << 2) + *esi
                    
                    int32_t eax_19 = *var_1c_1
                    uint32_t edi_3 = zx.d((eax_19 u>> 0x10).b)
                    uint32_t ecx_6 = eax_19 u>> 0x18
                    uint32_t ebx_7 = zx.d((eax_19 u>> 8).b)
                    uint32_t var_c_1 = zx.d(eax_19.b)
                    
                    if (edx_7 != 0)
                        edi_3 = edi_3 * eax u/ 0xff
                        ebx_7 = ebx_7 * ecx u/ 0xff
                        var_c_1 = var_c_1 * edx u/ 0xff
                    
                    if ((ebx_1 & 2) != 0)
                        ecx_6 = ecx_6 * eax_1 u/ 0xff
                    
                    edi_1 = var_10_1 + result_1
                    *var_20_1 = ((ecx_6 << 8 | edi_3) << 8 | ebx_7) << 8 | var_c_1
                    var_10_1 = edi_1
                    var_20_1 += 4
                    
                    if (arg1 == 0)
                        break
                    
                    edx_7 = var_24_1
                
                ebx_1 = ebx
                ecx_1 = var_14
            
            ecx_1 += divs.dp.d(edx_1:eax_4, edi)
            result = *(esi + 0x20)
            *(esi + 0x14) += result
            var_14 = ecx_1
        while (*(esi + 0x1c) != 0)
    
    *(esi + 0x1c) -= 1
    return result
}
