// 函数名称: sub_445370
// 虚拟地址: 0x445370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_445370(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_40 = fconvert.s(fconvert.t(10000f))
    int32_t var_50 = arg1
    void* i_3 = nullptr
    void* i_1 = nullptr
    label_4453a7:
    void* edx_1 = *(data_27e7a40 + 0x548)
    void* i_2
    void* i
    
    if (i_1 != 0)
        i_2 = i_1 + 0xb0
        i = i_1 + 0xb0
    else
        i = *(edx_1 + 0x43960)
        i_2 = i
    
    float var_48
    
    while (i u< *(edx_1 + 0x43964) * 0xb0 + *(edx_1 + 0x43960))
        if ((*(i + 0xac) & 0xffff0000) != 0)
            int32_t eax_9 = *i
            i_1 = i
            bool cond:1_1
            
            if (eax_9 == 0)
                if (*(i + 0x5c) == 2)
                    cond:1_1 = *(i + 0x58) != 0
                label_44543a:
                    
                    if (cond:1_1)
                        goto label_4453a7
            else if (eax_9 != 1 && eax_9 != 4)
                cond:1_1 = eax_9 != 6
                goto label_44543a
            void var_34
            __builtin_memcpy(&var_34, sub_4451c0(i), 0x28)
            
            if (sub_4d7c20(&var_34, &var_48).b == 0)
                goto label_4453a7
            
            long double x87_r7_1 = fconvert.t(var_48)
            
            if (i_3 != 0)
                long double x87_r6_1 = fconvert.t(var_40)
                x87_r6_1 - x87_r7_1
                
                if ((((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) != 0)
                    x87_r6_1 - x87_r7_1
                    bool p_1 = unimplemented  {test ah, 0x44}
                    
                    if (p_1 || *i_2 != 1)
                        x87_r7_1 - x87_r6_1
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (p_2)
                            goto label_4453a7
                        
                        if (*i_2 != 6)
                            goto label_4453a7
                        
                        var_40 = fconvert.s(x87_r7_1)
                        i_3 = i_2
                        goto label_4453a7
                
                x87_r7_1 = x87_r6_1
            
            var_40 = fconvert.s(x87_r7_1)
            i_3 = i_2
            goto label_4453a7
        
        i += 0xb0
        i_2 = i
    
    if (i_3 == 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 
    
    *(i_3 + 0xac)
    var_48 = fconvert.s(fconvert.t(var_40))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}
