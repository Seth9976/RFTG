// 函数名称: sub_61f0e0
// 虚拟地址: 0x61f0e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_61f0e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = arg1
    int32_t* result = arg1
    uint32_t edx = zx.d(result[0xf].b)
    int32_t ecx = result[0xd]
    uint32_t ecx_1 = zx.d(*(result + 0x3d))
    uint32_t edx_1 = zx.d(*(result + 0x3e))
    
    while (result[7] != 0)
        int32_t i = result[6]
        result[7] -= 1
        int32_t* var_8_1 = *result
        void* var_c_1 = result[5]
        
        if (i != 0)
            do
                int32_t eax_3 = *var_8_1
                i -= 1
                uint32_t ecx_4 = eax_3 u>> 0x18
                uint32_t edi_1 = zx.d((eax_3 u>> 0x10).b)
                uint32_t esi_1 = zx.d((eax_3 u>> 8).b)
                
                if ((ecx & 1) != 0)
                    esi_1 = esi_1 * edx u/ 0xff
                    edi_1 = edi_1 * ecx_1 u/ 0xff
                    ecx_4 = ecx_4 * edx_1 u/ 0xff
                
                uint32_t* eax_8 = var_c_1
                var_8_1 = &var_8_1[1]
                *eax_8 = (ecx_4 << 8 | edi_1) << 8 | esi_1
                var_c_1 = &eax_8[1]
            while (i != 0)
            
            result = arg1
        
        int32_t edx_11 = result[8]
        *result += result[3]
        result[5] += edx_11
    
    result[7] -= 1
    return result
}
