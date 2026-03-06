// 函数名称: sub_405c60
// 虚拟地址: 0x405c60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_405c60(int32_t* arg1, float* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = arg1
    int32_t* ebx = *eax_2
    
    if (ebx != 0)
        if (ebx[1] == 0 && ebx[0xf].b == 0)
            int32_t edx
            int128_t* eax_3 = sub_405b80(eax_2, edx, arg2, ebx)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_3
        
        void* esi_3
        float var_54
        
        if (ebx[0xd] == 0)
            esi_3 = &var_54
            sub_405f60(esi_3, arg2)
        else
            void* eax_4 = sub_4d54b0()
            void var_74
            __builtin_memcpy(&var_54, sub_4d4060(eax_4, ebx[0xe], eax_4, &var_74), 0x20)
            __builtin_memcpy(&ebx[2], &var_54, 0x20)
            ebx[2] = fconvert.s(float.t(1))
            esi_3 = &ebx[2]
        void var_28
        int32_t ecx_4 = __builtin_memcpy(&var_28, esi_3, 0x20)
        void* eax_6 = *ebx
        
        if (eax_6 != 0)
            int32_t eax_7 = *(eax_6 + 4)
            
            if (eax_7 == 0x15)
                int32_t ecx_5 = ebx[1]
                
                if (ecx_5 == 0)
                    ebx[0xf].b = 1
                else
                    int32_t* edx_3 = data_27e7fd4
                    int32_t esi_4 = edx_3[1]
                    uint32_t eax_10 = zx.d(ecx_5.w)
                    
                    if (eax_10 u>= esi_4)
                        ebx[0xf].b = 1
                    else
                        int32_t edx_4 = *edx_3
                        uint32_t eax_12 = eax_10 * 0x60
                        
                        if (*(eax_12 + edx_4 + 0x5c) != ecx_5 || *(eax_12 + edx_4 + 0x56) == 0)
                            ebx[0xf].b = 1
                        else if (ecx_5 != 0)
                            uint32_t eax_13 = zx.d(ecx_5.w)
                            
                            if (eax_13 u< esi_4)
                                void* eax_16 = eax_13 * 0x60 + edx_4
                                void var_14
                                
                                if (*(eax_16 + 0x5c) == ecx_5)
                                    (*(*data_27e7fd8 + 0x44))(eax_16, &var_14)
            else
                if (eax_7 != 0x19)
                    sub_4c5870("Halt", &data_83f3d3, "..\code\CGfx.cpp", 0xd6b, "SimpleEffectUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                void* eax_9 = sub_4eb5a0(ecx_4, ebx[1])
                
                if (eax_9 != 0)
                    __builtin_memcpy(eax_9 + 0x2c, &var_28, 0x20)
                    sub_4eeef0(eax_9)
                else
                    ebx[0xf].b = 1
        
        int32_t* var_8c_2
        float* var_88_4
        
        if (ebx[0xf].b == 0)
            var_88_4 = arg2
            var_8c_2 = *eax_2 + 0x40
        else
            void* eax_18 = data_27e7a40
            *eax_2 = ebx[0x10]
            int32_t ecx_8 = *(eax_18 + 0x558)
            *(eax_18 + 0x558) = zx.d(ebx[0x11].w)
            ebx[0x11] = ecx_8
            *(eax_18 + 0x55c) -= 1
            var_88_4 = arg2
            var_8c_2 = eax_2
        
        eax_2 = sub_405c60(var_8c_2, var_88_4)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_2
}
