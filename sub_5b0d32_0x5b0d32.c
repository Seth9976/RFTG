// 函数名称: sub_5b0d32
// 虚拟地址: 0x5b0d32
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b0d32(int32_t* arg1 @ esi, int32_t* arg2 @ edi, int32_t arg3, int128_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t eax = *arg1
    int32_t eax = *arg1
    
    if (arg3 == eax)
        int32_t ecx_1 = *arg2
        
        if (ecx_1 != arg4)
            int32_t eax_4 = __recalloc_crt(ecx_1, eax, 2)
            
            if (eax_4 == 0)
                return 0
            
            *arg2 = eax_4
        else
            int32_t eax_1 = __calloc_crt(eax, 2)
            *arg2 = eax_1
            
            if (eax_1 == 0)
                return 0
            
            *arg5 = 1
            sub_5ab990(*arg2, arg4, *arg1)
        
        *arg1 <<= 1
    
    return 1
}
