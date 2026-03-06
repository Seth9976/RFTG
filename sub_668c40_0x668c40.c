// 函数名称: sub_668c40
// 虚拟地址: 0x668c40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_668c40(char* arg1, void* arg2, char* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char eax_2 = (*(arg1 + 0x6c)).b
    
    if ((eax_2 & 1) == 0)
        sub_664320(arg1, "Missing IHDR before iCCP")
        noreturn
    
    char const* const var_124
    
    if ((eax_2 & 4) == 0)
        if ((eax_2 & 2) != 0)
            sub_664100(arg1, "Out of place iCCP chunk")
        
        int32_t eax_3 = *(arg1 + 0x6c)
        
        if ((eax_3 & 0x4000) == 0 && (arg2 == 0 || (*(arg2 + 8) & 0x1800) == 0))
            *(arg1 + 0x6c) = eax_3 | 0x4000
            sub_666530(arg1, *(arg1 + 0x2a8))
            char* eax_6 = sub_6664e0(arg1, &arg3[1])
            *(arg1 + 0x2a8) = eax_6
            sub_664410(arg1, eax_6, arg3)
            sub_662280(arg1, eax_6, arg3)
            
            if (sub_667b40(arg1, 0) != 0)
                int32_t eax_8 = sub_666530(arg1, *(arg1 + 0x2a8))
                *(arg1 + 0x2a8) = 0
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_8
            
            arg3[*(arg1 + 0x2a8)] = 0
            uint32_t eax_10 = *(arg1 + 0x2a8)
            char* edi_2 = eax_10
            
            while (*edi_2 != 0)
                edi_2 = &edi_2[1]
            
            if (&edi_2[1] u>= &arg3[eax_10 - 1])
                sub_666530(arg1, eax_10)
                *(arg1 + 0x2a8) = 0
                uint32_t eax_11 = sub_664100(arg1, "Malformed iCCP chunk")
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_11
            
            eax_10.b = edi_2[1]
            
            if (eax_10.b != 0)
                sub_664100(arg1, "Ignoring nonzero compression type in iCCP chunk")
                eax_10.b = 0
            
            void* edi_5 = &edi_2[2] - *(arg1 + 0x2a8)
            uint32_t eax_12 = zx.d(eax_10.b)
            char var_10c = eax_12.b
            void* var_114
            sub_6669e0(arg1, eax_12, arg3, edi_5, &var_114)
            void* eax_13 = var_114
            uint32_t ebx_2 = eax_13 - edi_5
            
            if (edi_5 u> eax_13 || ebx_2 u< 4)
                sub_666530(arg1, *(arg1 + 0x2a8))
                *(arg1 + 0x2a8) = 0
                uint32_t eax_19 = sub_664100(arg1, "Profile size field missing from iCCP chunk")
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_19
            
            int128_t* ecx_6 = *(arg1 + 0x2a8)
            void* eax_14 = ecx_6 + edi_5
            void* edi_12 =
                ((zx.d(*eax_14) << 8 | zx.d(*(ecx_6 + edi_5 + 1))) << 8 | zx.d(*(eax_14 + 2))) << 8
                | zx.d(*(eax_14 + 3))
            
            if (edi_12 u<= ebx_2)
                sub_664c60(arg1, arg2, ecx_6, var_10c, eax_14, edi_12)
                int32_t eax_17 = sub_666530(arg1, *(arg1 + 0x2a8))
                *(arg1 + 0x2a8) = 0
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_17
            
            sub_666530(arg1, ecx_6)
            *(arg1 + 0x2a8) = 0
            void var_108
            sub_663ee0(&var_108, 1, 1, edi_12)
            sub_663ee0(&var_108, 2, 1, ebx_2)
            uint32_t eax_15 = sub_664180(arg1, &var_108, 
                "Ignoring iCCP chunk with declared size = @1 and actual length = @2")
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_15
        
        var_124 = "Duplicate iCCP chunk"
    else
        var_124 = "Invalid iCCP after IDAT"
    
    sub_664100(arg1, var_124)
    int32_t eax_20 = sub_667b40(arg1, arg3)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_20
}
