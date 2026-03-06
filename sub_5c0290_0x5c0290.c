// 函数名称: sub_5c0290
// 虚拟地址: 0x5c0290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c0290(int32_t* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void** var_5c = nullptr
    void* eax_3 = sub_5c3620(*(arg2 + 0x30), 0)
    void* eax_4
    int32_t edx_1
    eax_4, edx_1 = sub_5c3620(*(arg2 + 0x38), 0)
    
    if (eax_3 == 2)
        if (eax_4 == 1 || eax_4 == eax_3)
            goto label_5c02e3
        
        goto label_5c02f6
    
    void** edi_1
    
    if (eax_3 != 1 || eax_4 != 2)
    label_5c02f6:
        void* ecx_1 = 0xf7ff
        *(arg2 + 0xa) &= 0xf7ff
        
        if (eax_3 != 2)
            edi_1 = var_5c
        label_5c033b:
            
            if ((arg3 & 0x100) != 0 || eax_4 != 2)
                goto label_5c0389
            
            int32_t* eax_11 = sub_5bfb00(*(arg2 + 0x38), edx_1, ecx_1, 0x6375, &arg1[2])
            
            if (eax_11 != 0)
                *eax_11 = edi_1
                var_5c = eax_11
                goto label_5c0389
            
        label_5c0365:
            sub_5c1400(edi_1)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0xffffffff
        
        int32_t* eax_6
        eax_6, ecx_1, edx_1 = sub_5bfb00(*(arg2 + 0x30), &arg1[2], 0xf7ff, 0x7075, &arg1[2])
        edi_1 = eax_6
        var_5c = edi_1
        
        if (edi_1 != 0)
            goto label_5c033b
    else
    label_5c02e3:
        *(arg2 + 0xa) |= 0x800
    label_5c0389:
        int32_t temp0_1 = *(arg2 + 0x2c)
        char var_55_1
        
        if (temp0_1 u> 0 || (temp0_1 u>= 0 && *(arg2 + 0x28) u>= 0xffffffff))
            var_55_1 = 1
        else
            int32_t temp1_1 = *(arg2 + 0x24)
            
            if (temp1_1 u> 0 || (temp1_1 u>= 0 && *(arg2 + 0x20) u>= 0xffffffff))
                var_55_1 = 1
            else
                int32_t temp2_1
                
                if ((arg3 & 0x200) != 0)
                    temp2_1 = *(arg2 + 0x4c)
                
                if ((arg3 & 0x200) != 0
                        && (temp2_1 u> 0 || (temp2_1 u>= 0 && *(arg2 + 0x48) u>= 0xffffffff)))
                    var_55_1 = 1
                else
                    var_55_1 = 0
        
        char var_5d_1
        
        if ((arg3 & 0x500) == 0x500 || var_55_1 != 0)
            var_5d_1 = 1
            void var_24
            char* eax_13 = sub_5c0ee0(&var_24, 0x1c, 0)
            
            if (eax_13 == 0)
            label_5c0408:
                zip_error_set(&arg1[2], 0xe, 0)
                sub_5c1400(var_5c)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return 0xffffffff
            
            if ((arg3 & 0x100) == 0)
                if ((arg3 & 0x400) != 0)
                label_5c04a6:
                    int32_t eax_19 = *(arg2 + 0x2c)
                    int32_t ecx_12 = *(arg2 + 0x28)
                    
                    if (eax_19 != 0 || ecx_12 u>= 0xffffffff)
                        sub_5c1140(eax_13, ecx_12, eax_19)
                    
                    int32_t eax_20 = *(arg2 + 0x24)
                    int32_t ecx_13 = *(arg2 + 0x20)
                    
                    if (eax_20 != 0 || ecx_13 u>= 0xffffffff)
                        sub_5c1140(eax_13, ecx_13, eax_20)
                    
                    int32_t eax_21 = *(arg2 + 0x4c)
                    int32_t ecx_14 = *(arg2 + 0x48)
                    
                    if (eax_21 != 0 || ecx_14 u>= 0xffffffff)
                        sub_5c1140(eax_13, ecx_14, eax_21)
                else
                    int32_t temp3_1 = *(arg2 + 0x24)
                    
                    if (temp3_1 u> 0 || (temp3_1 u>= 0 && *(arg2 + 0x20) u> 0xffffffff))
                        goto label_5c04a6
                    
                    int32_t temp5_1 = *(arg2 + 0x2c)
                    
                    if (temp5_1 u> 0 || (temp5_1 u>= 0 && *(arg2 + 0x28) u> 0xffffffff)
                            || *(arg2 + 0x4c) u> 0 || *(arg2 + 0x48) u> 0xffffffff)
                        goto label_5c04a6
            else if ((arg3 & 0x400) != 0)
                sub_5c1140(eax_13, *(arg2 + 0x28), *(arg2 + 0x2c))
                sub_5c1140(eax_13, *(arg2 + 0x20), *(arg2 + 0x24))
            else
                int32_t temp4_1 = *(arg2 + 0x24)
                
                if (temp4_1 u> 0)
                    sub_5c1140(eax_13, *(arg2 + 0x28), *(arg2 + 0x2c))
                    sub_5c1140(eax_13, *(arg2 + 0x20), *(arg2 + 0x24))
                else if (temp4_1 u< 0)
                    if (*(arg2 + 0x2c) u> 0 || *(arg2 + 0x28) u> 0xffffffff)
                        sub_5c1140(eax_13, *(arg2 + 0x28), *(arg2 + 0x2c))
                        sub_5c1140(eax_13, *(arg2 + 0x20), *(arg2 + 0x24))
                else if (*(arg2 + 0x20) u> 0xffffffff || *(arg2 + 0x2c) u> 0
                        || *(arg2 + 0x28) u> 0xffffffff)
                    sub_5c1140(eax_13, *(arg2 + 0x28), *(arg2 + 0x2c))
                    sub_5c1140(eax_13, *(arg2 + 0x20), *(arg2 + 0x24))
            
            if (xff67edc5::_Atomic_load_uchar::operator[]::_Atomic_load_uchar(eax_13) == 0)
                zip_error_set(&arg1[2], 0x14, 0)
                sub_5c0c20(eax_13)
                sub_5c1400(var_5c)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return 0xffffffff
            
            void*** eax_28 = sub_5c15c0(1, sub_5c0fd0(eax_13), &var_24, 0x300)
            sub_5c0c20(eax_13)
            *eax_28 = var_5c
            var_5c = eax_28
            goto label_5c056e
        
        var_5d_1 = 0
    label_5c056e:
        void var_54
        char* eax_29 = sub_5c0ee0(&var_54, 0x2e, 0)
        
        if (eax_29 == 0)
            goto label_5c0408
        
        int32_t ebx_3 = arg3 & 0x100
        void* const eax_30 = &data_6b2860
        
        if (ebx_3 == 0)
            eax_30 = &data_6b2858
        
        sub_5c1000(eax_29, eax_30, 4)
        
        if (ebx_3 == 0)
            uint32_t eax_31 = ebx_3 + 0x2d
            
            if (var_55_1 == ebx_3.b)
                eax_31 = zx.d(*(arg2 + 6))
            
            sub_5c1070(eax_29, eax_31)
        
        uint32_t eax_32 = 0x2d
        
        if (var_55_1 == 0)
            eax_32 = zx.d(*(arg2 + 8))
        
        sub_5c1070(eax_29, eax_32)
        sub_5c1070(eax_29, zx.d(*(arg2 + 0xa)) & 0xfff9)
        sub_5c1070(eax_29, zx.d(*(arg2 + 0xc)))
        int32_t var_70
        int32_t* var_98_1 = &var_70
        int32_t var_6c
        int32_t* var_9c_1 = &var_6c
        sub_5bfc90(*(arg2 + 0x10), *(arg2 + 0x14))
        sub_5c1070(eax_29, var_6c)
        sub_5c1070(eax_29, var_70)
        sub_5c10d0(eax_29, *(arg2 + 0x18))
        
        if (ebx_3 != 0x100)
        label_5c0662:
            int32_t temp6_1 = *(arg2 + 0x24)
            int32_t var_80_11
            
            if (temp6_1 u> 0 || (temp6_1 u>= 0 && *(arg2 + 0x20) u>= 0xffffffff))
                var_80_11 = 0xffffffff
            else
                var_80_11 = *(arg2 + 0x20)
            
            sub_5c10d0(eax_29, var_80_11)
            int32_t temp8_1 = *(arg2 + 0x2c)
            int32_t var_80_12
            
            if (temp8_1 u> 0 || (temp8_1 u>= 0 && *(arg2 + 0x28) u>= 0xffffffff))
                var_80_12 = 0xffffffff
            else
                var_80_12 = *(arg2 + 0x28)
            
            sub_5c10d0(eax_29, var_80_12)
        else
            int32_t temp7_1 = *(arg2 + 0x24)
            
            if (temp7_1 u> 0)
                sub_5c10d0(eax_29, 0xffffffff)
                sub_5c10d0(eax_29, 0xffffffff)
            else if (temp7_1 u< 0)
                if (*(arg2 + 0x2c) u<= 0 && *(arg2 + 0x28) u< 0xffffffff)
                    goto label_5c0662
                
                sub_5c10d0(eax_29, 0xffffffff)
                sub_5c10d0(eax_29, 0xffffffff)
            else
                if (*(arg2 + 0x20) u< 0xffffffff && *(arg2 + 0x2c) u<= 0
                        && *(arg2 + 0x28) u< 0xffffffff)
                    goto label_5c0662
                
                sub_5c10d0(eax_29, 0xffffffff)
                sub_5c10d0(eax_29, 0xffffffff)
        
        sub_5c1070(eax_29, zx.d(sub_5bf2c0(*(arg2 + 0x30))))
        uint32_t ebx_4 = zx.d(sub_5c1840(*(arg2 + 0x34), arg3))
        sub_5c1070(eax_29, zx.d(sub_5c1840(var_5c, 0x300)) + ebx_4)
        
        if (ebx_3 == 0)
            sub_5c1070(eax_29, zx.d(sub_5bf2c0(*(arg2 + 0x38))))
            sub_5c1070(eax_29, zx.d(*(arg2 + 0x3c)))
            sub_5c1070(eax_29, zx.d(*(arg2 + 0x40)))
            sub_5c10d0(eax_29, *(arg2 + 0x44))
            int32_t temp9_1 = *(arg2 + 0x4c)
            int32_t var_80_15
            
            if (temp9_1 u> 0 || (temp9_1 u>= 0 && *(arg2 + 0x48) u>= 0xffffffff))
                var_80_15 = 0xffffffff
            else
                var_80_15 = *(arg2 + 0x48)
            
            sub_5c10d0(eax_29, var_80_15)
        
        if (xff67edc5::_Atomic_load_uchar::operator[]::_Atomic_load_uchar(eax_29) == 0)
            zip_error_set(&arg1[2], 0x14, 0)
            sub_5c0c20(eax_29)
            sub_5c1400(var_5c)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0xffffffff
        
        int32_t eax_48
        int32_t edx_16
        eax_48, edx_16 = sub_5c0fd0(eax_29)
        
        if (sub_5c21e0(arg1, &var_54, eax_48, edx_16) s< 0)
            sub_5c0c20(eax_29)
            sub_5c1400(var_5c)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0xffffffff
        
        int32_t ecx_30
        int32_t edx_18
        ecx_30, edx_18 = sub_5c0c20(eax_29)
        int32_t* eax_51 = *(arg2 + 0x30)
        
        if (eax_51 != 0)
            eax_51, ecx_30, edx_18 = sub_5bf3e0(arg1, eax_51)
            
            if (eax_51 s< 0)
                sub_5c1400(var_5c)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return 0xffffffff
        
        edi_1 = var_5c
        int32_t eax_54
        
        if (edi_1 != 0)
            eax_54 = sub_5c1890(eax_51, edx_18, ecx_30, arg1, edi_1, 0x300)
        
        if (edi_1 != 0 && eax_54 s< 0)
            goto label_5c0365
        
        int32_t edx_19 = sub_5c1400(edi_1)
        void** eax_55 = *(arg2 + 0x34)
        int32_t eax_56
        
        if (eax_55 != 0)
            eax_56 = sub_5c1890(eax_55, edx_19, arg3, arg1, eax_55, arg3)
        
        if (eax_55 == 0 || eax_56 s>= 0)
            if (ebx_3 != 0)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return sx.d(var_5d_1)
            
            int32_t* esi_1 = *(arg2 + 0x38)
            
            if (esi_1 == 0)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return sx.d(var_5d_1)
            
            if (sub_5bf3e0(arg1, esi_1) s>= 0)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return sx.d(var_5d_1)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0xffffffff
}
