// 函数名称: sub_680a00
// 虚拟地址: 0x680a00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_680a00(void* arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* edi = arg1
    void* eax = *(edi + 0x1c4)
    void* var_8_1 = eax
    
    if (*(eax + 0x5c) s>= *(edi + 0x138))
        int32_t i = 0
        arg1 = *(edi + 0xd8)
        
        if (*(edi + 0x24) s> 0)
            void* esi_1 = eax + 0xc
            
            do
                (*(esi_1 + 0x28))(edi, arg1, *(arg2 + (i << 2)) + ((*(esi_1 + 0x58) * *arg3) << 2), 
                    esi_1)
                arg1 += 0x54
                i += 1
                esi_1 += 4
            while (i s< *(edi + 0x24))
            
            eax = var_8_1
        
        *(eax + 0x5c) = 0
    
    int32_t ebx_2 = *(edi + 0x138) - *(eax + 0x5c)
    int32_t ecx_5 = *(eax + 0x60)
    
    if (ebx_2 u> ecx_5)
        ebx_2 = ecx_5
    
    int32_t ecx_6 = *arg5
    int32_t edx_6 = arg6 - ecx_6
    
    if (ebx_2 u> edx_6)
        ebx_2 = edx_6
    
    (*(*(edi + 0x1c8) + 4))(edi, eax + 0xc, *(eax + 0x5c), arg4 + (ecx_6 << 2), ebx_2)
    *arg5 += ebx_2
    *(var_8_1 + 0x60) -= ebx_2
    *(var_8_1 + 0x5c) += ebx_2
    int32_t* result = *(var_8_1 + 0x5c)
    
    if (result s>= *(edi + 0x138))
        result = arg3
        *result += 1
    
    return result
}
