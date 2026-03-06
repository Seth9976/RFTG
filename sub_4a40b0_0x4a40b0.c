// 函数名称: sub_4a40b0
// 虚拟地址: 0x4a40b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a40b0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t esi = 0
    int32_t eax_4 = sx.d(*(arg3 + arg4 * 0x14 + 0x464))
    int32_t edi = 0
    int32_t var_87c = 0
    int32_t var_878 = 0
    int32_t var_86c = 0
    int32_t var_868 = 0
    int32_t var_870 = 0
    
    if ((*(arg3 + 0x18) == 0 || sx.d(*(arg3 + 0x19)) == eax_4) && *(arg3 + 0x45c) == 0)
        void var_330
        void* var_89c_1 = &var_330
        int32_t var_8a0_1 = 3
        int32_t eax_6
        int32_t ecx_2
        eax_6, ecx_2 = sub_49dea0(eax_4, eax_4 * 0xb4 + arg3 + 0x20, arg3, arg3)
        int32_t ebx_1 = 0
        int32_t var_854_1 = eax_6
        void var_32c
        
        if (eax_6 s> 0)
            do
                if (sx.d(*(&var_330 + (ebx_1 << 3))) == arg4)
                    void* eax_7 = *(&var_32c + (ebx_1 << 3))
                    int32_t var_888_1 = *(eax_7 + 8)
                    int32_t ecx_4 = *(eax_7 + 0xc)
                    
                    if ((ecx_4 & 4) != 0)
                        var_87c = 1
                        edi += 1
                    
                    if ((ecx_4 & 8) != 0)
                        var_878 = 1
                        edi += 1
                    
                    if ((ecx_4 & 0x10) != 0)
                        var_86c = 1
                        edi += 1
                    
                    if (ecx_2 != 0 && *(eax_4 * 0xb4 + arg3 + 0xa3) s> 0)
                        var_868 = 1
                        edi += 1
                
                eax_6 = var_854_1
                ebx_1 += 1
            while (ebx_1 s< eax_6)
            
            esi = 0
        
        if (eax_6 s> 0)
            do
                void* eax_13 = *(&var_32c + (esi << 3))
                int32_t edx_10 = *(eax_13 + 8)
                int32_t var_884_1 = *(eax_13 + 0xc)
                
                if ((edx_10 & 0x20000) != 0 && (edx_10 & 0x40000) == 0)
                    var_870 = 1
                
                esi += 1
            while (esi s< var_854_1)
        
        if (edi != 0)
            void* const edx_13 = arg3
            int32_t ecx_9 = arg2 * 5
            int32_t ebx_2 = sx.d(*(edx_13 + (ecx_9 << 2) + 0x464))
            void* eax_16 = edx_13 + (ecx_9 << 2) + 0x464
            void* var_860_2 = eax_16
            
            if (ebx_2 != eax_4)
                int32_t edi_1 = 0
                int32_t var_854_2 = 0
                int32_t var_85c_1 = 0
                
                if (var_87c != 0)
                    edx_13 = 0x41
                    eax_16 = sub_49c940(ebx_2, 0x41, arg3)
                    
                    if (eax_16 != 0)
                        var_85c_1 = 1
                
                if (var_878 != 0)
                    edx_13 = 0x400
                    eax_16 = sub_49c940(ebx_2, 0x400, arg3)
                    
                    if (eax_16 != 0)
                        edx_13 = 0x41
                        var_854_2 = 1
                        eax_16 = sub_49c940(eax_4, 0x41, arg3)
                        edi_1 = eax_16 * 2
                
                if (var_86c != 0 && sub_4b1530(eax_16, edx_13, arg3, ebx_2) s> 0)
                    var_854_2 = 1
                
                if (var_868 != 0)
                    var_854_2 = 1
                
                if ((var_85c_1 != 0 || var_854_2 != 0) && *(var_860_2 + 3) == 3)
                    void* eax_19 = *(var_860_2 + 8)
                    
                    if (*(eax_19 + 6) == 1)
                        char eax_20 = (*(eax_19 + 0x10)).b
                        
                        if (((eax_20 & 1) != 0 || var_870 != 0)
                                && (var_854_2 != 0 || (eax_20 & 0x40) != 0))
                            int32_t eax_22 = sub_4a1120(arg3, arg2, edi_1, 0, 0, 1)
                            int32_t eax_23 = neg.d(eax_22)
                            sub_5a6aba(eax_1 ^ &__saved_ebp)
                            return neg.d(sbb.d(eax_23, eax_23, eax_22 != 0))
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
