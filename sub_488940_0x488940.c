// 函数名称: sub_488940
// 虚拟地址: 0x488940
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_488940(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4, void* arg5, void* arg6)
{
    // 第一条实际指令: void* esi
    void* esi
    
    if (*arg3 != 0)
        if (*(arg6 + 8) == 0)
            *arg3 = 0
            __builtin_memcpy(arg4, arg6, 0x70)
            return arg4
        
        void var_98
        int32_t var_ac_1 = __builtin_memcpy(&var_98, arg6, 0x70)
        float* eax_5
        int32_t edx
        eax_5, edx =
            sub_488860(arg5 + 0xc, arg2, arg6 + 0xc, arg5 + 0xc, fconvert.s(fconvert.t(0.200000003f)))
        void* eax_6 = arg6
        bool cond:2_1 = *(eax_6 + 0x44) != 0
        void var_8c
        int32_t ecx_2 = __builtin_memcpy(&var_8c, eax_5, 0x1c)
        float* esi_3
        
        if (cond:2_1)
            int32_t var_ac_3 = ecx_2
            float* eax_7
            eax_7, edx = sub_488860(eax_6, arg5 + 0x28, eax_6 + 0x28, arg5 + 0x28, 
                fconvert.s(fconvert.t(0.200000003f)))
            esi_3 = eax_7
            eax_6 = arg6
        else
            esi_3 = &data_840614
        
        bool cond:3_1 = *(eax_6 + 0x64) != 0
        void var_70
        int32_t ecx_4 = __builtin_memcpy(&var_70, esi_3, 0x1c)
        float* esi_4
        
        if (cond:3_1)
            int32_t var_ac_5 = ecx_4
            esi_4 = sub_488860(arg5 + 0x48, edx, eax_6 + 0x48, arg5 + 0x48, 
                fconvert.s(fconvert.t(0.200000003f)))
        else
            esi_4 = &data_840614
        
        void var_50
        __builtin_memcpy(&var_50, esi_4, 0x1c)
        esi = &var_98
    else
        esi = arg6
        
        if (*(esi + 8) == 1)
            *arg3 = 1
            __builtin_memcpy(arg4, esi, 0x70)
            return arg4
    
    __builtin_memcpy(arg4, esi, 0x70)
    return arg4
}
