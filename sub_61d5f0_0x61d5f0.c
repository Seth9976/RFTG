// 函数名称: sub_61d5f0
// 虚拟地址: 0x61d5f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_61d5f0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = arg1
    int32_t* result = arg1
    uint32_t edx = zx.d(result[0xf].b)
    int32_t ecx = result[0xd]
    uint32_t edx_1 = zx.d(*(result + 0x3d))
    uint32_t edx_2 = zx.d(*(result + 0x3e))
    uint32_t edx_3 = zx.d(*(result + 0x3f))
    int32_t var_2c = ecx
    
    while (result[7] != 0)
        int32_t* edx_4 = *result
        result[7] -= 1
        int32_t* var_8_1 = edx_4
        void* var_10_1 = result[5]
        int32_t i_1 = result[6]
        int32_t i = i_1
        
        if (i_1 != 0)
            do
                int32_t eax_5 = *var_8_1
                i -= 1
                uint32_t ebx_1 = zx.d((eax_5 u>> 0x10).b)
                uint32_t ecx_2 = eax_5 u>> 0x18
                uint32_t edi_1 = zx.d((eax_5 u>> 8).b)
                uint32_t esi_1 = zx.d(eax_5.b)
                
                if ((ecx & 1) != 0)
                    esi_1 = esi_1 * edx u/ 0xff
                    edi_1 = edi_1 * edx_1 u/ 0xff
                    ebx_1 = ebx_1 * edx_2 u/ 0xff
                
                if ((ecx & 2) != 0)
                    ecx_2 = ecx_2 * edx_3 u/ 0xff
                
                uint32_t* eax_10 = var_10_1
                var_8_1 = &var_8_1[1]
                *eax_10 = ((ecx_2 << 8 | esi_1) << 8 | edi_1) << 8 | ebx_1
                var_10_1 = &eax_10[1]
            while (i != 0)
            
            ecx = var_2c
            result = arg1
        
        *result += result[3]
        result[5] += result[8]
    
    result[7] -= 1
    return result
}
