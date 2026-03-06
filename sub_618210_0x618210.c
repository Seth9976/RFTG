// 函数名称: sub_618210
// 虚拟地址: 0x618210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_618210(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edx = arg1
    int32_t* edx = arg1
    uint32_t ecx = zx.d(edx[0xf].b)
    int32_t eax = edx[0xd]
    uint32_t result = zx.d(*(edx + 0x3d))
    uint32_t ecx_1 = zx.d(*(edx + 0x3e))
    uint32_t result_1 = result
    
    while (edx[7] != 0)
        int32_t i = edx[6]
        edx[7] -= 1
        int32_t* var_8_1 = *edx
        void* var_c_1 = edx[5]
        
        while (i != 0)
            int32_t eax_5 = *var_8_1
            uint32_t esi_1 = zx.d((eax_5 u>> 0x10).b)
            i -= 1
            uint32_t edi_1 = zx.d((eax_5 u>> 8).b)
            uint32_t ecx_7 = zx.d(eax_5.b)
            
            if ((eax & 1) != 0)
                esi_1 = esi_1 * ecx u/ 0xff
                edi_1 = edi_1 * result_1 u/ 0xff
                ecx_7 = ecx_7 * ecx_1 u/ 0xff
                edx = arg1
            
            uint32_t* eax_9 = var_c_1
            var_8_1 = &var_8_1[1]
            *eax_9 = (ecx_7 << 8 | edi_1) << 8 | esi_1
            var_c_1 = &eax_9[1]
        
        result = edx[3]
        int32_t ecx_13 = edx[8]
        *edx += result
        edx[5] += ecx_13
    
    edx[7] -= 1
    return result
}
