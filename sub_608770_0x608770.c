// 函数名称: sub_608770
// 虚拟地址: 0x608770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_608770(void* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax = sub_607d00(arg1)
    int32_t eax = sub_607d00(arg1)
    
    if (eax == 0)
        return 0xffffffff
    
    int32_t edx = *(arg1 + 0xd4)
    int32_t* ecx_2
    
    if (edx != 0 || *(arg1 + 0xd8) != edx)
        int32_t edx_2 = *(arg1 + 0xd8) + arg2[1]
        int32_t var_1c = *arg2 + edx
        int32_t var_18_1 = edx_2
        int32_t var_10_1 = arg2[3]
        int32_t var_14_1 = arg2[2]
        ecx_2 = &var_1c
    else
        ecx_2 = arg2
    
    int32_t ebx = *ecx_2
    
    if (ebx s>= 0)
        int32_t edx_4 = ecx_2[2]
        
        if (edx_4 + ebx s<= *(eax + 8))
            int32_t esi_3 = ecx_2[1]
            
            if (esi_3 s>= 0)
                int32_t ecx_3 = ecx_2[3]
                
                if (ecx_3 + esi_3 s<= *(eax + 0xc))
                    int32_t* ecx_5 = *(eax + 4)
                    int32_t edx_6 = *(eax + 0x10)
                    return sub_5d6450(edx_4, ecx_3, *ecx_5, 
                        zx.d(*(ecx_5 + 9)) * ebx + edx_6 * esi_3 + *(eax + 0x14), edx_6, arg3, arg4, 
                        arg5)
    
    sub_5cce60("Tried to read outside of surface bounds")
    return 0xffffffff
}
