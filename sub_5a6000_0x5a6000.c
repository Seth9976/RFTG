// 函数名称: sub_5a6000
// 虚拟地址: 0x5a6000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5a6000(int32_t arg1, int32_t* arg2, int32_t arg3 @ edi, void* arg4, void* arg5, void* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int128_t var_44
    uint32_t eax_2 = sub_5a9cf0(&var_44, 0xe, 1, arg2)
    void var_34
    int32_t ecx
    
    if (eax_2 == 1 && sub_5a9cf0(&var_34, 0x28, eax_2, arg2) == 1)
        int32_t var_20
        int32_t ebx_1 = var_20
        void* var_30
        void* var_2c
        int16_t var_26
        
        if (ebx_1 == 0)
            int32_t eax_7
            int32_t edx
            edx:eax_7 = sx.q(zx.d(var_26) * var_30 * var_2c)
            ebx_1 = ((edx & 7) + eax_7) s>> 3
        
        int128_t* eax_9 = sub_4cce80(ebx_1)
        
        if (sub_5a9cf0(eax_9, ebx_1, 1, arg2) != 1)
            int32_t var_64_3 = ecx
            sub_4c5680("failed to read bmp data: %s")
            
            if (eax_9 != 0)
                _aligned_free_base(eax_9)
            
            sub_5a8c61(arg2)
            int32_t eax_12
            eax_12.b = 0
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_12
        
        void* edx_3 = arg5
        char var_45 = 1
        
        if (var_30 u< edx_3)
            edx_3 = var_30
        
        void* ecx_4 = var_2c
        
        if (ecx_4 u>= arg6)
            ecx_4 = arg6
        
        uint32_t ebx_4 = zx.d(var_26)
        
        if (ebx_4 == 8)
            void* var_64_9 = ecx_4
            void* var_68_4 = edx_3
            sub_553e10(eax_9, arg4, ecx_4, var_30, arg4)
        else if (ebx_4 == 0x18)
            void* ebx_5 = var_30 * 3
            void* eax_15 = ebx_5 & 3
            void* eax_16
            
            if (eax_15 u<= 0)
                eax_16 = nullptr
            else
                eax_16 = 4 - eax_15
            
            void* eax_17 = eax_16 + ebx_5
            sub_553ec0(eax_17, edx_3, eax_9, eax_17, arg3, arg4, edx_3, ecx_4)
        else if (ebx_4 == 0x20)
            void* var_64_7 = ecx_4
            int32_t var_68_2 = edx_3 * 4
            void* edx_6 = var_30 << 2
            sub_553e10(eax_9, edx_6, arg4, edx_6, arg4)
        else
            uint32_t var_64_6 = ebx_4
            sub_4c5680("Unsupported bmp RGB bit depth: %d")
            var_45 = 0
        
        if (eax_9 != 0)
            _aligned_free_base(eax_9)
        
        sub_5a8c61(arg2)
        int32_t eax_20
        eax_20.b = var_45
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_20
    
    int32_t var_64_12 = ecx
    sub_4c5680("failed to read bmp file: %s")
    sub_5a8c61(arg2)
    int32_t eax_21
    eax_21.b = 0
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_21
}
