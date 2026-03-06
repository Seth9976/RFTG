// 函数名称: sub_5247c0
// 虚拟地址: 0x5247c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5247c0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f738
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* entry_ebx
    
    if (entry_ebx[1] == 0)
        int32_t ecx_1 = *entry_ebx
        int32_t* var_2c = nullptr
        int32_t var_28_1 = 0
        int32_t var_24_1 = 0
        int32_t var_20_1 = 0
        entry_ebx[0x57] = 0
        var_2c = entry_ebx
        int32_t var_28_2 = ecx_1
        int32_t var_24_2 = ecx_1
        int32_t var_1c
        sub_524790(&var_2c, &var_1c)
        int32_t var_8_1 = 0
        
        if (var_1c != 3)
            entry_ebx[2] = 0
            entry_ebx[1] = 2
        else
            int32_t var_18
            entry_ebx[2] = var_18
            int32_t eax_9 = (var_18 - entry_ebx - 0xc) s/ 0x1c
            
            if (eax_9 s>= entry_ebx[0x57])
                sub_4c5870("tree.root - tree.expressions < tree.numExpressions", &data_83f3d3, 
                    "UI2.cpp", 0x6a0, "UI2ExpressionParse")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (eax_9 s< 0)
                sub_4c5870("tree.root - tree.expressions >= 0", &data_83f3d3, "UI2.cpp", 0x6a1, 
                    "UI2ExpressionParse")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            entry_ebx[1] = 1
        
        int32_t var_8_2 = 0xffffffff
        char* var_14
        char* eax_12 = var_14
        
        if (eax_12 != 0 && *eax_12 != 0)
            void* eax_14 = sub_4c4060(&var_14)
            int32_t temp0_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_3 = *(eax_14 + 0xc) + 0x10
                sub_4f4430(eax_14, sub_4f4380(esi_3), esi_3)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return entry_ebx[1]
}
