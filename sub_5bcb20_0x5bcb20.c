// 函数名称: sub_5bcb20
// 虚拟地址: 0x5bcb20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5bcb20(void* arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: char* ebx = arg3
    char* ebx = arg3
    int32_t esi = arg4
    
    if (arg2 u< esi || esi == 0)
        return 0
    
    for (void* i = _memchr(arg1, *ebx, 0 + 1 - esi + arg2); i != 0; 
            i = _memchr(i + 1, *ebx, arg1 - i - esi + arg2))
        int32_t j = esi - 1
        void* edx_1 = &ebx[1]
        void* esi_1 = i + 1
        
        while (j u>= 4)
            if (*esi_1 != *edx_1)
                goto label_5bcbab
            
            j -= 4
            edx_1 += 4
            esi_1 += 4
        
        if (j == 0)
            return i
        
        ebx.b = *edx_1
        
        if (ebx.b == *esi_1)
            if (j u<= 1)
                return i
            
            ebx.b = *(edx_1 + 1)
            
            if (ebx.b == *(esi_1 + 1))
                if (j u<= 2)
                    return i
                
                edx_1.b = *(edx_1 + 2)
                
                if (edx_1.b == *(esi_1 + 2))
                    return i
        
    label_5bcbab:
        esi = arg4
        ebx = arg3
    
    return 0
}
