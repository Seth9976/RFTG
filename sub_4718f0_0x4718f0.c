// 函数名称: sub_4718f0
// 虚拟地址: 0x4718f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4718f0(int32_t arg1, void* arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* var_540 = arg4
    void* eax_3 = sub_46b2b0(arg3)
    
    if (*arg2 != 0)
        sub_4c5870("gfx.type == RFTGGFX_CARD", &data_83f3d3, "..\code\RFTGShared.cpp", 0x1231, 
            "RFTGHandleConsumePower")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    bool cond:1 = *(eax_3 + 0x1a08) s<= 0
    int32_t ecx = *(arg2 + 0x7c)
    int32_t var_544 = ecx
    int32_t var_53c = 0xffffffff
    int32_t var_534
    
    if (not(cond:1))
        var_534 = *(arg2 + 0xac)
        int32_t i_1 = *(eax_3 + 0x1a08)
        void* eax_5 = eax_3 + 0x14e4
        int32_t i
        
        do
            if (*(eax_5 - 0xa40) == var_534)
                var_53c = *eax_5
            
            eax_5 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    void* edi_3 = var_540
    int32_t var_548
    int32_t var_538
    void var_530
    int32_t eax_7 = sub_4aa720(&var_530, var_53c, ecx, edi_3, arg3, &var_530, &var_538, &var_534, 
        &var_540, &var_548)
    int32_t edx_2 = var_544
    int32_t ecx_1 = var_53c
    *(eax_3 + 0xa98) = edx_2
    *(eax_3 + 0xa9c) = ecx_1
    *(eax_3 + 0xaa0) = 1
    
    if (eax_7 u> 5)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x1262, "RFTGHandleConsumePower")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    void* result
    
    switch (eax_7)
        case 0
            result = sub_470a80(eax_7, edx_2, arg3, var_538, &var_530)
        label_471ab3:
            *(eax_3 + 8) = 1
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return result
        case 1
            *(sub_46b2b0(arg3) + 0x1c) = 0x11
            result = sub_46e150(1)
            goto label_471ab3
        case 2
            void* var_55c_2 = var_540
            result = sub_4707b0(&var_530, arg3, &var_538, var_534, edx_2, ecx_1, &var_530)
            goto label_471ab3
        case 3
            result = sub_4708d0(&var_530, edx_2, arg3, ecx_1, edi_3, edx_2, &var_530, &var_538, 
                var_534, var_540)
            goto label_471ab3
        case 4
            int32_t ecx_4
            ecx_4.b = var_548 == 2
            result = sub_4704c0(&var_538, &var_530, ecx_4)
            goto label_471ab3
        case 5
            int32_t var_55c_5 = 1
            *(eax_3 + 0xaa0) = 0
            sub_469e10(edi_3, arg3, 0xd, 0, &var_544, 1, &var_53c, 1)
            sub_469ff0(arg3)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
}
