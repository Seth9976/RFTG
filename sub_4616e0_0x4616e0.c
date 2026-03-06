// 函数名称: sub_4616e0
// 虚拟地址: 0x4616e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_4616e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ebx = arg1
    int32_t eax_2 = *ebx
    
    switch (eax_2)
        case 0
            if (sub_445cd0(ebx) == 0)
                void* eax_35 = sub_44b380(ebx)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_35
            
            int32_t eax_34
            int80_t st0_2
            st0_2, eax_34 = sub_460790()
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_34
        case 1
            if (sub_445cd0(ebx) != 0)
                int32_t eax_10
                int80_t st0
                st0, eax_10 = sub_460850()
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_10
            
            float var_44 = 0f
            float var_40 = 0f
            float var_64
            
            if (sub_439ee0(__builtin_memcpy(&var_64, &ebx[3], 0x20), ebx) != 0)
                void* eax_12 = *(data_27e7a40 + 0x548)
                var_44 = fconvert.s(fconvert.t(*(eax_12 + 0xbfdc)) - fconvert.t(*(eax_12 + 0xbfd4)))
                var_40 = fconvert.s(fconvert.t(*(eax_12 + 0xbfe0)) - fconvert.t(*(eax_12 + 0xbfd8)))
            
            float var_50
            
            if (sub_42f6a0(ebx) != 0)
                long double x87_r7_9 = fconvert.t(fconvert.s(float.t(0) * fconvert.t(-30.0)))
                var_50 = fconvert.s(fconvert.t(var_50) + fconvert.t(fconvert.s(x87_r7_9)))
                float var_4c
                float var_4c_1 = fconvert.s(fconvert.t(var_4c) - fconvert.t(30.0))
                float var_48 = fconvert.s(fconvert.t(var_48) + fconvert.t(fconvert.s(x87_r7_9)))
            
            if (sub_44a330(ebx) != 0)
                var_64 = fconvert.s(fconvert.t(var_64) * fconvert.t(1.1000000238418579))
            
            void var_28
            __builtin_memcpy(&var_28, &var_64, 0x20)
            float var_14 = fconvert.s(fconvert.t(var_50) + fconvert.t(var_44))
            float var_10
            float var_10_1 = fconvert.s(fconvert.t(var_10) + fconvert.t(var_40))
            float var_c
            float var_c_1 = fconvert.s(fconvert.t(var_c) + fconvert.t(0.0))
            int32_t var_34_4 = 0xffffffff
            void* eax_16 = sub_418a10()
            void* eax_17 = sub_46b2b0(*(data_27e7a40 + 0x74))
            
            if (*(eax_17 + 0x1c) == 0xe && sub_41d070() == *(*(data_27e7a40 + 0x548) + 0xbfa8)
                    && *(eax_16 + 0x1ec0) == 7)
                long double x87_r7_24 = fconvert.t(ebx[0x1e])
                long double x87_r6_1 = float.t(1)
                x87_r6_1 - x87_r7_24
                int32_t eax_19
                eax_19.w = (x87_r6_1 < x87_r7_24 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_24) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_24 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (not(p_1) || *(ebx + 0x99) != 0)
                    int32_t ecx_16 = *(data_27e7a40 + 0x74)
                    int32_t eax_20 = ebx[0x1f]
                    
                    if (ecx_16 == sx.d(*(eax_16 + eax_20 * 0x14 + 0x464)))
                        int32_t eax_21 = eax_20 * 5
                        var_34_4 = sub_4a83b0(eax_16, ecx_16, eax_16 + (eax_21 << 2) + 0x464, 
                            sx.d(*(*(eax_16 + (eax_21 << 2) + 0x46c) + 0xe)), *(eax_17 + 0x55c))
                        
                        if (sub_446100(sub_418870(ebx[0x1f])) == 0)
                            var_34_4 = 0xffffffff
            
            int32_t eax_28 = ebx[0x20]
            int32_t var_2c_1 = eax_28
            
            if (eax_28 == 1 && ebx[0x16] == 0 && ebx[0x17] == 4)
                int32_t eax_29 = *(eax_17 + 0x1f84)
                
                if (eax_29 != 0)
                    int32_t esi_6 = *(eax_17 + 0x1c)
                    
                    if (esi_6 != 0x10 && esi_6 != 0xe)
                        var_2c_1 = eax_29
            
            int32_t eax_30
            int80_t st0_1
            st0_1, eax_30 = sub_431730(&var_28)
            void var_d4
            __builtin_memcpy(&var_d4, eax_30, 0x40)
            char* eax_31 = sub_444a50(var_2c_1, var_34_4)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_31
        case 2
            int32_t eax_3 = sub_439ae0(&ebx[3])
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_3
        case 3
            int32_t eax_7 = sub_439ce0(&ebx[3])
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_7
        case 4
            int32_t edi = ebx[0x16]
            int32_t eax_5
            
            if (edi != 0xffffffff)
                eax_5, arg1 = sub_46b360(edi)
            else
                eax_5 = eax_2 | edi
            
            arg1.b = ebx[0x22] == 1
            int32_t* var_9c_1 = arg1
            char* eax_6 = sub_44a970(eax_5, &ebx[3], eax_5, ebx, ebx[0x21], 
                fconvert.s(fconvert.t(ebx[0x1e])), arg1.b)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_6
        case 6
            int32_t eax_4 = sub_460e40(ebx)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_4
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x65ef, "RFTGGfxDraw")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
