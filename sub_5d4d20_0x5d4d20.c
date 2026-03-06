// 函数名称: sub_5d4d20
// 虚拟地址: 0x5d4d20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d4d20(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (arg1 == 0)
        void* const __saved_ebx = &data_6b42e0
        sub_5cce60("Parameter '%s' is invalid")
        return 0
    
    if (arg2 == 0)
        wchar32 const* const __saved_ebx_1 = &(*U"986ZYWUSRQPONMLKJHGDB")[0x14]
        sub_5cce60("Parameter '%s' is invalid")
        return 0
    
    int32_t ecx_1 = arg1[2]
    
    if (ecx_1 s> 0 && arg1[3] s> 0)
        int32_t ebx_1 = arg2[2]
        
        if (ebx_1 s> 0 && arg2[3] s> 0)
            int32_t eax_5 = *arg1
            int32_t edi_1 = ecx_1 + eax_5
            int32_t ecx_2 = *arg2
            int32_t ebx_2 = ebx_1 + ecx_2
            
            if (ecx_2 s> eax_5)
                eax_5 = ecx_2
            
            if (ebx_2 s< edi_1)
                edi_1 = ebx_2
            
            if (edi_1 s> eax_5)
                int32_t eax_6 = arg1[1]
                int32_t ecx_3 = arg2[1]
                int32_t esi_2 = arg1[3] + eax_6
                int32_t edx_2 = arg2[3] + ecx_3
                
                if (ecx_3 s> eax_6)
                    eax_6 = ecx_3
                
                if (edx_2 s< esi_2)
                    esi_2 = edx_2
                
                int32_t result
                result.b = esi_2 s> eax_6
                return result
    
    return 0
}
