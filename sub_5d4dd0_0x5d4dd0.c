// 函数名称: sub_5d4dd0
// 虚拟地址: 0x5d4dd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d4dd0(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        void* const __saved_edi = &data_6b42e0
        sub_5cce60("Parameter '%s' is invalid")
        return 0
    
    if (arg2 == 0)
        wchar32 const* const __saved_ebx = &(*U"986ZYWUSRQPONMLKJHGDB")[0x14]
        sub_5cce60("Parameter '%s' is invalid")
        return 0
    
    if (arg3 == 0)
        char const* const __saved_ebx_1 = "result"
        sub_5cce60("Parameter '%s' is invalid")
        return 0
    
    void* eax_3 = arg1[2]
    
    if (eax_3 s> 0 && arg1[3] s> 0)
        void* ebx_1 = arg2[2]
        
        if (ebx_1 s> 0 && arg2[3] s> 0)
            int32_t ecx = *arg1
            int32_t edx_1 = *arg2
            int32_t* ebx_2 = ebx_1 + edx_1
            int32_t* eax_4 = eax_3 + ecx
            
            if (edx_1 s> ecx)
                ecx = edx_1
            
            *arg3 = ecx
            
            if (ebx_2 s< eax_4)
                eax_4 = ebx_2
            
            arg3[2] = eax_4 - ecx
            int32_t ecx_1 = arg1[1]
            int32_t esi_1 = arg2[1]
            int32_t eax_7 = arg1[3] + ecx_1
            int32_t edx_4 = arg2[3] + esi_1
            
            if (esi_1 s> ecx_1)
                ecx_1 = esi_1
            
            arg3[1] = ecx_1
            
            if (edx_4 s< eax_7)
                eax_7 = edx_4
            
            int32_t eax_8 = eax_7 - ecx_1
            bool cond:0 = arg3[2] s<= 0
            arg3[3] = eax_8
            
            if (not(cond:0) && eax_8 s> 0)
                return 1
            
            return 0
    
    arg3[2] = 0
    arg3[3] = 0
    return 0
}
