// 函数名称: sub_63e7d0
// 虚拟地址: 0x63e7d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_63e7d0(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    
    if (edi == 0)
        sub_5cce60("SDL_BlendLines(): Passed NULL destination surface")
        return 0xffffffff
    
    int16_t* (* eax)(void* arg1, int16_t* arg2, int32_t arg3, int32_t arg4, int16_t* arg5, void* arg6, 
        char arg7, char arg8, char arg9, char arg10, int32_t arg11) = sub_63e760(edi[1])
    
    if (eax == 0)
        sub_5cce60("SDL_BlendLines(): Unsupported surface format")
        return 0xffffffff
    
    int32_t ecx_1 = arg3
    
    if (ecx_1 s> 1)
        int32_t* esi_2 = &arg2[3]
        int32_t i_1 = ecx_1 - 1
        int32_t i
        
        do
            int32_t ecx_3 = esi_2[-2]
            int32_t* edx_1 = esi_2[-1]
            int32_t var_10 = esi_2[-3]
            int32_t eax_2 = *esi_2
            int32_t var_c = ecx_3
            arg1 = edx_1
            int32_t var_8 = eax_2
            
            if (sub_5d50c0(&edi[9], &var_10, &var_c, &arg1, &var_8) != 0)
                int32_t* ecx_4 = arg1
                int32_t edx_2 = var_8
                int32_t eax_5
                
                if (ecx_4 != esi_2[-1] || edx_2 != *esi_2)
                    eax_5 = 1
                else
                    eax_5 = 0
                
                eax(edi, var_10, var_c, ecx_4, edx_2, arg4, arg5, arg6, arg7, arg8, eax_5)
            
            esi_2 = &esi_2[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        ecx_1 = arg3
    
    int32_t eax_10 = arg2[ecx_1 * 2 - 2]
    
    if (*arg2 != eax_10 || arg2[1] != arg2[ecx_1 * 2 - 1])
        sub_636400(edi, eax_10, arg2[ecx_1 * 2 - 1], arg4, arg5.b, arg6.b, arg7.b, arg8.b)
    
    return 0
}
