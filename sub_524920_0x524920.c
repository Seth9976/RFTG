// 函数名称: sub_524920
// 虚拟地址: 0x524920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_524920(int32_t arg1, int32_t arg2, char* arg3, int32_t* arg4, int32_t arg5, int32_t* arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f668
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx = arg3
    var_14 = nullptr
    int32_t eax_3 = ebx[1]
    
    if (eax_3 != 0 && eax_3 != 2)
        int32_t eax_7 = (ebx[2] - ebx - 0xc) s/ 0x1c
        
        if (eax_7 s>= ebx[0x57])
            sub_4c5870("tree.root - tree.expressions < tree.numExpressions", &data_83f3d3, "UI2.cpp", 
                0x6bb, "UI2ExpressionEvalTree")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (eax_7 s< 0)
            sub_4c5870("tree.root - tree.expressions >= 0", &data_83f3d3, "UI2.cpp", 0x6bc, 
                "UI2ExpressionEvalTree")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    if (sub_5247c0() == 1)
        float esi_3 = ebx[2]
        int32_t eax_21 = (esi_3 i- ebx - 0xc) s/ 0x1c
        
        if (eax_21 s>= ebx[0x57])
            sub_4c5870("tree.root - tree.expressions < tree.numExpressions", &data_83f3d3, "UI2.cpp", 
                0x6c1, "UI2ExpressionEvalTree")
            
            if (IsDebuggerPresent() != 1)
                sub_4c5a30()
                noreturn
            
            breakpoint
        
        if (eax_21 s>= 0)
            sub_521e80(arg4, esi_3, arg5, arg6, arg7)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg4
        
        sub_4c5870("tree.root - tree.expressions >= 0", &data_83f3d3, "UI2.cpp", 0x6c2, 
            "UI2ExpressionEvalTree")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char* edi = *ebx
    
    if (edi == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_4c42b0(&var_14, edi)
    int32_t var_8_1 = 0
    sub_521a40(arg4, &var_14)
    int32_t var_8_2 = 0xffffffff
    char* eax_12 = var_14
    
    if (eax_12 != 0 && *eax_12 != 0)
        void* eax_14 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_14 + 0xc) + 0x10
            sub_4f4430(eax_14, sub_4f4380(esi_2), esi_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}
