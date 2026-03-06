// 函数名称: sub_527880
// 虚拟地址: 0x527880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_527880(void* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t edx = *(arg1 + 0x145c)
    
    if (edx s> arg2)
        long double x87_r7_1 = float.t(0)
        long double temp0_1 = fconvert.t(*(arg1 + 0x58))
        x87_r7_1 - temp0_1
        int32_t eax_1
        eax_1.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            int32_t eax_2 = *arg3
            
            if (eax_2 == arg2 || edx s< eax_2)
                *arg3 = edx
    
    void* esi_1 = data_27e7fe0
    int32_t eax_3 = *(esi_1 + 0x30)
    float edx_1 = *(esi_1 + 0x28)
    int32_t ebx = *(esi_1 + 0x2c)
    int32_t eax_4 = *(esi_1 + 0x34)
    int32_t eax_5 = *(esi_1 + 0x38)
    float var_34 = edx_1
    
    if (*(arg1 + 0x145c) != arg2)
    label_527a9a:
        int32_t i = 0
        
        if (*(arg1 + 0x19d0) s> 0)
            do
                edx_1 = sub_527880(sub_525900(i, edx_1, arg1), arg2, arg3)
                i += 1
            while (i s< *(arg1 + 0x19d0))
            
            esi_1 = data_27e7fe0
        
        *(esi_1 + 0x28) = var_34
        *(esi_1 + 0x2c) = ebx
        *(esi_1 + 0x30) = eax_3
        *(esi_1 + 0x34) = eax_4
        *(esi_1 + 0x38) = eax_5
    else
        if (eax_5 != 0xffffffff && eax_5 != 0)
            sub_4c5870("oldClipRegion.regions == -1 || oldClipRegion.regions == 0", &data_83f3d3, 
                "UI2.cpp", 0xbe3, "UI2Draw")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        bool cond:0_1 = *(arg1 + 0x14f8) == 0
        float var_44 = edx_1
        int32_t var_40_1 = ebx
        int32_t var_3c_1 = eax_3
        int32_t var_38_1 = eax_4
        float var_20
        
        if (not(cond:0_1))
            if (eax_5 != 0xffffffff)
                sub_4fc810(&var_20, arg1 + 0x14fc, arg1 + 8)
                *(esi_1 + 0x28) = var_20
                int32_t var_1c
                *(esi_1 + 0x2c) = var_1c
                int32_t var_18
                *(esi_1 + 0x30) = var_18
                int32_t var_14
                int32_t var_54_1 = var_14
                *(esi_1 + 0x34) = var_14
            else
                float var_60
                sub_4fc810(&var_60, arg1 + 0x14fc, arg1 + 8)
                var_20 = var_60
                int32_t var_5c
                int32_t var_1c_1 = var_5c
                int32_t var_58
                int32_t var_18_1 = var_58
                int32_t var_54
                int32_t var_14_1 = var_54
                int32_t* eax_8
                int80_t st0_1
                st0_1, eax_8 = sub_4fc620(&var_44, &var_20, &var_60)
                int32_t edx_7 = eax_8[1]
                int32_t ebx_1 = eax_8[2]
                esi_1 = data_27e7fe0
                var_44 = *eax_8
                int32_t var_40_2 = edx_7
                int32_t var_3c_2 = eax_8[2]
                int32_t var_38_2 = eax_8[3]
                int32_t edx_9 = eax_8[1]
                int32_t eax_9 = eax_8[3]
                *(esi_1 + 0x28) = *eax_8
                *(esi_1 + 0x2c) = edx_9
                *(esi_1 + 0x30) = ebx_1
                *(esi_1 + 0x34) = eax_9
            
            *(esi_1 + 0x38) = 0xffffffff
        
        int32_t eax_12 = *(arg1 + 0xc)
        int32_t ecx_11 = *(arg1 + 0x10)
        var_20 = *(arg1 + 8)
        edx_1 = *(arg1 + 0x14)
        int32_t var_1c_2 = eax_12
        int32_t var_18_2 = ecx_11
        float var_14_2 = edx_1
        char eax_13
        
        if (eax_5 == 0xffffffff)
            edx_1 = &var_20
            eax_13 = sub_4fc7d0(&var_44, edx_1)
        
        if (eax_5 != 0xffffffff || eax_13 != 0)
            int32_t eax_14 = *(arg1 + 0x14c0)
            
            if (eax_14 == 1)
                edx_1 = sub_527760(*(arg1 + 0x1534), edx_1, arg1)
                esi_1 = data_27e7fe0
            else if (eax_14 == 3)
                if (*(arg1 + 0x1580) == 0 || *(arg1 + 0x14b1) == 0)
                    long double x87_r7_3 = fconvert.t(*(arg1 + 0x58))
                    long double x87_r6_2 = float.t(0)
                    x87_r6_2 - x87_r7_3
                    int32_t eax_16
                    eax_16.w = (x87_r6_2 < x87_r7_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_2, x87_r7_3) ? 1 : 0) << 0xa
                        | (x87_r6_2 == x87_r7_3 ? 1 : 0) << 0xe
                    bool p_3 = unimplemented  {test ah, 0x44}
                    
                    if (p_3)
                        edx_1 = TPI1::QueryTiForCVRecord(arg1)
                        esi_1 = data_27e7fe0
                else
                    edx_1 = sub_506a30(arg1 + 0x1460)
                    esi_1 = data_27e7fe0
            else if (eax_14 == 5)
                int32_t* eax_20
                eax_20, edx_1 = sub_527760(sub_527850(*(arg1 + 0x60), edx_1, arg1), edx_1, arg1)
                long double x87_r7_2 = fconvert.t(*(arg1 + 0x58))
                long double x87_r6_1 = float.t(0)
                x87_r6_1 - x87_r7_2
                eax_20.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    edx_1 = TPI1::QueryTiForCVRecord(arg1)
                
                esi_1 = data_27e7fe0
            
            goto label_527a9a
    
    sub_5a6aba(var_c ^ &__saved_ebp)
}
