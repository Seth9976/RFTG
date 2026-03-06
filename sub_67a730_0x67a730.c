// 函数名称: sub_67a730
// 虚拟地址: 0x67a730
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_67a730(int32_t arg1, char arg2, int32_t arg3, void** arg4 @ esi, char* arg5 @ edi)
{
    // 第一条实际指令: int32_t ebx = arg1 + arg3
    int32_t ebx = arg1 + arg3
    arg3.b = 0x46
    
    if (arg1 u< 0xe || *arg5 != 0x4a || arg5[1] != 0x46 || arg5[2] != 0x49 || arg5[3] != 0x46
            || arg5[4] != 0)
        if (arg1 u>= 6 && *arg5 == 0x4a && arg5[1] == 0x46 && arg5[2] == 0x58 && arg5[3] == 0x58
                && arg5[4] == 0)
            uint32_t eax_11 = zx.d(arg5[5])
            
            if (eax_11 == 0x10)
                *(*arg4 + 0x14) = 0x6c
                *(*arg4 + 0x18) = ebx
                return (*(*arg4 + 4))(arg4, 1)
            
            if (eax_11 == 0x11)
                *(*arg4 + 0x14) = 0x6d
                *(*arg4 + 0x18) = ebx
                return (*(*arg4 + 4))(arg4, 1)
            
            void* ecx_12 = *arg4
            
            if (eax_11 == 0x13)
                *(ecx_12 + 0x14) = 0x6e
                *(*arg4 + 0x18) = ebx
                return (*(*arg4 + 4))(arg4, 1)
            
            *(ecx_12 + 0x14) = 0x59
            *(*arg4 + 0x18) = zx.d(arg5[5])
            *(*arg4 + 0x1c) = ebx
            return (*(*arg4 + 4))(arg4, 1)
        
        *(*arg4 + 0x14) = 0x4d
        *(*arg4 + 0x18) = ebx
        return (*(*arg4 + 4))(arg4, 1)
    
    arg4[0x46] = 1
    arg4[0x47].b = arg5[5]
    arg1.b = arg5[6]
    *(arg4 + 0x11d) = arg1.b
    arg3.b = arg5[7]
    *(arg4 + 0x11e) = arg3.b
    arg4[0x48].w = zx.w(arg5[8]) * 0x100 + zx.w(arg5[9])
    bool cond:0_1 = arg4[0x47].b == 1
    *(arg4 + 0x122) = zx.w(arg5[0xa]) * 0x100 + zx.w(arg5[0xb])
    
    if (not(cond:0_1))
        *(*arg4 + 0x14) = 0x77
        *(*arg4 + 0x18) = zx.d(arg4[0x47].b)
        *(*arg4 + 0x1c) = zx.d(*(arg4 + 0x11d))
        (*(*arg4 + 4))(arg4, 0xffffffff)
    
    void* eax_2 = *arg4
    *(eax_2 + 0x18) = zx.d(arg4[0x47].b)
    *(eax_2 + 0x1c) = zx.d(*(arg4 + 0x11d))
    *(eax_2 + 0x20) = zx.d(arg4[0x48].w)
    *(eax_2 + 0x24) = zx.d(*(arg4 + 0x122))
    *(eax_2 + 0x28) = zx.d(*(arg4 + 0x11e))
    *(*arg4 + 0x14) = 0x57
    (*(*arg4 + 4))(arg4, 1)
    
    if ((arg5[0xc] | arg5[0xd]) != 0)
        *(*arg4 + 0x14) = 0x5a
        *(*arg4 + 0x18) = zx.d(arg5[0xc])
        *(*arg4 + 0x1c) = zx.d(arg5[0xd])
        (*(*arg4 + 4))(arg4, 1)
    
    int32_t result = zx.d(arg5[0xc]) * zx.d(arg5[0xd])
    
    if (ebx - 0xe == result * 3)
        return result
    
    *(*arg4 + 0x14) = 0x58
    *(*arg4 + 0x18) = ebx - 0xe
    return (*(*arg4 + 4))(arg4, 1)
}
