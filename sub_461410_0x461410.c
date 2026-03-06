// 函数名称: sub_461410
// 虚拟地址: 0x461410
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_461410(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ebx = arg1
    int32_t eax_2 = *ebx
    
    switch (eax_2)
        case 0
            if (sub_445cd0(ebx) == 0)
                int32_t eax_27 = sub_44b140(ebx)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_27
            
            int32_t eax_26
            int80_t st0_3
            st0_3, eax_26 = sub_4606d0(ebx)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_26
        case 1
            if (sub_445cd0(ebx) != 0)
                int32_t eax_11
                int80_t st0_1
                st0_1, eax_11 = sub_460610(ebx)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_11
            
            float var_28
            __builtin_memcpy(&var_28, &ebx[3], 0x20)
            
            if (sub_42f6a0(ebx) != 0)
                long double x87_r7_6 = fconvert.t(fconvert.s(float.t(0) * fconvert.t(-30.0)))
                float var_14
                float var_14_1 = fconvert.s(fconvert.t(var_14) + fconvert.t(fconvert.s(x87_r7_6)))
                float var_10
                float var_10_1 = fconvert.s(fconvert.t(var_10) - fconvert.t(30.0))
                float var_c
                float var_c_1 = fconvert.s(fconvert.t(var_c) + fconvert.t(fconvert.s(x87_r7_6)))
            
            if (sub_44a330(ebx) != 0)
                var_28 = fconvert.s(fconvert.t(var_28) * fconvert.t(1.1000000238418579))
            
            int32_t var_30 = 0xffffffff
            void* eax_14 = sub_418a10()
            void* eax_15 = sub_46b2b0(*(data_27e7a40 + 0x74))
            int32_t eax_22
            
            if (*(eax_15 + 0x1c) != 0xe)
                eax_22 = var_30
            else if (sub_41d070() != *(*(data_27e7a40 + 0x548) + 0xbfa8) || *(eax_14 + 0x1ec0) != 7)
                eax_22 = var_30
            else
                long double x87_r7_15 = fconvert.t(ebx[0x1e])
                long double x87_r6_1 = float.t(1)
                x87_r6_1 - x87_r7_15
                int32_t eax_17
                eax_17.w = (x87_r6_1 < x87_r7_15 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_15) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_15 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (not(p_1) || *(ebx + 0x99) != 0)
                    int32_t eax_18 = ebx[0x1f]
                    int32_t ecx_15 = *(data_27e7a40 + 0x74)
                    
                    if (ecx_15 != sx.d(*(eax_14 + eax_18 * 0x14 + 0x464)))
                        eax_22 = var_30
                    else
                        int32_t eax_19 = eax_18 * 5
                        eax_22 = sub_4a83b0(eax_14, ecx_15, eax_14 + (eax_19 << 2) + 0x464, 
                            sx.d(*(*(eax_14 + (eax_19 << 2) + 0x46c) + 0xe)), *(eax_15 + 0x55c))
                else
                    eax_22 = var_30
            
            int32_t edx_9 = ebx[0x20]
            
            if (edx_9 == 1 && ebx[0x16] == 0 && ebx[0x17] == 4)
                int32_t ecx_16 = *(eax_15 + 0x1f84)
                
                if (ecx_16 != 0)
                    int32_t esi_3 = *(eax_15 + 0x1c)
                    
                    if (esi_3 != 0x10 && esi_3 != 0xe)
                        edx_9 = ecx_16
            
            int32_t eax_23
            int80_t st0_2
            st0_2, eax_23 = sub_444d00(edx_9, eax_22)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_23
        case 2
            int32_t eax_3 = sub_439be0()
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_3
        case 3
            int32_t eax_8 = sub_439de0()
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_8
        case 4
            int32_t edi = ebx[0x16]
            int32_t eax_6
            
            if (edi != 0xffffffff)
                eax_6, arg1 = sub_46b360(edi)
            else
                eax_6 = eax_2 | edi
            
            arg1.b = ebx[0x22] == 1
            int32_t* var_5c_1 = arg1
            void* eax_7 = sub_44a3b0(eax_6, &ebx[3], eax_6, ebx, ebx[0x21], 
                fconvert.s(fconvert.t(ebx[0x1e])), arg1.b)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_7
        case 6
            int32_t eax_5
            int80_t st0
            st0, eax_5 = sub_460f40(ebx)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_5
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x6588, "RFTGGfxVRDraw")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
