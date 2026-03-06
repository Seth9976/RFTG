// 函数名称: sub_48b9d0
// 虚拟地址: 0x48b9d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_48b9d0(int32_t arg1, double arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    sub_492ac0()
    int32_t result = data_315ff54
    
    if (result != sx.d(*(arg1 + 0x458)) || data_315ff58 != sx.d(*(arg1 + 0x45a))
            || data_315ff5c != sx.d(*(arg1 + 0x459)))
        if (result s> 0)
            sub_4b3fd0(&data_2691c30)
            sub_4b3fd0(&data_2691bc0)
        
        sub_48c780(arg1)
        void* const eax_2 = &data_860ec8
        data_2691c30 = fconvert.d(fconvert.t(arg2) * fconvert.t(0.0001))
        
        if (*(arg1 + 0x459) == 0)
            eax_2 = &data_83f3d3
        
        void* const var_410_2 = eax_2
        int32_t var_414_1 = sx.d(*(arg1 + 0x458))
        int32_t var_418_1 = sx.d(*(arg1 + 0x45a))
        char var_408[0x400]
        sub_5a733b(&var_408, "res/race_net/rftg.eval.%d.%d%s.net")
        sub_4b48a0(&data_2691c30, sub_509140(0x1c, &var_408))
        void* const eax_5 = &data_860ec8
        
        if (*(arg1 + 0x459) == 0)
            eax_5 = &data_83f3d3
        
        void* const var_410_3 = eax_5
        int32_t var_414_2 = sx.d(*(arg1 + 0x458))
        int32_t var_418_2 = sx.d(*(arg1 + 0x45a))
        sub_5a733b(&var_408, "res/race_net/rftg.role.%d.%d%s.net")
        sub_4b48a0(&data_2691bc0, sub_509140(0x1c, &var_408))
        data_2691bc0 = fconvert.d(fconvert.t(arg2) * fconvert.t(0.00050000000000000001))
        result = sx.d(*(arg1 + 0x45a))
        int32_t ecx_2 = sx.d(*(arg1 + 0x459))
        data_315ff54 = sx.d(*(arg1 + 0x458))
        data_315ff58 = result
        data_315ff5c = ecx_2
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
