// 函数名称: sub_41cf80
// 虚拟地址: 0x41cf80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_41cf80(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* eax = sub_46b2b0(arg3)
    void* eax = sub_46b2b0(arg3)
    void* result = sub_46b2b0(arg3)
    int32_t edx = *(result + 0x1f54)
    int32_t ecx
    
    if (edx s<= 0)
    label_41cfbc:
        ecx = 0xffffffff
    else
        result += 0x1f44
        ecx = 0
        
        while (*result != arg1)
            ecx += 1
            result += 8
            
            if (ecx s>= edx)
                goto label_41cfbc
    
    if (*(eax + (ecx << 3) + 0x1f48) != 0)
        int32_t var_10 = 0
        int32_t var_8 = 0
        int32_t var_c = 0
        void* eax_1 = data_27e7a40
        *(eax + (ecx << 3) + 0x1f48) = 0
        void* ecx_1 = *(eax_1 + 0x548)
        void* eax_2 = *(eax_1 + 0x74)
        var_10 = 1
        int32_t var_8_1 = arg1
        return sub_472e60(eax_2, edx, &var_10, ecx_1)
    
    int32_t edx_1
    edx_1.b = ecx == 0
    *(eax + (ecx << 3) + 0x1f48) = 1
    *(eax + (edx_1 << 3) + 0x1f48) = 0
    int32_t i = 0
    
    if (*(eax + 0x1f54) s> 0)
        result = eax + 0x1f44
        
        do
            if (*result == 0)
                int32_t ecx_3 = *(eax + 0x1f54)
                *result = *(eax + (ecx_3 << 3) + 0x1f3c)
                *(result + 4) = *(eax + (ecx_3 << 3) + 0x1f40)
                *(eax + 0x1f54) -= 1
            
            i += 1
            result += 8
        while (i s< *(eax + 0x1f54))
    
    return result
}
