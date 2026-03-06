// 函数名称: sub_618cd0
// 虚拟地址: 0x618cd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_618cd0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edx = arg1
    int32_t* edx = arg1
    uint32_t eax = zx.d(edx[0xf].b)
    int32_t ecx = edx[0xd]
    uint32_t eax_1 = zx.d(*(edx + 0x3d))
    uint32_t eax_2 = zx.d(*(edx + 0x3e))
    uint32_t result = zx.d(*(edx + 0x3f))
    int32_t var_2c = ecx
    uint32_t result_1 = result
    
    while (edx[7] != 0)
        int32_t* eax_3 = *edx
        edx[7] -= 1
        int32_t* var_8_1 = eax_3
        void* var_10_1 = edx[5]
        int32_t i_1 = edx[6]
        int32_t i = i_1
        
        if (i_1 != 0)
            do
                int32_t eax_9 = *var_8_1
                i -= 1
                uint32_t esi_1 = zx.d((eax_9 u>> 0x10).b)
                uint32_t ecx_3 = eax_9 u>> 0x18
                uint32_t edi_1 = zx.d((eax_9 u>> 8).b)
                uint32_t ebx_5 = zx.d(eax_9.b)
                
                if ((ecx & 1) != 0)
                    esi_1 = esi_1 * eax u/ 0xff
                    edi_1 = edi_1 * eax_1 u/ 0xff
                    ebx_5 = ebx_5 * eax_2 u/ 0xff
                    edx = arg1
                
                if ((ecx & 2) != 0)
                    ecx_3 = ecx_3 * result_1 u/ 0xff
                    edx = arg1
                
                uint32_t* eax_14 = var_10_1
                var_8_1 = &var_8_1[1]
                *eax_14 = ((ecx_3 << 8 | esi_1) << 8 | edi_1) << 8 | ebx_5
                var_10_1 = &eax_14[1]
            while (i != 0)
            
            ecx = var_2c
        
        *edx += edx[3]
        result = edx[8]
        edx[5] += result
    
    edx[7] -= 1
    return result
}
