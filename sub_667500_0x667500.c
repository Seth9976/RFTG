// 函数名称: sub_667500
// 虚拟地址: 0x667500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_667500(void* arg1, char* arg2, char* arg3)
{
    // 第一条实际指令: char* ecx = arg2
    char* ecx = arg2
    int32_t ebx
    int32_t var_8 = ebx
    int32_t result = (zx.d(*(arg1 + 0xb)) + 7) s>> 3
    int32_t i_3 = *(arg1 + 4) - result
    char* edi = arg3
    
    if (result != 0)
        int32_t esi_1 = result
        int32_t i
        
        do
            ebx.b = *edi
            ebx.b u>>= 1
            *ecx += ebx.b
            edi = &edi[1]
            ecx = &ecx[1]
            i = esi_1
            esi_1 -= 1
        while (i != 1)
    
    if (i_3 != 0)
        void* esi_3 = ecx - result
        void* edi_1 = edi - ecx
        int32_t i_2 = i_3
        int32_t i_1
        
        do
            int32_t eax_4
            int32_t edx_3
            edx_3:eax_4 = sx.q(zx.d(*(edi_1 + ecx)) + zx.d(*esi_3))
            result = (eax_4 - edx_3) s>> 1
            *ecx += result.b
            ecx = &ecx[1]
            esi_3 += 1
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    return result
}
