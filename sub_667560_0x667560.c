// 函数名称: sub_667560
// 虚拟地址: 0x667560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_667560(uint32_t arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: char* edx = arg2
    char* edx = arg2
    char* ecx = arg3
    uint32_t result = zx.d(*ecx)
    char ebx_1 = *edx + result.b
    void* esi_1 = *(arg1 + 4) + edx
    *edx = ebx_1
    void* ecx_1 = &ecx[1]
    uint32_t result_1 = result
    arg2 = &edx[1]
    
    if (&edx[1] u< esi_1)
        while (true)
            uint32_t result_2 = zx.d(*ecx_1)
            uint32_t ebx_2 = zx.d(ebx_1)
            uint32_t edi_1 = result_2 - result
            arg1 = ebx_2
            uint32_t ebx_3 = ebx_2 - result
            int32_t eax_2
            int32_t edx_2
            edx_2:eax_2 = sx.q(edi_1)
            int32_t ecx_5 = (eax_2 ^ edx_2) - edx_2
            int32_t eax_4
            int32_t edx_3
            edx_3:eax_4 = sx.q(ebx_3)
            int32_t esi_4 = (eax_4 ^ edx_3) - edx_3
            int32_t eax_6
            int32_t edx_4
            edx_4:eax_6 = sx.q(ebx_3 + edi_1)
            
            if (esi_4 s< ecx_5)
                ecx_5 = esi_4
                arg1 = result_2
            
            if ((eax_6 ^ edx_4) - edx_4 s< ecx_5)
                arg1 = result_1
            
            result_1 = result_2
            uint32_t ecx_8 = arg1 + zx.d(*arg2)
            *arg2 = ecx_8.b
            result = arg2 + 1
            arg2 = result
            
            if (result u>= esi_1)
                break
            
            ecx_1 += 1
            result = result_1
            ebx_1 = ecx_8.b
    
    return result
}
