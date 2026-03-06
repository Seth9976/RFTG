// 函数名称: sub_63f480
// 虚拟地址: 0x63f480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_63f480(void* arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    
    if (edi == 0)
        sub_5cce60("SDL_DrawLines(): Passed NULL destination surface")
        return 0xffffffff
    
    int32_t eax = sub_63f450(*(edi + 4))
    
    if (eax == 0)
        sub_5cce60("SDL_DrawLines(): Unsupported surface format")
        return 0xffffffff
    
    int32_t ecx_1 = arg3
    
    if (ecx_1 s> 1)
        int32_t* esi_1 = &arg2[3]
        int32_t i_1 = ecx_1 - 1
        int32_t i
        
        do
            int32_t ecx_3 = esi_1[-2]
            void* edx_1 = esi_1[-1]
            int32_t var_10 = esi_1[-3]
            int32_t eax_2 = *esi_1
            int32_t var_c = ecx_3
            arg1 = edx_1
            int32_t var_8 = eax_2
            
            if (sub_5d50c0(edi + 0x24, &var_10, &var_c, &arg1, &var_8) != 0)
                void* ecx_4 = arg1
                int32_t edx_2 = var_8
                int32_t eax_5
                
                if (ecx_4 != esi_1[-1] || edx_2 != *esi_1)
                    eax_5 = 1
                else
                    eax_5 = 0
                
                eax(edi, var_10, var_c, ecx_4, edx_2, arg4, eax_5)
            
            esi_1 = &esi_1[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        ecx_1 = arg3
    
    int32_t eax_7 = arg2[ecx_1 * 2 - 2]
    
    if (*arg2 != eax_7 || arg2[1] != arg2[ecx_1 * 2 - 1])
        sub_636720(edi, eax_7, arg2[ecx_1 * 2 - 1], arg4.b)
    
    return 0
}
