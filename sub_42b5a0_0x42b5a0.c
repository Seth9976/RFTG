// 函数名称: sub_42b5a0
// 虚拟地址: 0x42b5a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_42b5a0(int32_t* arg1, int128_t** arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* edi = arg2
    int32_t* edi = arg2
    *edi = 0
    *arg3 = 0
    void* eax_1 = data_27e7a40
    *arg1 = 0xffffffff
    int32_t* result = eax_1 + 0x548
    *arg4 = 0xffffffff
    void* edx = *result
    
    if (*(edx + 0x2c07b) == 0)
        result.b = 0
        return result
    
    int32_t esi = *(edx + 0x2c07c)
    void* ecx_1
    
    if (esi != 0)
        uint32_t ecx_2 = zx.d(esi.w)
        
        if (ecx_2 u< *(edx + 0x43964))
            void* ecx_4 = ecx_2 * 0xb0 + *(edx + 0x43960)
            int32_t edx_1
            edx_1.b = *(ecx_4 + 0xac) != esi
            ecx_1 = ecx_4 & (edx_1 - 1)
        else
            ecx_1 = nullptr
    else
        ecx_1 = nullptr
    
    *edi = ecx_1
    *arg1 = *(*result + 0x2c084)
    
    if (*edi == 0)
        int128_t* eax_2 = sub_463e80(*result + 0x43960)
        void* eax_3 = data_27e7a40
        *eax_2 = 0
        int32_t edx_4 = *(*(eax_3 + 0x548) + 0x2c080)
        *(eax_2 + 0x78) = fconvert.s(float.t(0))
        *(eax_2 + 0x7c) = edx_4
        void var_58
        int32_t eax_4
        int80_t st0_1
        st0_1, eax_4 = sub_42b500(&var_58)
        int32_t eax_5 = data_315fba4
        void var_34
        __builtin_memcpy(&var_34, eax_4, 0x20)
        __builtin_memcpy(eax_2 + 0x2c, &var_34, 0x20)
        *(eax_2 + 0x58) = 0xffffffff
        *(eax_2 + 0x5c) = 1
        eax_2[6].d = eax_5
        *(eax_2 + 0x64) = 0xffffffff
        *(eax_2 + 0x68) = 1
        *(eax_2 + 0x6c) = eax_5 + 1
        int32_t var_10_1 = 0x12
        data_315fba4 = eax_5 + 3
        int32_t var_14 = 0xffffffff
        int32_t var_c_1 = eax_5 + 2
        sub_46b1d0(eax_2, &var_14)
        void* eax_8 = data_27e7a40
        result = eax_8 + 0x548
        *(*(eax_8 + 0x548) + 0x2c07c) = *(eax_2 + 0xac)
        *arg2 = eax_2
        
        if (*(eax_2 + 0x7c) == 0xffffffff)
            sub_4c5870("newGfx.cidx != -1", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1d8a, 
                "TakeoverUIActive")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    void* edx_7 = *result
    int32_t esi_7 = *(edx_7 + 0x2c088)
    int32_t* ecx_9
    
    if (esi_7 != 0)
        uint32_t ecx_10 = zx.d(esi_7.w)
        
        if (ecx_10 u< *(edx_7 + 0x43964))
            void* ecx_12 = ecx_10 * 0xb0 + *(edx_7 + 0x43960)
            int32_t edx_8
            edx_8.b = *(ecx_12 + 0xac) != esi_7
            ecx_9 = ecx_12 & (edx_8 - 1)
        else
            ecx_9 = nullptr
    else
        ecx_9 = nullptr
    
    int32_t** edx_10 = arg3
    *edx_10 = ecx_9
    
    if (ecx_9 != 0)
        *arg4 = *(*result + 0x2c08c)
        result = *edx_10
        
        if (result != 0 && result[0x1f] == 0xffffffff)
            sub_4c5870("target == NULL || target->cidx != -1", &data_83f3d3, "..\code\RFTGClient.cpp", 
                0x1d91, "TakeoverUIActive")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    result.b = 1
    return result
}
