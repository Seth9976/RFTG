// 函数名称: sub_667dc0
// 虚拟地址: 0x667dc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_667dc0(char* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t eax_3 = *(arg1 + 0x6c)
    
    if ((eax_3.b & 1) != 0)
        if ((eax_3.b & 4) != 0)
            char const* const __saved_edi_1 = "Invalid PLTE after IDAT"
            sub_664100(arg1, "Invalid PLTE after IDAT")
            int32_t eax_4 = sub_667b40(arg1, arg3)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_4
        
        if ((eax_3.b & 2) != 0)
            char const* const __saved_edi_2 = "Duplicate PLTE chunk"
            sub_664320(arg1, "Duplicate PLTE chunk")
            noreturn
        
        char ecx = arg1[0x13b]
        *(arg1 + 0x6c) = eax_3 | 2
        
        if ((ecx & 2) == 0)
            char const* const __saved_edi_3 = "Ignoring PLTE chunk in grayscale PNG"
            sub_664100(arg1, "Ignoring PLTE chunk in grayscale PNG")
            int32_t eax_6 = sub_667b40(arg1, arg3)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_6
        
        int32_t __saved_edi_5
        int32_t __saved_edi_4 = __saved_edi_5
        
        if (arg3 u<= 0x300 && arg3 == arg3 u/ 3 * 3)
            int32_t __saved_ebx_6
            int32_t __saved_ebx_4 = __saved_ebx_6
            int32_t i_2 = arg3 s/ 3
            
            if (i_2 s> 0)
                void var_306
                void* edi_1 = &var_306
                int32_t i_1 = i_2
                int32_t i
                
                do
                    int32_t var_324_3 = 3
                    char var_30c
                    sub_664410(arg1, &var_30c, 3)
                    int32_t var_330_1 = 3
                    sub_662280(arg1, &var_30c, 3)
                    *(edi_1 - 2) = var_30c
                    char var_30b
                    *(edi_1 - 1) = var_30b
                    char var_30a
                    *edi_1 = var_30a
                    edi_1 += 3
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            int32_t var_324_4 = 0
            sub_667b40(arg1, 0)
            void var_308
            uint32_t eax_11 = sub_664b30(arg1, arg2, &var_308, i_2)
            
            if (arg1[0x13b] == 3 && arg2 != 0 && (*(arg2 + 8) & 0x10) != 0)
                if (*(arg1 + 0x134) u> i_2.w)
                    char const* const var_324_5 = "Truncating incorrect tRNS chunk length"
                    eax_11 = sub_664100(arg1, "Truncating incorrect tRNS chunk length")
                    *(arg1 + 0x134) = i_2.w
                
                if (*(arg2 + 0x16) u> i_2.w)
                    char const* const var_324_6 = "Truncating incorrect info tRNS chunk length"
                    eax_11 = sub_664100(arg1, "Truncating incorrect info tRNS chunk length")
                    *(arg2 + 0x16) = i_2.w
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_11
        
        char const* const __saved_ebx_5 = "Invalid palette chunk"
        
        if (ecx != 3)
            sub_664100(arg1, "Invalid palette chunk")
            int32_t eax_12 = sub_667b40(arg1, arg3)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_12
    else
        char const* const __saved_edi = "Missing IHDR before PLTE"
        char* __saved_ebx = arg1
    
    sub_664320()
    noreturn
}
