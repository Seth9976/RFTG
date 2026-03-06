// 函数名称: sub_5d5410
// 虚拟地址: 0x5d5410
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d5410(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (arg1 s< 1)
        char const* const __saved_edi = "width"
        sub_5cce60("Parameter '%s' is invalid")
        return 0
    
    int32_t edi = arg2
    
    if (edi s< 1)
        char const* const __saved_ebx = "height"
        sub_5cce60("Parameter '%s' is invalid")
        return 0
    
    if (arg4 == 0)
        char const* const __saved_ebx_1 = "rects"
        sub_5cce60("Parameter '%s' is invalid")
        return 0
    
    if (arg5 == 0)
        char const* const __saved_esi_1 = "span"
        sub_5cce60("Parameter '%s' is invalid")
    else if (arg3 s>= 1)
        int32_t edx_1 = 0
        
        if (arg3 s> 0)
            void* esi_1 = arg4 + 0xc
            int32_t i_1 = arg3
            int32_t i
            
            do
                int32_t eax_6 = *(esi_1 - 8)
                int32_t ecx_3 = *esi_1 + eax_6
                
                if (eax_6 s< 0)
                    edi = 0
                else if (eax_6 s< edi)
                    edi = eax_6
                
                if (ecx_3 s> arg2)
                    edx_1 = arg2
                else if (ecx_3 s> edx_1)
                    edx_1 = ecx_3
                
                esi_1 += 0x10
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (edx_1 s> edi)
            arg5[1] = edi
            arg5[2] = arg1
            *arg5 = 0
            arg5[3] = edx_1 - edi
            return 1
    else
        char const* const __saved_esi_2 = "numrects"
        sub_5cce60("Parameter '%s' is invalid")
    
    return 0
}
